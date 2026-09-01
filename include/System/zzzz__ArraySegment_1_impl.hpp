#pragma once
// IWYU pragma private; include "System\ArraySegment_1.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::ArraySegment_1_Enumerator<T>::_ctor(::System::ArraySegment_1<T> arraySegment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1_Enumerator<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::ArraySegment_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, arraySegment);
}
template <typename T> inline bool System::ArraySegment_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline T System::ArraySegment_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* System::ArraySegment_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1_Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1_Enumerator<T>>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::ArraySegment_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::ArraySegment_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::ArraySegment_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::ArraySegment_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::ArraySegment_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::ArraySegment_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_end", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::ArraySegment_1_Enumerator<T>::ArraySegment_1_Enumerator(::ArrayW<T> _array, int32_t _start, int32_t _end, int32_t _current) noexcept {
  this->_array = _array;
  this->_start = _start;
  this->_end = _end;
  this->_current = _current;
}
// Ctor Parameters []
template <typename T> constexpr ::System::ArraySegment_1_Enumerator<T>::ArraySegment_1_Enumerator() {}
template <typename T> inline void System::ArraySegment_1<T>::setStaticF__Empty_k__BackingField(::System::ArraySegment_1<T> value) {
  ::cordl_internals::setStaticField<::System::ArraySegment_1<T>, "<Empty>k__BackingField", ::System::ArraySegment_1<T>>(std::forward<::System::ArraySegment_1<T>>(value));
}
template <typename T> inline ::System::ArraySegment_1<T> System::ArraySegment_1<T>::getStaticF__Empty_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::ArraySegment_1<T>, "<Empty>k__BackingField", ::System::ArraySegment_1<T>>();
}
template <typename T> inline ::System::ArraySegment_1<T> System::ArraySegment_1<T>::get_Empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "get_Empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<T>>(nullptr, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::_ctor(::ArrayW<T> array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void System::ArraySegment_1<T>::_ctor(::ArrayW<T> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, offset, count);
}
template <typename T> inline ::ArrayW<T> System::ArraySegment_1<T>::get_Array() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "get_Array", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::get_Offset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "get_Offset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::System::ArraySegment_1_Enumerator<T> System::ArraySegment_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ArraySegment_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::CopyTo(::ArrayW<T> destination, int32_t destinationIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, destinationIndex);
}
template <typename T> inline bool System::ArraySegment_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ArraySegment_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline bool System::ArraySegment_1<T>::Equals(::System::ArraySegment_1<T> obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "Equals", {}, { ::i2c::type_of<::System::ArraySegment_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline T System::ArraySegment_1<T>::System_Collections_Generic_IList_T__get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.IList<T>.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__set_Item(int32_t index, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.IList<T>.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::System_Collections_Generic_IList_T__IndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.IList<T>.IndexOf", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, item);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__Insert(int32_t index, T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.IList<T>.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, item);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.IList<T>.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline T System::ArraySegment_1<T>::System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.IReadOnlyList<T>.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.ICollection<T>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.ICollection<T>.Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.ICollection<T>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.ICollection<T>.Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template <typename T> inline bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.ICollection<T>.Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::ArraySegment_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::ArraySegment_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::ThrowInvalidOperationIfDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySegment_1<T>>(), { "ThrowInvalidOperationIfDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IList_1<T>*() {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IList_1_T_() {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__ICollection_1_T_() {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::ArraySegment_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::ArraySegment_1<T>::ArraySegment_1(::ArrayW<T> _array, int32_t _offset, int32_t _count) noexcept {
  this->_array = _array;
  this->_offset = _offset;
  this->_count = _count;
}
// Ctor Parameters []
template <typename T> constexpr ::System::ArraySegment_1<T>::ArraySegment_1() {}
