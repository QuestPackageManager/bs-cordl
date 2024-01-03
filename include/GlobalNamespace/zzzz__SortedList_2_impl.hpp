#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::ISortedList_1<TBase>"
template <typename T, typename TBase> constexpr GlobalNamespace::SortedList_2<T, TBase>::operator ::GlobalNamespace::ISortedList_1<TBase>*() noexcept {
  return static_cast<::GlobalNamespace::ISortedList_1<TBase>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISortedList_1<TBase>"
template <typename T, typename TBase> constexpr ::GlobalNamespace::ISortedList_1<TBase>* GlobalNamespace::SortedList_2<T, TBase>::i___GlobalNamespace__ISortedList_1_TBase_() noexcept {
  return static_cast<::GlobalNamespace::ISortedList_1<TBase>*>(static_cast<void*>(this));
}
template <typename T, typename TBase> constexpr ::System::Collections::Generic::LinkedList_1<TBase>*& GlobalNamespace::SortedList_2<T, TBase>::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T, typename TBase>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<TBase>*> const& GlobalNamespace::SortedList_2<T, TBase>::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T, typename TBase> constexpr void GlobalNamespace::SortedList_2<T, TBase>::__set__items(::System::Collections::Generic::LinkedList_1<TBase>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TBase> constexpr ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*& GlobalNamespace::SortedList_2<T, TBase>::__get__sortedListDataProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedListDataProcessor;
}
template <typename T, typename TBase>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*> const& GlobalNamespace::SortedList_2<T, TBase>::__get__sortedListDataProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedListDataProcessor;
}
template <typename T, typename TBase> constexpr void GlobalNamespace::SortedList_2<T, TBase>::__set__sortedListDataProcessor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sortedListDataProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TBase> constexpr ::System::Collections::Generic::LinkedListNode_1<TBase>*& GlobalNamespace::SortedList_2<T, TBase>::__get__lastUsedNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedNode;
}
template <typename T, typename TBase>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<TBase>*> const& GlobalNamespace::SortedList_2<T, TBase>::__get__lastUsedNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedNode;
}
template <typename T, typename TBase> constexpr void GlobalNamespace::SortedList_2<T, TBase>::__set__lastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUsedNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TBase> inline int32_t GlobalNamespace::SortedList_2<T, TBase>::get_count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), "get_count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T, typename TBase> inline ::System::Collections::Generic::LinkedList_1<TBase>* GlobalNamespace::SortedList_2<T, TBase>::get_items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), "get_items",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<TBase>*, false>(this, ___internal_method);
}
template <typename T, typename TBase>
inline ::GlobalNamespace::SortedList_2<T, TBase>* GlobalNamespace::SortedList_2<T, TBase>::New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SortedList_2<T, TBase>*>(sortedListDataProcessor));
}
template <typename T, typename TBase> inline void GlobalNamespace::SortedList_2<T, TBase>::_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortedListDataProcessor);
}
template <typename T, typename TBase> inline ::System::Collections::Generic::LinkedListNode_1<TBase>* GlobalNamespace::SortedList_2<T, TBase>::Insert(TBase newItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TBase>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<TBase>*, false>(this, ___internal_method, newItem);
}
template <typename T, typename TBase> inline void GlobalNamespace::SortedList_2<T, TBase>::Insert(::System::Collections::Generic::LinkedListNode_1<TBase>* newNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newNode);
}
template <typename T, typename TBase> inline void GlobalNamespace::SortedList_2<T, TBase>::Remove(::System::Collections::Generic::LinkedListNode_1<TBase>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T, typename TBase> inline void GlobalNamespace::SortedList_2<T, TBase>::TouchLastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), "TouchLastUsedNode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T, typename TBase> inline void GlobalNamespace::SortedList_2<T, TBase>::InsertInternal(::System::Collections::Generic::LinkedListNode_1<TBase>* newItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T, TBase>*>::get(), "InsertInternal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newItem);
}
// Ctor Parameters []
template <typename T, typename TBase> constexpr ::GlobalNamespace::SortedList_2<T, TBase>::SortedList_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
