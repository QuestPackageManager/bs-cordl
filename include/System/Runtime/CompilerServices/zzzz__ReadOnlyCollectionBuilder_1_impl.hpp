#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ReadOnlyCollectionBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ReadOnlyCollectionBuilder_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*
System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename T>
constexpr ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*& System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__builder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*> const&
System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__builder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
template <typename T>
constexpr void
System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_set__builder(::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____builder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr void System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename T> constexpr void System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
template <typename T> constexpr T& System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename T> constexpr T const& System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename T> constexpr void System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__cordl_internal_set__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*
System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::New_ctor(::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* builder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*>(builder));
}
template <typename T> inline void System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::_ctor(::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
template <typename T> inline T System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*>::get(),
                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*>::get(),
                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::__ReadOnlyCollectionBuilder_1__Enumerator<T>::__ReadOnlyCollectionBuilder_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__Generic__IList_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
template <typename T> constexpr ::System::Collections::IList* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_set__items(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename T> inline ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>());
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(capacity));
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "set_Capacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::IndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "IndexOf",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Insert(int32_t index, T item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "RemoveAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline T System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "Contains",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(),
                                               "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(),
                                               "System.Collections.IList.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.IList.Add",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.IList.Contains",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.IList.IndexOf",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.IList.Insert",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(),
                                               "System.Collections.IList.get_IsFixedSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.IList.Remove",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.IList.get_Item",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.IList.set_Item",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "System.Collections.ICollection.CopyTo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ToArray() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "ToArray",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ToReadOnlyCollection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(),
                                               "ToReadOnlyCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::EnsureCapacity(int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "EnsureCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::IsCompatibleObject(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "IsCompatibleObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ValidateNullValue(::System::Object* value, ::StringW argument) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>::get(), "ValidateNullValue",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, argument);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ReadOnlyCollectionBuilder_1() {}
