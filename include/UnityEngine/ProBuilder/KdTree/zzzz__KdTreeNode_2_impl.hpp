#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/KdTreeNode_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename TKey, typename TValue> constexpr ::ArrayW<TKey, ::Array<TKey>*>& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<TKey, ::Array<TKey>*> const& UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_get_Point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
template <typename TKey, typename TValue> constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::__cordl_internal_set_Point(::ArrayW<TKey, ::Array<TKey>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Point, value);
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
  ::cordl_internals::setInstanceField(this, &this->___Value, value);
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
  ::cordl_internals::setInstanceField(this, &this->___Duplicates, value);
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
  ::cordl_internals::setInstanceField(this, &this->___LeftChild, value);
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
  ::cordl_internals::setInstanceField(this, &this->___RightChild, value);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::_ctor(::ArrayW<TKey, ::Array<TKey>*> point, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey, ::Array<TKey>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue> inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::get_Item(int32_t compare) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, false>(this, ___internal_method, compare);
}
template <typename TKey, typename TValue>
inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::set_Item(int32_t compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compare, value);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::get_IsLeaf() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get(), "get_IsLeaf",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::AddDuplicate(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get(), "AddDuplicate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::StringW UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::New_ctor(::ArrayW<TKey, ::Array<TKey>*> point, TValue value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(point, value));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>::KdTreeNode_2() {}
