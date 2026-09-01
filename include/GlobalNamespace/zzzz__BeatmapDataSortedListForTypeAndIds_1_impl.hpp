#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataSortedListForTypeAndIds_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSortedListForTypeAndIds_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSortedListForTypeAndIds_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template <typename TBase> inline void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::setStaticF___9(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*, "<>9", ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>(
      std::forward<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>(value));
}
template <typename TBase> inline ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>* GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*, "<>9", ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>();
}
template <typename TBase>
inline void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::setStaticF___9__1_0(
    ::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>*, "<>9__1_0",
                                    ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>(
      std::forward<::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>*>(value));
}
template <typename TBase>
inline ::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>*
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>*, "<>9__1_0",
                                           ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>();
}
template <typename TBase>
inline void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::setStaticF___9__1_1(::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>*, "<>9__1_1", ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>(
      std::forward<::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>*>(value));
}
template <typename TBase>
inline ::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>* GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::getStaticF___9__1_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>*, "<>9__1_1",
                                           ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>();
}
template <typename TBase> inline void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase>
inline ::System::Collections::Generic::LinkedListNode_1<TBase>*
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::_get_sortedListHeads_b__1_0(::GlobalNamespace::ISortedList_1<TBase>* listItem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>(),
                                                                                         { "<get_sortedListHeads>b__1_0", {}, { ::i2c::type_of<::GlobalNamespace::ISortedList_1<TBase>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<TBase>*>(this, ___internal_method, listItem);
}
template <typename TBase> inline bool GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::_get_sortedListHeads_b__1_1(::System::Collections::Generic::LinkedListNode_1<TBase>* head) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>(),
                                                           { "<get_sortedListHeads>b__1_1", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<TBase>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, head);
}
template <typename TBase> inline ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>* GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>*>());
}
// Ctor Parameters []
template <typename TBase> constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>::BeatmapDataSortedListForTypeAndIds_1___c() {}
template <typename TBase>
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>*&
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TBase>
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>* const&
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TBase>
constexpr void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_set__items(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
template <typename TBase>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>*&
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_get__sortedListsDataProcessors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedListsDataProcessors;
}
template <typename TBase>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>* const&
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_get__sortedListsDataProcessors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedListsDataProcessors;
}
template <typename TBase>
constexpr void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_set__sortedListsDataProcessors(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortedListsDataProcessors = value;
}
template <typename TBase>
constexpr ::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>*&
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_get__itemToNodeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemToNodeMap;
}
template <typename TBase>
constexpr ::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* const&
GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_get__itemToNodeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemToNodeMap;
}
template <typename TBase>
constexpr void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::__cordl_internal_set__itemToNodeMap(
    ::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____itemToNodeMap = value;
}
template <typename TBase> inline ::ArrayW<::System::Collections::Generic::LinkedListNode_1<TBase>*> GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::get_sortedListHeads() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(), { "get_sortedListHeads", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::LinkedListNode_1<TBase>*>>(this, ___internal_method);
}
template <typename TBase> inline ::System::Collections::Generic::LinkedListNode_1<TBase>* GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::InsertItem(TBase item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(), { "InsertItem", {}, { ::i2c::type_of<TBase>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<TBase>*>(this, ___internal_method, item);
}
template <typename TBase> inline void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::RemoveItem(TBase item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(), { "RemoveItem", {}, { ::i2c::type_of<TBase>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TBase> template <typename T> inline int32_t GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::GetCount(int32_t typeIdentifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(), { "GetCount", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, typeIdentifier);
}
template <typename TBase>
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::GetItems(int32_t typeIdentifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(), { "GetItems", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(this, ___internal_method, typeIdentifier);
}
template <typename TBase> inline ::GlobalNamespace::ISortedList_1<TBase>* GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::GetList(::System::Type* type, int32_t typeIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(),
                                                                                         { "GetList", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ISortedList_1<TBase>*>(this, ___internal_method, type, typeIdentifier);
}
template <typename TBase> inline void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::RemoveList(::System::Type* type, int32_t typeIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(),
                                                                                         { "RemoveList", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, typeIdentifier);
}
template <typename TBase> inline void GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase> inline ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>* GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>*>());
}
// Ctor Parameters []
template <typename TBase> constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>::BeatmapDataSortedListForTypeAndIds_1() {}
