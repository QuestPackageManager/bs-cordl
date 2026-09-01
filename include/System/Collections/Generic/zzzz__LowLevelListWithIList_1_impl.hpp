#pragma once
// IWYU pragma private; include "System\Collections\Generic\LowLevelListWithIList_1.hpp"
#include "System/Collections/Generic/zzzz__LowLevelList_1_impl.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::_ctor(::System::Collections::Generic::LowLevelListWithIList_1<T>* list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename T> inline void System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::MoveNextRare() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>>(), { "MoveNextRare", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LowLevelListWithIList_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "T", modifiers: "", def_value:
// Some("{}") }]
template <typename T>
constexpr ::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::LowLevelListWithIList_1_Enumerator(::System::Collections::Generic::LowLevelListWithIList_1<T>* _list, int32_t _index,
                                                                                                                    int32_t _version, T _current) noexcept {
  this->_list = _list;
  this->_index = _index;
  this->_version = _version;
  this->_current = _current;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::LowLevelListWithIList_1_Enumerator<T>::LowLevelListWithIList_1_Enumerator() {}
template <typename T> inline void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename T> inline bool System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(), { "System.Collections.Generic.ICollection<T>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::LowLevelListWithIList_1<T>*>());
}
template <typename T> inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(capacity));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__Generic__IList_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::LowLevelListWithIList_1<T>::LowLevelListWithIList_1() {}
