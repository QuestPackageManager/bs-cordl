#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValueCollectionPropertyBag_3.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IDictionaryElementProperty_def.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBag_3_def.hpp"
#include "Unity/Properties/zzzz__IKeyedProperties_2_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
template <typename TDictionary, typename TKey, typename TValue>
constexpr TKey& Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr TKey const& Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr void Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::__cordl_internal_set__Key_k__BackingField(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____Key_k__BackingField, value);
}
template <typename TDictionary, typename TKey, typename TValue> inline ::StringW Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue> inline bool Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>
Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::GetValue(::ByRef<TDictionary> container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, false>(this, ___internal_method, container);
}
template <typename TDictionary, typename TKey, typename TValue>
inline void Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::SetValue(::ByRef<TDictionary> container,
                                                                                                                         ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, value);
}
template <typename TDictionary, typename TKey, typename TValue> inline TKey Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(),
                                  "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue> inline void Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::set_Key(TKey value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(),
                                  "set_Key", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::System::Object* Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::get_ObjectKey() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(),
                                  "get_ObjectKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue> inline void Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*
Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>());
}
/// @brief Convert operator to "::Unity::Properties::IDictionaryElementProperty"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::operator ::Unity::Properties::IDictionaryElementProperty*() noexcept {
  return static_cast<::Unity::Properties::IDictionaryElementProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IDictionaryElementProperty"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::IDictionaryElementProperty*
Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::i___Unity__Properties__IDictionaryElementProperty() noexcept {
  return static_cast<::Unity::Properties::IDictionaryElementProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::KeyValueCollectionPropertyBag_3_KeyValuePairProperty() {}
template <typename TDictionary, typename TKey, typename TValue>
constexpr TDictionary& Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dictionary;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr TDictionary const& Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dictionary;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_set_m_Dictionary(TDictionary value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Dictionary, value);
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*&
Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* const&
Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_set_m_Property(
    ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Property, value);
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr TKey& Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Previous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Previous;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr TKey const& Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Previous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Previous;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_set_m_Previous(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Previous, value);
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<TKey>*& Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<TKey>* const&
Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_set_m_Keys(::System::Collections::Generic::List_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Keys, value);
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr int32_t& Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr int32_t const& Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::__cordl_internal_set_m_Position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Position = value;
}
template <typename TDictionary, typename TKey, typename TValue>
inline void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::_ctor(
    TDictionary dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDictionary>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary, property);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::Unity::Properties::IProperty_1<TDictionary>* Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*>::get(),
                                  "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<TDictionary>*, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::System::Object* Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*>::get(),
                                  "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue> inline bool Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue> inline void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*>::get(),
                                  "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue> inline void Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*>::get(),
                                  "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*
Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::New_ctor(
    TDictionary dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* property) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*>(dictionary, property));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<
    ::Unity::Properties::IProperty_1<TDictionary>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*
Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey,
                                                                         TValue>::i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TDictionary___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::System::IDisposable* Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator() {}
template <typename TDictionary, typename TKey, typename TValue>
inline void Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::_ctor(
    TDictionary dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDictionary>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary, property);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>>::get(),
                                  "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*
Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TDictionary___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>>::get(),
      "System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TDictionary>>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey,
                                                                        TValue>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*
Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TDictionary___() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Dictionary", ty: "TDictionary", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Property", ty:
// "::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*", modifiers: "", def_value: Some("{}") }]
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::KeyValueCollectionPropertyBag_3_Enumerable(
    TDictionary m_Dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* m_Property) noexcept {
  this->m_Dictionary = m_Dictionary;
  this->m_Property = m_Property;
}
// Ctor Parameters []
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>::KeyValueCollectionPropertyBag_3_Enumerable() {}
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*&
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::__cordl_internal_get_m_KeyValuePairProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyValuePairProperty;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* const&
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::__cordl_internal_get_m_KeyValuePairProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyValuePairProperty;
}
template <typename TDictionary, typename TKey, typename TValue>
constexpr void Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::__cordl_internal_set_m_KeyValuePairProperty(
    ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_KeyValuePairProperty, value);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::Unity::Properties::PropertyCollection_1<TDictionary> Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::GetProperties() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TDictionary>, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::Unity::Properties::PropertyCollection_1<TDictionary> Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::GetProperties(::ByRef<TDictionary> container) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TDictionary>, false>(this, ___internal_method, container);
}
template <typename TDictionary, typename TKey, typename TValue>
inline void Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::Unity_Properties_ICollectionPropertyBagAccept_TDictionary__Accept(
    ::Unity::Properties::ICollectionPropertyBagVisitor* visitor, ::ByRef<TDictionary> container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>*>::get(),
                                               "Unity.Properties.ICollectionPropertyBagAccept<TDictionary>.Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ICollectionPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TDictionary>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
template <typename TDictionary, typename TKey, typename TValue>
inline void Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::Unity_Properties_IDictionaryPropertyBagAccept_TDictionary__Accept(
    ::Unity::Properties::IDictionaryPropertyBagVisitor* visitor, ::ByRef<TDictionary> container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>*>::get(),
                                               "Unity.Properties.IDictionaryPropertyBagAccept<TDictionary>.Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IDictionaryPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TDictionary>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
template <typename TDictionary, typename TKey, typename TValue>
inline bool Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::Unity_Properties_IKeyedProperties_TDictionary_System_Object__TryGetProperty(
    ::ByRef<TDictionary> container, ::System::Object* key, ::ByRef<::Unity::Properties::IProperty_1<TDictionary>*> property) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>*>::get(),
                                  "Unity.Properties.IKeyedProperties<TDictionary,System.Object>.TryGetProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TDictionary>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::IProperty_1<TDictionary>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, container, key, property);
}
template <typename TDictionary, typename TKey, typename TValue> inline void Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue>
inline ::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>* Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>*>());
}
/// @brief Convert operator to "::Unity::Properties::IDictionaryPropertyBag_3<TDictionary,TKey,TValue>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::operator ::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>*() noexcept {
  return static_cast<::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IDictionaryPropertyBag_3<TDictionary,TKey,TValue>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>*
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::i___Unity__Properties__IDictionaryPropertyBag_3_TDictionary_TKey_TValue_() noexcept {
  return static_cast<::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TDictionary,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::operator ::Unity::Properties::ICollectionPropertyBag_2<
    TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TDictionary,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::ICollectionPropertyBag_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey,
                                                   TValue>::i___Unity__Properties__ICollectionPropertyBag_2_TDictionary___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TDictionary>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::operator ::Unity::Properties::IPropertyBag_1<TDictionary>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TDictionary>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TDictionary>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::IPropertyBag_1<TDictionary>*
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::i___Unity__Properties__IPropertyBag_1_TDictionary_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TDictionary>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>*
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::i___Unity__Properties__ICollectionPropertyBagAccept_1_TDictionary_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::operator ::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>*() noexcept {
  return static_cast<::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>*
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::i___Unity__Properties__IDictionaryPropertyBagAccept_1_TDictionary_() noexcept {
  return static_cast<::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IKeyedProperties_2<TDictionary,::System::Object*>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::operator ::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>*() noexcept {
  return static_cast<::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IKeyedProperties_2<TDictionary,::System::Object*>"
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>*
Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::i___Unity__Properties__IKeyedProperties_2_TDictionary___System__Object__() noexcept {
  return static_cast<::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TDictionary, typename TKey, typename TValue> constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::KeyValueCollectionPropertyBag_3() {}
