#pragma once
// IWYU pragma private; include "System\Xml\Linq\XHashtable_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TValue> inline void System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TValue> inline ::StringW System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>::Invoke(TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
template <typename TValue>
inline ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>*>(object, method));
}
// Ctor Parameters []
template <typename TValue> constexpr ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>::XHashtable_1_ExtractKeyDelegate() {}
// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TValue> constexpr ::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>::XHashtableState_XHashtable_1_Entry(TValue Value, int32_t HashCode, int32_t Next) noexcept {
  this->Value = Value;
  this->HashCode = HashCode;
  this->Next = Next;
}
// Ctor Parameters []
template <typename TValue> constexpr ::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>::XHashtableState_XHashtable_1_Entry() {}
template <typename TValue> constexpr ::ArrayW<int32_t>& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TValue> constexpr ::ArrayW<int32_t> const& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TValue> constexpr void System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_set__buckets(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buckets = value;
}
template <typename TValue>
constexpr ::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>>& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TValue>
constexpr ::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>> const& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TValue>
constexpr void System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_set__entries(::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entries = value;
}
template <typename TValue> constexpr int32_t& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__numEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEntries;
}
template <typename TValue> constexpr int32_t const& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__numEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEntries;
}
template <typename TValue> constexpr void System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_set__numEntries(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numEntries = value;
}
template <typename TValue> constexpr ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>*& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__extractKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extractKey;
}
template <typename TValue>
constexpr ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* const& System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_get__extractKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extractKey;
}
template <typename TValue>
constexpr void System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::__cordl_internal_set__extractKey(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extractKey = value;
}
template <typename TValue> inline void System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::_ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extractKey, capacity);
}
template <typename TValue> inline ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::Resize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(), { "Resize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(this, ___internal_method);
}
template <typename TValue> inline bool System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::TryGetValue(::StringW key, int32_t index, int32_t count, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(),
                                              { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, index, count, value);
}
template <typename TValue> inline bool System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::TryAdd(TValue value, ::by_ref<TValue> newValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(),
                                                                                         { "TryAdd", {}, { ::i2c::type_of<TValue>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, newValue);
}
template <typename TValue> inline bool System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ::by_ref<int32_t> entryIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(),
                          { "FindEntry", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, key, index, count, entryIndex);
}
template <typename TValue> inline int32_t System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::ComputeHashCode(::StringW key, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(),
                                                           { "ComputeHashCode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, key, index, count);
}
template <typename TValue>
inline ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*
System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::New_ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*>(extractKey, capacity));
}
// Ctor Parameters []
template <typename TValue> constexpr ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>::XHashtable_1_XHashtableState() {}
template <typename TValue> constexpr ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*& System::Xml::Linq::XHashtable_1<TValue>::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TValue> constexpr ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* const& System::Xml::Linq::XHashtable_1<TValue>::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TValue> constexpr void System::Xml::Linq::XHashtable_1<TValue>::__cordl_internal_set__state(::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
template <typename TValue> inline void System::Xml::Linq::XHashtable_1<TValue>::_ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1<TValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extractKey, capacity);
}
template <typename TValue> inline bool System::Xml::Linq::XHashtable_1<TValue>::TryGetValue(::StringW key, int32_t index, int32_t count, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1<TValue>*>(),
                                              { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, index, count, value);
}
template <typename TValue> inline TValue System::Xml::Linq::XHashtable_1<TValue>::Add(TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XHashtable_1<TValue>*>(), { "Add", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, value);
}
template <typename TValue>
inline ::System::Xml::Linq::XHashtable_1<TValue>* System::Xml::Linq::XHashtable_1<TValue>::New_ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XHashtable_1<TValue>*>(extractKey, capacity));
}
// Ctor Parameters []
template <typename TValue> constexpr ::System::Xml::Linq::XHashtable_1<TValue>::XHashtable_1() {}
