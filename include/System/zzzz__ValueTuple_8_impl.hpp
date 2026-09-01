#pragma once
// IWYU pragma private; include "System\ValueTuple_8.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline void System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::_ctor(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7, TRest rest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(),
                                                                                             ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<TRest>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item1, item2, item3, item4, item5, item6, item7, rest);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline bool System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline bool System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::Equals(::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline bool System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                          { "System.Collections.IStructuralEquatable.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_IComparable_CompareTo(::System::Object* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(), { "System.IComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::CompareTo(::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                                       { "System.Collections.IStructuralComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                                                           { "System.Collections.IStructuralEquatable.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::GetHashCodeCore(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                                                                                         { "GetHashCodeCore", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(),
                                                           { "System.IValueTupleInternal.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline ::StringW System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline ::StringW System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_IValueTupleInternal_ToStringEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(), { "System.IValueTupleInternal.ToStringEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Runtime_CompilerServices_ITuple_get_Length() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>(), { "System.Runtime.CompilerServices.ITuple.get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*
System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::i___System__IEquatable_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7_TRest__() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::Collections::IStructuralEquatable*() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::Collections::IStructuralEquatable* System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::i___System__Collections__IStructuralEquatable() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::Collections::IStructuralComparable*() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::Collections::IStructuralComparable* System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::i___System__Collections__IStructuralComparable() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::IComparable* System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*
System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::i___System__IComparable_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7_TRest__() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IValueTupleInternal*() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IValueTupleInternal"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::IValueTupleInternal* System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::i___System__IValueTupleInternal() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::Runtime::CompilerServices::ITuple*() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::Runtime::CompilerServices::ITuple* System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::i___System__Runtime__CompilerServices__ITuple() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3",
// ty: "T3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item5", ty: "T5", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Item6", ty: "T6", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item7", ty: "T7", modifiers: "", def_value: Some("{}") }, CppParam { name: "Rest", ty:
// "TRest", modifiers: "", def_value: Some("{}") }]
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::ValueTuple_8(T1 Item1, T2 Item2, T3 Item3, T4 Item4, T5 Item5, T6 Item6, T7 Item7, TRest Rest) noexcept {
  this->Item1 = Item1;
  this->Item2 = Item2;
  this->Item3 = Item3;
  this->Item4 = Item4;
  this->Item5 = Item5;
  this->Item6 = Item6;
  this->Item7 = Item7;
  this->Rest = Rest;
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::ValueTuple_8() {}
