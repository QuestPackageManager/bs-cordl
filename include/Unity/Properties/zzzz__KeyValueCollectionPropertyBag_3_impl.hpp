#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValueCollectionPropertyBag_3.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_def.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_def.hpp"
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
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TDictionary, typename TKey, typename TValue> inline TKey Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*>::get(),
                                  "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
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
// Ctor Parameters []
template <typename TDictionary, typename TKey, typename TValue>
constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>::KeyValueCollectionPropertyBag_3_KeyValuePairProperty() {}
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
// Ctor Parameters []
template <typename TDictionary, typename TKey, typename TValue> constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>::KeyValueCollectionPropertyBag_3() {}
