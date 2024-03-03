#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "uniqueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unfoundCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Collections::Generic::__HashSet_1__ElementCount<T>::__HashSet_1__ElementCount(int32_t uniqueCount, int32_t unfoundCount) noexcept {
  this->uniqueCount = uniqueCount;
  this->unfoundCount = unfoundCount;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::__HashSet_1__ElementCount<T>::__HashSet_1__ElementCount() {}
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "value", ty: "T", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::System::Collections::Generic::__HashSet_1__Slot<T>::__HashSet_1__Slot(int32_t hashCode, int32_t next, T value) noexcept {
  this->hashCode = hashCode;
  this->next = next;
  this->value = value;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::__HashSet_1__Slot<T>::__HashSet_1__Slot() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Collections::Generic::__HashSet_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::__HashSet_1__Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Generic::__HashSet_1__Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Collections::Generic::__HashSet_1__Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Collections::Generic::__HashSet_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Collections::Generic::__HashSet_1__Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void System::Collections::Generic::__HashSet_1__Enumerator<T>::_ctor(::System::Collections::Generic::HashSet_1<T>* set) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__HashSet_1__Enumerator<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set);
}
template <typename T> inline void System::Collections::Generic::__HashSet_1__Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__HashSet_1__Enumerator<T>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::__HashSet_1__Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__HashSet_1__Enumerator<T>>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::__HashSet_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__HashSet_1__Enumerator<T>>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Generic::__HashSet_1__Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__HashSet_1__Enumerator<T>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__HashSet_1__Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__HashSet_1__Enumerator<T>>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: Some("nullptr") }]
template <typename T>
constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<T>::__HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<T>* _set, int32_t _index, int32_t _version,
                                                                                              T _current) noexcept {
  this->_set = _set;
  this->_index = _index;
  this->_version = _version;
  this->_current = _current;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<T>::__HashSet_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Collections::Generic::HashSet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* System::Collections::Generic::HashSet_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Generic::HashSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Generic::HashSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Generic::HashSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Collections::Generic::HashSet_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::Generic::HashSet_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* System::Collections::Generic::HashSet_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::Collections::Generic::HashSet_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Generic::HashSet_1<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr System::Collections::Generic::HashSet_1<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Generic::HashSet_1<T>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename T> constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buckets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>&
System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__slots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slots;
}
template <typename T>
constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> const&
System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__slots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slots;
}
template <typename T>
constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__slots(
    ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
template <typename T> constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
template <typename T> constexpr int32_t& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__lastIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastIndex;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__lastIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastIndex;
}
template <typename T> constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__lastIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastIndex = value;
}
template <typename T> constexpr int32_t& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__freeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeList;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__freeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeList;
}
template <typename T> constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__freeList(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeList = value;
}
template <typename T> constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<T>*> const& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename T> constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__comparer(::System::Collections::Generic::IEqualityComparer_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename T> constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__siInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____siInfo;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& System::Collections::Generic::HashSet_1<T>::__cordl_internal_get__siInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____siInfo;
}
template <typename T> constexpr void System::Collections::Generic::HashSet_1<T>::__cordl_internal_set__siInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____siInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* System::Collections::Generic::HashSet_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::HashSet_1<T>*>());
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* System::Collections::Generic::HashSet_1<T>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::HashSet_1<T>*>(comparer));
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::_ctor(::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* System::Collections::Generic::HashSet_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::HashSet_1<T>*>(capacity));
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* System::Collections::Generic::HashSet_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::HashSet_1<T>*>(collection));
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
template <typename T>
inline ::System::Collections::Generic::HashSet_1<T>* System::Collections::Generic::HashSet_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection,
                                                                                                          ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::HashSet_1<T>*>(collection, comparer));
}
template <typename T>
inline void System::Collections::Generic::HashSet_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, comparer);
}
template <typename T>
inline ::System::Collections::Generic::HashSet_1<T>* System::Collections::Generic::HashSet_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::HashSet_1<T>*>(info, context));
}
template <typename T>
inline void System::Collections::Generic::HashSet_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::CopyFrom(::System::Collections::Generic::HashSet_1<T>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
template <typename T>
inline ::System::Collections::Generic::HashSet_1<T>* System::Collections::Generic::HashSet_1<T>::New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::HashSet_1<T>*>(capacity, comparer));
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, comparer);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::System_Collections_Generic_ICollection_T__Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "System.Collections.Generic.ICollection<T>.Add",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::HashSet_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "Contains",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline bool System::Collections::Generic::HashSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline int32_t System::Collections::Generic::HashSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::HashSet_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                               "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::__HashSet_1__Enumerator<T> System::Collections::Generic::HashSet_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__HashSet_1__Enumerator<T>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::HashSet_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Generic::HashSet_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Generic::HashSet_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
template <typename T> inline bool System::Collections::Generic::HashSet_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "UnionWith", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "IntersectWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "ExceptWith", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::HashSet_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "SetEquals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex, count);
}
template <typename T> inline int32_t System::Collections::Generic::HashSet_1<T>::RemoveWhere(::System::Predicate_1<T>* match) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "RemoveWhere", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, match);
}
template <typename T> inline ::System::Collections::Generic::IEqualityComparer_1<T>* System::Collections::Generic::HashSet_1<T>::get_Comparer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                                                             "get_Comparer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEqualityComparer_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "TrimExcess",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Generic::HashSet_1<T>::Initialize(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, capacity);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::IncreaseCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                                                             "IncreaseCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::SetCapacity(int32_t newSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "SetCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSize);
}
template <typename T> inline bool System::Collections::Generic::HashSet_1<T>::AddIfNotPresent(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "AddIfNotPresent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::AddValue(int32_t index, int32_t hashCode, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "AddValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, hashCode, value);
}
template <typename T> inline bool System::Collections::Generic::HashSet_1<T>::ContainsAllElements(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "ContainsAllElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "IntersectWithHashSetWithSameEC", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::HashSet_1<T>::IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "IntersectWithEnumerable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t System::Collections::Generic::HashSet_1<T>::InternalIndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "InternalIndexOf",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename T>
inline ::System::Collections::Generic::__HashSet_1__ElementCount<T> System::Collections::Generic::HashSet_1<T>::CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>* other,
                                                                                                                                              bool returnIfUnfound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "CheckUniqueAndUnfoundElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__HashSet_1__ElementCount<T>, false>(this, ___internal_method, other, returnIfUnfound);
}
template <typename T>
inline bool System::Collections::Generic::HashSet_1<T>::AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<T>* set1, ::System::Collections::Generic::HashSet_1<T>* set2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "AreEqualityComparersEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, set1, set2);
}
template <typename T> inline int32_t System::Collections::Generic::HashSet_1<T>::InternalGetHashCode(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::HashSet_1<T>*>::get(), "InternalGetHashCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>::HashSet_1() {}
