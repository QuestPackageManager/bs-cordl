#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedDictionary_2.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedDictionary_2_def.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedKeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*&
AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::__cordl_internal_get__serializedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedList;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* const&
AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::__cordl_internal_get__serializedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedList;
}
template <typename TKey, typename TValue>
constexpr void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::__cordl_internal_set__serializedList(
    ::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____serializedList, value);
}
template <typename TKey, typename TValue> inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* serializedDictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedDictionary);
}
template <typename TKey, typename TValue>
inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue>
inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary,
                                                                                             ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary, comparer);
}
template <typename TKey, typename TValue>
inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
template <typename TKey, typename TValue>
inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, comparer);
}
template <typename TKey, typename TValue>
inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue> inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename TKey, typename TValue>
inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, comparer);
}
template <typename TKey, typename TValue> inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::SyncDictionaryToBackingField_Editor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(),
                                               "SyncDictionaryToBackingField_Editor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(),
                                               "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>::get(),
                                               "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* serializedDictionary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(serializedDictionary));
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(dictionary));
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(dictionary, comparer));
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(collection));
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(collection, comparer));
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(comparer));
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(capacity));
}
template <typename TKey, typename TValue>
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*>(capacity, comparer));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template <typename TKey, typename TValue> constexpr AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ISerializationCallbackReceiver* AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>::SerializedDictionary_2() {}
