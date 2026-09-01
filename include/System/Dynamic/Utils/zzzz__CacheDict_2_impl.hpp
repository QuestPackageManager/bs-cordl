#pragma once
// IWYU pragma private; include "System\Dynamic\Utils\CacheDict_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
template <typename TKey, typename TValue> constexpr int32_t& System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_get__hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hash;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_get__hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hash;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_set__hash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hash = value;
}
template <typename TKey, typename TValue> constexpr TKey& System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr TKey const& System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_set__key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____key = value;
}
template <typename TKey, typename TValue> constexpr TValue& System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr TValue const& System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::__cordl_internal_set__value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::_ctor(int32_t hash, TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, key, value);
}
template <typename TKey, typename TValue>
inline ::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>* System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::New_ctor(int32_t hash, TKey key, TValue value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>*>(hash, key, value));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>::CacheDict_2_Entry() {}
template <typename TKey, typename TValue> constexpr int32_t& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_set__mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mask = value;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>*>& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>*> const& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_set__entries(::ArrayW<::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entries = value;
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template <typename TKey, typename TValue> inline int32_t System::Dynamic::Utils::CacheDict_2<TKey, TValue>::AlignSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(), { "AlignSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
template <typename TKey, typename TValue> inline bool System::Dynamic::Utils::CacheDict_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(), { "set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline ::System::Dynamic::Utils::CacheDict_2<TKey, TValue>* System::Dynamic::Utils::CacheDict_2<TKey, TValue>::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(size));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Dynamic::Utils::CacheDict_2<TKey, TValue>::CacheDict_2() {}
