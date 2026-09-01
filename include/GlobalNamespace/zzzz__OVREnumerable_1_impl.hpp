#pragma once
// IWYU pragma private; include "GlobalNamespace\OVREnumerable_1.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::Enumerator_OVREnumerable_1_CollectionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::Enumerator_OVREnumerable_1_CollectionType() {}
template <typename T> constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::None{ static_cast<int32_t>(0x0) };
template <typename T>
constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::ReadOnlyList{ static_cast<int32_t>(0x1) };
template <typename T> constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::List{ static_cast<int32_t>(0x2) };
template <typename T> constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::Set{ static_cast<int32_t>(0x3) };
template <typename T> constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::Queue{ static_cast<int32_t>(0x4) };
template <typename T> constexpr ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>::Enumerable{ static_cast<int32_t>(0x5) };
template <typename T> inline void GlobalNamespace::OVREnumerable_1_Enumerator<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
template <typename T> inline bool GlobalNamespace::OVREnumerable_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OVREnumerable_1_Enumerator<T>::MoveNextReadOnlyList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { "MoveNextReadOnlyList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVREnumerable_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::OVREnumerable_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::OVREnumerable_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVREnumerable_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVREnumerable_1_Enumerator<T>::ValidateAndThrow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(), { "ValidateAndThrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr GlobalNamespace::OVREnumerable_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OVREnumerable_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::OVREnumerable_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVREnumerable_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVREnumerable_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVREnumerable_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_type", ty:
// "::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_readOnlyList", ty:
// "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_setEnumerator", ty: "::System::Collections::Generic::HashSet_1_Enumerator<T>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_queueEnumerator", ty: "::System::Collections::Generic::Queue_1_Enumerator<T>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_listEnumerator", ty: "::System::Collections::Generic::List_1_Enumerator<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::OVREnumerable_1_Enumerator<T>::OVREnumerable_1_Enumerator(int32_t _listIndex, ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> _type, int32_t _listCount,
                                                                                       ::System::Collections::Generic::IEnumerator_1<T>* _enumerator,
                                                                                       ::System::Collections::Generic::IReadOnlyList_1<T>* _readOnlyList,
                                                                                       ::System::Collections::Generic::HashSet_1_Enumerator<T> _setEnumerator,
                                                                                       ::System::Collections::Generic::Queue_1_Enumerator<T> _queueEnumerator,
                                                                                       ::System::Collections::Generic::List_1_Enumerator<T> _listEnumerator) noexcept {
  this->_listIndex = _listIndex;
  this->_type = _type;
  this->_listCount = _listCount;
  this->_enumerator = _enumerator;
  this->_readOnlyList = _readOnlyList;
  this->_setEnumerator = _setEnumerator;
  this->_queueEnumerator = _queueEnumerator;
  this->_listEnumerator = _listEnumerator;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVREnumerable_1_Enumerator<T>::OVREnumerable_1_Enumerator() {}
template <typename T> inline void GlobalNamespace::OVREnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
template <typename T> inline ::GlobalNamespace::OVREnumerable_1_Enumerator<T> GlobalNamespace::OVREnumerable_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OVREnumerable_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::OVREnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OVREnumerable_1<T>::TryGetCount(::by_ref<int32_t> count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(), { "TryGetCount", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, count);
}
template <typename T> inline ::System::Nullable_1<int32_t> GlobalNamespace::OVREnumerable_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(*this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::OVREnumerable_1<T>::GetCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(), { "GetCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::OVREnumerable_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::OVREnumerable_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::OVREnumerable_1<T>::OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept {
  this->_enumerable = _enumerable;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVREnumerable_1<T>::OVREnumerable_1() {}
