#pragma once
// IWYU pragma private; include "GlobalNamespace\ReferenceCountingCache_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>* const& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_set__items(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, int32_t>*& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__referencesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referencesCount;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, int32_t>* const& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__referencesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referencesCount;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_set__referencesCount(::System::Collections::Generic::Dictionary_2<TKey, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referencesCount = value;
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::get_values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(), { "get_values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::Insert(TKey key, TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(), { "Insert", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::AddReference(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(), { "AddReference", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::RemoveReference(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(), { "RemoveReference", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::GetReferenceCount(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(), { "GetReferenceCount", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::TryGet(TKey key, ::by_ref<TValue> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(),
                                                                                         { "TryGet", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>());
}
/// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::operator ::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*() noexcept {
  return static_cast<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::i___GlobalNamespace__IReferenceCountingCache_2_TKey_TValue_() noexcept {
  return static_cast<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::ReferenceCountingCache_2() {}
