#pragma once
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template <typename TKey, typename TValue>
inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>*
System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>*>(object, method));
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TKey, typename TValue> inline TValue System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>::Invoke(TKey key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>::__ConditionalWeakTable_2__CreateValueCallback() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*> const&
System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
template <typename TKey, typename TValue>
constexpr void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__set__table(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr int32_t& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__get__currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__get__currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
template <typename TKey, typename TValue> constexpr void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__set__currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentIndex = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> const& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TKey, typename TValue>
constexpr void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__set__current(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
template <typename TKey, typename TValue>
inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*
System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::New_ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* table) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>(table));
}
template <typename TKey, typename TValue>
inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::_ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::Finalize() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>::get(),
                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>::get(),
                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>*>::get(),
                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey, TValue>::__ConditionalWeakTable_2__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*>&
System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> const&
System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename TKey, typename TValue>
constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__set_data(
    ::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
template <typename TKey, typename TValue> constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr int32_t& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
template <typename TKey, typename TValue> constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
template <typename TKey, typename TValue>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::RehashWithoutResize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(),
                                               "RehashWithoutResize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::RecomputeSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(),
                                               "RecomputeSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Rehash() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(), "Rehash",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(), "Add", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(), "Remove",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::TryGetValue(TKey key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(), "TryGetValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline TValue System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::GetValue(
    TKey key, ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>* createValueCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(), "GetValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key, createValueCallback);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(),
      "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::ConditionalWeakTable_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
