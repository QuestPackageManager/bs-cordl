#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2, typename T3> constexpr System::Tuple_3<T1, T2, T3>::operator ::System::Collections::IStructuralEquatable*() noexcept {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2, typename T3> constexpr System::Tuple_3<T1, T2, T3>::operator ::System::Collections::IStructuralComparable*() noexcept {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template <typename T1, typename T2, typename T3> constexpr System::Tuple_3<T1, T2, T3>::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template <typename T1, typename T2, typename T3> constexpr System::Tuple_3<T1, T2, T3>::operator ::System::ITupleInternal*() noexcept {
  return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2, typename T3> constexpr System::Tuple_3<T1, T2, T3>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template <typename T1, typename T2, typename T3> constexpr T1& System::Tuple_3<T1, T2, T3>::__get_m_Item1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Item1;
}
template <typename T1, typename T2, typename T3> constexpr T1 const& System::Tuple_3<T1, T2, T3>::__get_m_Item1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Item1;
}
template <typename T1, typename T2, typename T3> constexpr void System::Tuple_3<T1, T2, T3>::__set_m_Item1(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Item1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3> constexpr T2& System::Tuple_3<T1, T2, T3>::__get_m_Item2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Item2;
}
template <typename T1, typename T2, typename T3> constexpr T2 const& System::Tuple_3<T1, T2, T3>::__get_m_Item2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Item2;
}
template <typename T1, typename T2, typename T3> constexpr void System::Tuple_3<T1, T2, T3>::__set_m_Item2(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Item2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3> constexpr T3& System::Tuple_3<T1, T2, T3>::__get_m_Item3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Item3;
}
template <typename T1, typename T2, typename T3> constexpr T3 const& System::Tuple_3<T1, T2, T3>::__get_m_Item3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Item3;
}
template <typename T1, typename T2, typename T3> constexpr void System::Tuple_3<T1, T2, T3>::__set_m_Item3(T3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Item3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3> inline T1 System::Tuple_3<T1, T2, T3>::get_Item1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "get_Item1",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T1, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline T2 System::Tuple_3<T1, T2, T3>::get_Item2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "get_Item2",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T2, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline T3 System::Tuple_3<T1, T2, T3>::get_Item3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "get_Item3",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T3, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline ::System::Tuple_3<T1, T2, T3>* System::Tuple_3<T1, T2, T3>::New_ctor(T1 item1, T2 item2, T3 item3) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_3<T1, T2, T3>*>(item1, item2, item3));
}
template <typename T1, typename T2, typename T3> inline void System::Tuple_3<T1, T2, T3>::_ctor(T1 item1, T2 item2, T3 item3) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item1, item2, item3);
}
template <typename T1, typename T2, typename T3> inline bool System::Tuple_3<T1, T2, T3>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3>
inline bool System::Tuple_3<T1, T2, T3>::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "System.Collections.IStructuralEquatable.Equals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3> inline int32_t System::Tuple_3<T1, T2, T3>::System_IComparable_CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "System.IComparable.CompareTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3>
inline int32_t System::Tuple_3<T1, T2, T3>::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "System.Collections.IStructuralComparable.CompareTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3> inline int32_t System::Tuple_3<T1, T2, T3>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline int32_t System::Tuple_3<T1, T2, T3>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "System.Collections.IStructuralEquatable.GetHashCode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3> inline ::StringW System::Tuple_3<T1, T2, T3>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline ::StringW System::Tuple_3<T1, T2, T3>::System_ITupleInternal_ToString(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(), "System.ITupleInternal.ToString", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, sb);
}
template <typename T1, typename T2, typename T3> inline int32_t System::Tuple_3<T1, T2, T3>::System_Runtime_CompilerServices_ITuple_get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_3<T1, T2, T3>*>::get(),
                                                                             "System.Runtime.CompilerServices.ITuple.get_Length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::System::Tuple_3<T1, T2, T3>::Tuple_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
