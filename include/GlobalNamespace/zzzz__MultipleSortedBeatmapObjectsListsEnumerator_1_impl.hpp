#pragma once
// IWYU pragma private; include "GlobalNamespace/MultipleSortedBeatmapObjectsListsEnumerator_1.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueueNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__MultipleSortedBeatmapObjectsListsEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__MultipleSortedBeatmapObjectsListsEnumerator_1_def.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>*& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_get__dataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataList;
}
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* const& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_get__dataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataList;
}
template <typename T>
constexpr void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_set__dataList(::System::Collections::Generic::IReadOnlyList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____dataList, value);
}
template <typename T> constexpr int32_t& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_get__typeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_get__typeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
template <typename T> constexpr void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_set__typeId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeId = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_get__idx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idx;
}
template <typename T> constexpr int32_t const& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_get__idx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idx;
}
template <typename T> constexpr void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::__cordl_internal_set__idx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idx = value;
}
template <typename T> inline T GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>::get(),
                                  "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::get_typeId() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>::get(),
                                  "get_typeId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::_ctor(::System::Collections::Generic::IReadOnlyList_1<T>* dataList, int32_t typeId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataList, typeId);
}
template <typename T> inline bool GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::MoveToNextItem() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>::get(),
                                  "MoveToNextItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::New_ctor(::System::Collections::Generic::IReadOnlyList_1<T>* dataList, int32_t typeId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>(dataList, typeId));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode() {}
template <typename T> constexpr int32_t& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::System::ValueTuple_2<T, int32_t>& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr ::System::ValueTuple_2<T, int32_t> const& GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_set___2__current(::System::ValueTuple_2<T, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T>
constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>*&
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* const&
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_set___4__this(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T>
constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*&
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get__node_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node_5__2;
}
template <typename T>
constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>* const&
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_get__node_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node_5__2;
}
template <typename T>
constexpr void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::__cordl_internal_set__node_5__2(
    ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____node_5__2, value);
}
template <typename T> inline void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T>
inline ::System::ValueTuple_2<T, int32_t>
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::System_Collections_Generic_IEnumerator__Titem_System_Int32typeId___get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*>::get(),
      "System.Collections.Generic.IEnumerator<(Titem,System.Int32typeId)>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T, int32_t>, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T,int32_t>>"
template <typename T>
constexpr GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::ValueTuple_2<T, int32_t>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T,int32_t>>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>*
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2_T_int32_t__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4() {}
template <typename T>
constexpr ::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>*&
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::__cordl_internal_get__priorityQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priorityQueue;
}
template <typename T>
constexpr ::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>* const&
GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::__cordl_internal_get__priorityQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priorityQueue;
}
template <typename T>
constexpr void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::__cordl_internal_set__priorityQueue(
    ::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____priorityQueue, value);
}
template <typename T>
inline void GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::_ctor(
    ::ArrayW<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>, ::Array<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>>*>
        dataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>,
                                                                         ::Array<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataList);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>* GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>*>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>*, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::New_ctor(
    ::ArrayW<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>, ::Array<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>>*>
        dataList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>*>(dataList));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>::MultipleSortedBeatmapObjectsListsEnumerator_1() {}
