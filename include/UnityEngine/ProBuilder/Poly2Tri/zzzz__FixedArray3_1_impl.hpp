#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline T UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(), "set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline bool UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Contains(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(), "Contains",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::IndexOf(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(), "IndexOf",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(),
                                                                             "Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Clear(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(), "Clear",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Enumerate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(),
                                                                             "Enumerate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_0", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_1", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_2", ty:
// "T", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::FixedArray3_1(T _0, T _1, T _2) noexcept {
  this->_0 = _0;
  this->_1 = _1;
  this->_2 = _2;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::FixedArray3_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__set___4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3____4__this;
}
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3____4__this;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__set___3____4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____3____4__this = value;
}
template <typename T> constexpr int32_t& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr int32_t const& UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____i_5__2 = value;
}
template <typename T>
inline ::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>* UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>(__1__state));
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>::__FixedArray3_1___Enumerate_d__10() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
