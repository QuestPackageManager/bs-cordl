#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\FixedArray3_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
template <typename T> inline T UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline bool UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Contains(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::IndexOf(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "IndexOf", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Clear(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "Clear", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::Enumerate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "Enumerate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_0", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "_1", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "_2", ty: "T",
// modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::FixedArray3_1(T _0, T _1, T _2) noexcept {
  this->_0 = _0;
  this->_1 = _1;
  this->_2 = _2;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>::FixedArray3_1() {}
template <typename T> constexpr int32_t& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T> constexpr int32_t& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_set___4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
template <typename T>
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
template <typename T>
constexpr void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_set___3____4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
template <typename T> constexpr int32_t& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr int32_t const& UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<T>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1__Enumerate_d__10<T>::FixedArray3_1__Enumerate_d__10() {}
