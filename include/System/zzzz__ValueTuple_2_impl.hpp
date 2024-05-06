#pragma once
// IWYU pragma private; include "System/ValueTuple_2.hpp"
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
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>*() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr ::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>* System::ValueTuple_2<T1, T2>::i___System__IEquatable_1___System__ValueTuple_2_T1_T2__() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::Collections::IStructuralEquatable*() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2> constexpr ::System::Collections::IStructuralEquatable* System::ValueTuple_2<T1, T2>::i___System__Collections__IStructuralEquatable() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::Collections::IStructuralComparable*() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2> constexpr ::System::Collections::IStructuralComparable* System::ValueTuple_2<T1, T2>::i___System__Collections__IStructuralComparable() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable"
template <typename T1, typename T2> constexpr ::System::IComparable* System::ValueTuple_2<T1, T2>::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IComparable_1<::System::ValueTuple_2<T1, T2>>*() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2> constexpr ::System::IComparable_1<::System::ValueTuple_2<T1, T2>>* System::ValueTuple_2<T1, T2>::i___System__IComparable_1___System__ValueTuple_2_T1_T2__() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::IValueTupleInternal*() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IValueTupleInternal"
template <typename T1, typename T2> constexpr ::System::IValueTupleInternal* System::ValueTuple_2<T1, T2>::i___System__IValueTupleInternal() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2> constexpr System::ValueTuple_2<T1, T2>::operator ::System::Runtime::CompilerServices::ITuple*() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2> constexpr ::System::Runtime::CompilerServices::ITuple* System::ValueTuple_2<T1, T2>::i___System__Runtime__CompilerServices__ITuple() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T1, typename T2> inline void System::ValueTuple_2<T1, T2>::_ctor(T1 item1, T2 item2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item1, item2);
}
template <typename T1, typename T2> inline bool System::ValueTuple_2<T1, T2>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2> inline bool System::ValueTuple_2<T1, T2>::Equals(::System::ValueTuple_2<T1, T2> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1, T2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T1, typename T2>
inline bool System::ValueTuple_2<T1, T2>::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "System.Collections.IStructuralEquatable.Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_IComparable_CompareTo(::System::Object* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "System.IComparable.CompareTo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::CompareTo(::System::ValueTuple_2<T1, T2> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1, T2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T1, typename T2>
inline int32_t System::ValueTuple_2<T1, T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "System.Collections.IStructuralComparable.CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "System.Collections.IStructuralEquatable.GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::GetHashCodeCore(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "GetHashCodeCore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "System.IValueTupleInternal.GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template <typename T1, typename T2> inline ::StringW System::ValueTuple_2<T1, T2>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::StringW System::ValueTuple_2<T1, T2>::System_IValueTupleInternal_ToStringEnd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "System.IValueTupleInternal.ToStringEnd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline int32_t System::ValueTuple_2<T1, T2>::System_Runtime_CompilerServices_ITuple_get_Length() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1, T2>>::get(), "System.Runtime.CompilerServices.ITuple.get_Length",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("nullptr") }]
template <typename T1, typename T2> constexpr ::System::ValueTuple_2<T1, T2>::ValueTuple_2(T1 Item1, T2 Item2) noexcept {
  this->Item1 = Item1;
  this->Item2 = Item2;
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::System::ValueTuple_2<T1, T2>::ValueTuple_2() {}
