#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/KdTreeNode_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename TKey, typename TValue> constexpr ::ArrayW<TKey>& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<TKey> const& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
template <typename TKey, typename TValue> constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_set_Point(::ArrayW<TKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Point = value;
}
template <typename TKey, typename TValue> constexpr TValue& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename TKey, typename TValue> constexpr TValue const& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename TKey, typename TValue> constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_set_Value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::List_1<TValue>*& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Duplicates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duplicates;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<TValue>* const& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Duplicates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duplicates;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_set_Duplicates(::System::Collections::Generic::List_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Duplicates = value;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_LeftChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeftChild;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_LeftChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeftChild;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_set_LeftChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LeftChild = value;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_RightChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightChild;
}
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_RightChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightChild;
}
template <typename TKey, typename TValue>
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_set_RightChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RightChild = value;
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::_ctor(::ArrayW<TKey> point, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue> inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::get_Item(int32_t compare) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(this, ___internal_method, compare);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::set_Item(int32_t compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(),
                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compare, value);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::get_IsLeaf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(), { "get_IsLeaf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::AddDuplicate(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(), { "AddDuplicate", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::StringW UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::New_ctor(::ArrayW<TKey> point, TValue value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(point, value));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::KdTreeNode_2() {}
