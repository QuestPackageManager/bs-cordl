#pragma once
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__InsertionBehavior_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "key", ty: "TKey", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("nullptr") }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>::__Dictionary_2__Entry(int32_t hashCode, int32_t next, TKey key, TValue value) noexcept {
  this->hashCode = hashCode;
  this->next = next;
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>::__Dictionary_2__Entry() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::__Dictionary_2__Enumerator<TKey,
                                                                   TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::operator ::System::Collections::IDictionaryEnumerator*() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary, int32_t getEnumeratorRetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary, getEnumeratorRetType);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(), "get_Current",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::DictionaryEntry System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IDictionaryEnumerator.get_Entry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IDictionaryEnumerator.get_Key", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IDictionaryEnumerator.get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_version", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty:
// "::System::Collections::Generic::KeyValuePair_2<TKey,TValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::__Dictionary_2__Enumerator(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary,
                                                                                                               int32_t _version, int32_t _index,
                                                                                                               ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _current,
                                                                                                               int32_t _getEnumeratorRetType) noexcept {
  this->_dictionary = _dictionary;
  this->_version = _version;
  this->_index = _index;
  this->_current = _current;
  this->_getEnumeratorRetType = _getEnumeratorRetType;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>::__Dictionary_2__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<TKey>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TKey, typename TValue>
inline void GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>>::get(), "get_Current",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_index", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_currentKey", ty: "TKey", modifiers: "",
// def_value: Some("nullptr") }]
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::__Dictionary_2__KeyCollection__Enumerator(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary,
                                                                                                                                int32_t _index, int32_t _version, TKey _currentKey) noexcept {
  this->_dictionary = _dictionary;
  this->_index = _index;
  this->_version = _version;
  this->_currentKey = _currentKey;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>::__Dictionary_2__KeyCollection__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TKey>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::__get__dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const&
System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::__get__dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::__set__dictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*
System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>(dictionary));
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue>
inline ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue> System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::CopyTo(::ArrayW<TKey, ::Array<TKey>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey, ::Array<TKey>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(), "get_Count",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TKey>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Add(TKey item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(), "System.Collections.Generic.ICollection<TKey>.Add",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TKey>.Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Contains(TKey item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
      "System.Collections.Generic.ICollection<TKey>.Contains", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Remove(TKey item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
      "System.Collections.Generic.ICollection<TKey>.Remove", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TKey>* System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_IEnumerable_TKey__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TKey>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TKey>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(), "System.Collections.ICollection.CopyTo",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>::__Dictionary_2__KeyCollection() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TKey, typename TValue>
inline void GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>>::get(),
                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_index", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_currentValue", ty: "TValue", modifiers: "",
// def_value: Some("nullptr") }]
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::__Dictionary_2__ValueCollection__Enumerator(
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary, int32_t _index, int32_t _version, TValue _currentValue) noexcept {
  this->_dictionary = _dictionary;
  this->_index = _index;
  this->_version = _version;
  this->_currentValue = _currentValue;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>::__Dictionary_2__ValueCollection__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::__get__dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const&
System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::__get__dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::__set__dictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*
System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>(dictionary));
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue>
inline ::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue> System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::CopyTo(::ArrayW<TValue, ::Array<TValue>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue, ::Array<TValue>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Add(TValue item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
      "System.Collections.Generic.ICollection<TValue>.Add", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Remove(TValue item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
      "System.Collections.Generic.ICollection<TValue>.Remove", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TValue>.Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Contains(TValue item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TValue>.Contains", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>*
System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(), "System.Collections.ICollection.CopyTo",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>::__Dictionary_2__ValueCollection() {}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::Dictionary_2<TKey,
                                                     TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::Dictionary_2<TKey, TValue>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buckets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>, ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*>&
System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>, ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*> const&
System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__entries(
    ::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>, ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__freeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeList;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__freeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeList;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__freeList(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeList = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__freeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeCount;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__freeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeCount;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__freeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeCount = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*> const&
System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__keys(::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*> const&
System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__values(::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::Generic::Dictionary_2<TKey, TValue>::__get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::Dictionary_2<TKey, TValue>::__set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* System::Collections::Generic::Dictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* System::Collections::Generic::Dictionary_2<TKey, TValue>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(capacity));
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>*
System::Collections::Generic::Dictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(comparer));
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>*
System::Collections::Generic::Dictionary_2<TKey, TValue>::New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(capacity, comparer));
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, comparer);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>*
System::Collections::Generic::Dictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(dictionary));
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>*
System::Collections::Generic::Dictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary,
                                                                   ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(dictionary, comparer));
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary,
                                                                            ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary, comparer);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* System::Collections::Generic::Dictionary_2<TKey, TValue>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(info, context));
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::Dictionary_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* System::Collections::Generic::Dictionary_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "get_Keys", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* System::Collections::Generic::Dictionary_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "get_Values", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IDictionary<TKey,TValue>.get_Values", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::Dictionary_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "Add", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "ContainsKey",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::ContainsValue(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "ContainsValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::CopyTo(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue> System::Collections::Generic::Dictionary_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::Dictionary_2<TKey, TValue>::FindEntry(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "FindEntry",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::Dictionary_2<TKey, TValue>::Initialize(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "Initialize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, capacity);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::TryInsert(TKey key, TValue value, ::System::Collections::Generic::InsertionBehavior behavior) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "TryInsert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::InsertionBehavior>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value, behavior);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "OnDeserialization",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::Resize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "Resize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::Resize(int32_t newSize, bool forceNewHashCodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "Resize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSize, forceNewHashCodes);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "Remove",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::TryGetValue(TKey key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "TryGetValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::TryAdd(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "TryAdd", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
      "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IDictionary.get_IsFixedSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IDictionary.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IDictionary.get_Keys", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IDictionary.get_Values", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "System.Collections.IDictionary.get_Item",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IDictionary.set_Item", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::IsCompatibleKey(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "IsCompatibleKey",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IDictionary.Add", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "System.Collections.IDictionary.Contains",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IDictionary.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::Dictionary_2<TKey, TValue>::System_Collections_IDictionary_Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(), "System.Collections.IDictionary.Remove",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>::Dictionary_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
