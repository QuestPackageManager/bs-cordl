#pragma once
// IWYU pragma private; include "System\Tuple_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2> constexpr T1& System::Tuple_2<T1, T2>::__cordl_internal_get_m_Item1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Item1;
}
template <typename T1, typename T2> constexpr T1 const& System::Tuple_2<T1, T2>::__cordl_internal_get_m_Item1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Item1;
}
template <typename T1, typename T2> constexpr void System::Tuple_2<T1, T2>::__cordl_internal_set_m_Item1(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Item1 = value;
}
template <typename T1, typename T2> constexpr T2& System::Tuple_2<T1, T2>::__cordl_internal_get_m_Item2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Item2;
}
template <typename T1, typename T2> constexpr T2 const& System::Tuple_2<T1, T2>::__cordl_internal_get_m_Item2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Item2;
}
template <typename T1, typename T2> constexpr void System::Tuple_2<T1, T2>::__cordl_internal_set_m_Item2(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Item2 = value;
}
template <typename T1, typename T2> inline T1 System::Tuple_2<T1, T2>::get_Item1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(), { "get_Item1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T1>(this, ___internal_method);
}
template <typename T1, typename T2> inline T2 System::Tuple_2<T1, T2>::get_Item2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(), { "get_Item2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T2>(this, ___internal_method);
}
template <typename T1, typename T2> inline void System::Tuple_2<T1, T2>::_ctor(T1 item1, T2 item2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(), { ".ctor", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item1, item2);
}
template <typename T1, typename T2> inline bool System::Tuple_2<T1, T2>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Tuple_2<T1, T2>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename T1, typename T2> inline bool System::Tuple_2<T1, T2>::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(),
                          { "System.Collections.IStructuralEquatable.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2> inline int32_t System::Tuple_2<T1, T2>::System_IComparable_CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(), { "System.IComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
template <typename T1, typename T2> inline int32_t System::Tuple_2<T1, T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(),
                                       { "System.Collections.IStructuralComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2> inline int32_t System::Tuple_2<T1, T2>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Tuple_2<T1, T2>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T1, typename T2> inline int32_t System::Tuple_2<T1, T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(),
                                                           { "System.Collections.IStructuralEquatable.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, comparer);
}
template <typename T1, typename T2> inline ::StringW System::Tuple_2<T1, T2>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Tuple_2<T1, T2>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::StringW System::Tuple_2<T1, T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(), { "System.ITupleInternal.ToString", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, sb);
}
template <typename T1, typename T2> inline int32_t System::Tuple_2<T1, T2>::System_Runtime_CompilerServices_ITuple_get_Length() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Tuple_2<T1, T2>*>(), { "System.Runtime.CompilerServices.ITuple.get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::System::Tuple_2<T1, T2>* System::Tuple_2<T1, T2>::New_ctor(T1 item1, T2 item2) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Tuple_2<T1, T2>*>(item1, item2));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2> constexpr System::Tuple_2<T1, T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2> constexpr ::System::Collections::IStructuralEquatable* System::Tuple_2<T1, T2>::i___System__Collections__IStructuralEquatable() noexcept {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2> constexpr System::Tuple_2<T1, T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2> constexpr ::System::Collections::IStructuralComparable* System::Tuple_2<T1, T2>::i___System__Collections__IStructuralComparable() noexcept {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template <typename T1, typename T2> constexpr System::Tuple_2<T1, T2>::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
template <typename T1, typename T2> constexpr ::System::IComparable* System::Tuple_2<T1, T2>::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template <typename T1, typename T2> constexpr System::Tuple_2<T1, T2>::operator ::System::ITupleInternal*() noexcept {
  return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ITupleInternal"
template <typename T1, typename T2> constexpr ::System::ITupleInternal* System::Tuple_2<T1, T2>::i___System__ITupleInternal() noexcept {
  return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2> constexpr System::Tuple_2<T1, T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2> constexpr ::System::Runtime::CompilerServices::ITuple* System::Tuple_2<T1, T2>::i___System__Runtime__CompilerServices__ITuple() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::System::Tuple_2<T1, T2>::Tuple_2() {}
