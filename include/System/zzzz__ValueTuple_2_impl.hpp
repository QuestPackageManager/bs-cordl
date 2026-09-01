#pragma once
// IWYU pragma private; include "System\ValueTuple_2.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2> inline void System::ValueTuple_2<T1, T2>::_ctor(T1 item1, T2 item2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { ".ctor", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item1, item2);
}
template <typename T1, typename T2> inline bool System::ValueTuple_2<T1, T2>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T1, typename T2> inline bool System::ValueTuple_2<T1, T2>::Equals(::System::ValueTuple_2<T1, T2> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { "Equals", {}, { ::i2c::type_of<::System::ValueTuple_2<T1, T2>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T1, typename T2>
inline bool System::ValueTuple_2<T1, T2>::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(),
                          { "System.Collections.IStructuralEquatable.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_IComparable_CompareTo(::System::Object* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { "System.IComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::CompareTo(::System::ValueTuple_2<T1, T2> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { "CompareTo", {}, { ::i2c::type_of<::System::ValueTuple_2<T1, T2>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T1, typename T2>
inline int32_t System::ValueTuple_2<T1, T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(),
                                       { "System.Collections.IStructuralComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(),
                                                           { "System.Collections.IStructuralEquatable.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::GetHashCodeCore(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { "GetHashCodeCore", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { "System.IValueTupleInternal.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2> inline ::StringW System::ValueTuple_2<T1, T2>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T1, typename T2> inline ::StringW System::ValueTuple_2<T1, T2>::System_IValueTupleInternal_ToStringEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { "System.IValueTupleInternal.ToStringEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_Runtime_CompilerServices_ITuple_get_Length() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_2<T1, T2>>(), { "System.Runtime.CompilerServices.ITuple.get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>*() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr ::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>* System::ValueTuple_2<T1, T2>::i___System__IEquatable_1___System__ValueTuple_2_T1_T2__() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::Collections::IStructuralEquatable*() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2> constexpr ::System::Collections::IStructuralEquatable* System::ValueTuple_2<T1, T2>::i___System__Collections__IStructuralEquatable() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::Collections::IStructuralComparable*() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2> constexpr ::System::Collections::IStructuralComparable* System::ValueTuple_2<T1, T2>::i___System__Collections__IStructuralComparable() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
template <typename T1, typename T2> constexpr ::System::IComparable* System::ValueTuple_2<T1, T2>::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IComparable_1<::System::ValueTuple_2<T1, T2>>*() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr ::System::IComparable_1<::System::ValueTuple_2<T1, T2>>* System::ValueTuple_2<T1, T2>::i___System__IComparable_1___System__ValueTuple_2_T1_T2__() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IValueTupleInternal*() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IValueTupleInternal"
template <typename T1, typename T2> constexpr ::System::IValueTupleInternal* System::ValueTuple_2<T1, T2>::i___System__IValueTupleInternal() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::Runtime::CompilerServices::ITuple*() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2> constexpr ::System::Runtime::CompilerServices::ITuple* System::ValueTuple_2<T1, T2>::i___System__Runtime__CompilerServices__ITuple() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }]
template <typename T1, typename T2> constexpr ::System::ValueTuple_2<T1, T2>::ValueTuple_2(T1 Item1, T2 Item2) noexcept {
  this->Item1 = Item1;
  this->Item2 = Item2;
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::System::ValueTuple_2<T1, T2>::ValueTuple_2() {}
