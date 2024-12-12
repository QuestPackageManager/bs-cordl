#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/PriorityQueue_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IPriorityQueue_2_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__PriorityQueue_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ItemPriority_2_def.hpp"
template <typename TItem, typename TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_priorityMath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityMath;
}
template <typename TItem, typename TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_priorityMath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityMath;
}
template <typename TItem, typename TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___priorityMath, value);
}
template <typename TItem, typename TPriority>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*>&
UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename TItem, typename TPriority>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*> const&
UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename TItem, typename TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_queue(
    ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___queue, value);
}
template <typename TItem, typename TPriority> constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capacity;
}
template <typename TItem, typename TPriority> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capacity;
}
template <typename TItem, typename TPriority> constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capacity = value;
}
template <typename TItem, typename TPriority> constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TItem, typename TPriority> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TItem, typename TPriority> constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TItem, typename TPriority>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::_ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, priorityMath);
}
template <typename TItem, typename TPriority> inline int32_t UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::ExpandCapacity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(), "ExpandCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::Enqueue(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::Dequeue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(), "Dequeue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::ReorderItem(int32_t index, int32_t direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(), "ReorderItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, direction);
}
template <typename TItem, typename TPriority> inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::GetHighest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(), "GetHighest",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline TPriority UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::GetHighestPriority() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>::get(),
                                               "GetHighestPriority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TPriority, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority>
inline ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*
UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::New_ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(capacity, priorityMath));
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::operator ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*
UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::i___UnityEngine__ProBuilder__KdTree__IPriorityQueue_2_TItem_TPriority_() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::PriorityQueue_2() {}
