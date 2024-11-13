#pragma once
// IWYU pragma private; include "Priority_Queue/SimplePriorityQueue_2.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
template <typename TItem, typename TPriority> constexpr TItem& Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::__cordl_internal_get__Data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
template <typename TItem, typename TPriority> constexpr TItem const& Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::__cordl_internal_get__Data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::__cordl_internal_set__Data_k__BackingField(TItem value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____Data_k__BackingField, value);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::get_Data() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>::get(), "get_Data",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::set_Data(TItem value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>::get(), "set_Data",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::New_ctor(TItem data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>(data));
}
template <typename TItem, typename TPriority> inline void Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::_ctor(TItem data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>::__SimplePriorityQueue_2__SimpleNode() {}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr ::System::Collections::IEnumerable* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>*&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queue;
}
template <typename TItem, typename TPriority>
constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>*> const&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queue;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_set__queue(
    ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____queue, value);
}
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>*&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__itemToNodesCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemToNodesCache;
}
template <typename TItem, typename TPriority>
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>*> const&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__itemToNodesCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemToNodesCache;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_set__itemToNodesCache(
    ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____itemToNodesCache, value);
}
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__nullNodesCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullNodesCache;
}
template <typename TItem, typename TPriority>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*> const&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__nullNodesCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullNodesCache;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_set__nullNodesCache(
    ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____nullNodesCache, value);
}
template <typename TItem, typename TPriority> inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>());
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer));
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TPriority>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, priorityComparer);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Comparison_1<TPriority>* priorityComparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer));
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Comparison_1<TPriority>* priorityComparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<TPriority>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, priorityComparer);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(itemEquality));
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemEquality);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer,
                                                                  ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer, itemEquality));
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer,
                                                                           ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TPriority>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, priorityComparer, itemEquality);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Comparison_1<TPriority>* priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer, itemEquality));
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Comparison_1<TPriority>* priorityComparer,
                                                                           ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<TPriority>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, priorityComparer, itemEquality);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::GetExistingNode(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "GetExistingNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, false>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::AddToNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "AddToNodeCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::RemoveFromNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "RemoveFromNodeCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline int32_t Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::get_First() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "get_First", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Contains(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "Contains",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "Dequeue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::EnqueueNoLockOrCache(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "EnqueueNoLockOrCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Enqueue(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::EnqueueWithoutDuplicates(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "EnqueueWithoutDuplicates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Remove(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::UpdatePriority(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "UpdatePriority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline TPriority Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::GetPriority(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "GetPriority",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<TPriority, false>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryFirst(ByRef<TItem> first) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "TryFirst",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, first);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryDequeue(ByRef<TItem> first) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "TryDequeue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, first);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryRemove(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "TryRemove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryUpdatePriority(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "TryUpdatePriority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryGetPriority(TItem item, ByRef<TPriority> priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(), "TryGetPriority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TPriority>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline ::System::Collections::Generic::IEnumerator_1<TItem>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TItem>*, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::System::Collections::IEnumerator* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::IsValidQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "IsValidQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimplePriorityQueue_2() {}
