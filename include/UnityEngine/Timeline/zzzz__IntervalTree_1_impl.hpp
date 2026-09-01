#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\IntervalTree_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTreeNode_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
// Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "item", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Timeline::IntervalTree_1_Entry<T>::IntervalTree_1_Entry(int64_t intervalStart, int64_t intervalEnd, T item) noexcept {
  this->intervalStart = intervalStart;
  this->intervalEnd = intervalEnd;
  this->item = item;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Timeline::IntervalTree_1_Entry<T>::IntervalTree_1_Entry() {}
template <typename T> constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>*& UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_get_m_Entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>* const& UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_get_m_Entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
template <typename T>
constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Entries = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*& UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_get_m_Nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* const& UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_get_m_Nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
template <typename T> constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nodes = value;
}
template <typename T> constexpr bool& UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_get__dirty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_get__dirty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__cordl_internal_set__dirty_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirty_k__BackingField = value;
}
template <typename T> inline bool UnityEngine::Timeline::IntervalTree_1<T>::get_dirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { "get_dirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::set_dirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { "set_dirty", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::IntersectsWith(int64_t value, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(),
                                                           { "IntersectsWith", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, results);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::IntersectsWithRange(int64_t start, int64_t end, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(),
                                              { "IntersectsWithRange", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, results);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::UpdateIntervals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { "UpdateIntervals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::Query(::UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t value, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(),
                          { "Query", {}, { ::i2c::type_of<::UnityEngine::Timeline::IntervalTreeNode>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intervalTreeNode, value, results);
}
template <typename T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::QueryRange(::UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t start, int64_t end,
                                                                 ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(),
                                                                                         { "QueryRange",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Timeline::IntervalTreeNode>(), ::i2c::type_of<int64_t>(),
                                                                                             ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intervalTreeNode, start, end, results);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { "Rebuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::Timeline::IntervalTree_1<T>::Rebuild(int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { "Rebuild", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, start, end);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IntervalTree_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Timeline::IntervalTree_1<T>* UnityEngine::Timeline::IntervalTree_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::IntervalTree_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Timeline::IntervalTree_1<T>::IntervalTree_1() {}
