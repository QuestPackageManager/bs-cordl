#pragma once
// IWYU pragma private; include "System\Linq\Set_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__Set_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Linq/zzzz__Set_1_def.hpp"
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TElement> constexpr ::System::Linq::Set_1_Slot<TElement>::Set_1_Slot(int32_t hashCode, TElement value, int32_t next) noexcept {
  this->hashCode = hashCode;
  this->value = value;
  this->next = next;
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::Set_1_Slot<TElement>::Set_1_Slot() {}
template <typename TElement> constexpr ::ArrayW<int32_t>& System::Linq::Set_1<TElement>::__cordl_internal_get_buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buckets;
}
template <typename TElement> constexpr ::ArrayW<int32_t> const& System::Linq::Set_1<TElement>::__cordl_internal_get_buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buckets;
}
template <typename TElement> constexpr void System::Linq::Set_1<TElement>::__cordl_internal_set_buckets(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buckets = value;
}
template <typename TElement> constexpr ::ArrayW<::System::Linq::Set_1_Slot<TElement>>& System::Linq::Set_1<TElement>::__cordl_internal_get_slots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slots;
}
template <typename TElement> constexpr ::ArrayW<::System::Linq::Set_1_Slot<TElement>> const& System::Linq::Set_1<TElement>::__cordl_internal_get_slots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slots;
}
template <typename TElement> constexpr void System::Linq::Set_1<TElement>::__cordl_internal_set_slots(::ArrayW<::System::Linq::Set_1_Slot<TElement>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___slots = value;
}
template <typename TElement> constexpr int32_t& System::Linq::Set_1<TElement>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TElement> constexpr int32_t const& System::Linq::Set_1<TElement>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TElement> constexpr void System::Linq::Set_1<TElement>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TElement> constexpr int32_t& System::Linq::Set_1<TElement>::__cordl_internal_get_freeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeList;
}
template <typename TElement> constexpr int32_t const& System::Linq::Set_1<TElement>::__cordl_internal_get_freeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeList;
}
template <typename TElement> constexpr void System::Linq::Set_1<TElement>::__cordl_internal_set_freeList(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___freeList = value;
}
template <typename TElement> constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>*& System::Linq::Set_1<TElement>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement> constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>* const& System::Linq::Set_1<TElement>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement> constexpr void System::Linq::Set_1<TElement>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename TElement> inline void System::Linq::Set_1<TElement>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Set_1<TElement>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TElement>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TElement> inline bool System::Linq::Set_1<TElement>::Add(TElement value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Set_1<TElement>*>(), { "Add", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename TElement> inline bool System::Linq::Set_1<TElement>::Remove(TElement value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Set_1<TElement>*>(), { "Remove", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename TElement> inline bool System::Linq::Set_1<TElement>::Find(TElement value, bool add) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Set_1<TElement>*>(), { "Find", {}, { ::i2c::type_of<TElement>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, add);
}
template <typename TElement> inline void System::Linq::Set_1<TElement>::Resize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Set_1<TElement>*>(), { "Resize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TElement> inline int32_t System::Linq::Set_1<TElement>::InternalGetHashCode(TElement value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Set_1<TElement>*>(), { "InternalGetHashCode", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename TElement> inline ::System::Linq::Set_1<TElement>* System::Linq::Set_1<TElement>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Set_1<TElement>*>(comparer));
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::Set_1<TElement>::Set_1() {}
