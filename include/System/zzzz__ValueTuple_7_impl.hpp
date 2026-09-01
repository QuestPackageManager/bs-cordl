#pragma once
// IWYU pragma private; include "System\ValueTuple_7.hpp"
#include "System/zzzz__ValueTuple_7_def.hpp"
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> inline bool System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline bool System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::Equals(::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline bool System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(),
                          { "System.Collections.IStructuralEquatable.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::System_IComparable_CompareTo(::System::Object* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(), { "System.IComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::CompareTo(::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(),
                                       { "System.Collections.IStructuralComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(),
                                                           { "System.Collections.IStructuralEquatable.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::GetHashCodeCore(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(),
                                                                                         { "GetHashCodeCore", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(),
                                                           { "System.IValueTupleInternal.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> inline ::StringW System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::StringW System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::System_IValueTupleInternal_ToStringEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(), { "System.IValueTupleInternal.ToStringEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::System_Runtime_CompilerServices_ITuple_get_Length() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>(), { "System.Runtime.CompilerServices.ITuple.get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::operator ::System::IEquatable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::IEquatable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*
System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::i___System__IEquatable_1___System__ValueTuple_7_T1_T2_T3_T4_T5_T6_T7__() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::operator ::System::Collections::IStructuralEquatable*() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::Collections::IStructuralEquatable* System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::i___System__Collections__IStructuralEquatable() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::operator ::System::Collections::IStructuralComparable*() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::Collections::IStructuralComparable* System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::i___System__Collections__IStructuralComparable() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> constexpr System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::IComparable* System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::operator ::System::IComparable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::IComparable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*
System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::i___System__IComparable_1___System__ValueTuple_7_T1_T2_T3_T4_T5_T6_T7__() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::operator ::System::IValueTupleInternal*() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IValueTupleInternal"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::IValueTupleInternal* System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::i___System__IValueTupleInternal() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::operator ::System::Runtime::CompilerServices::ITuple*() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::Runtime::CompilerServices::ITuple* System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::i___System__Runtime__CompilerServices__ITuple() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3",
// ty: "T3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item5", ty: "T5", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Item6", ty: "T6", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item7", ty: "T7", modifiers: "", def_value: Some("{}") }]
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::ValueTuple_7(T1 Item1, T2 Item2, T3 Item3, T4 Item4, T5 Item5, T6 Item6, T7 Item7) noexcept {
  this->Item1 = Item1;
  this->Item2 = Item2;
  this->Item3 = Item3;
  this->Item4 = Item4;
  this->Item5 = Item5;
  this->Item6 = Item6;
  this->Item7 = Item7;
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> constexpr ::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>::ValueTuple_7() {}
