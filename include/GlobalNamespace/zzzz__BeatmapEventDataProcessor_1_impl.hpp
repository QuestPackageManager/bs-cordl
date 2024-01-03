#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>"
template <typename T> constexpr GlobalNamespace::BeatmapEventDataProcessor_1<T>::operator ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept {
  return static_cast<::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>::get(), "ProcessInsertedData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, insertedNode);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>::get(), "ProcessBeforeDeleteData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeToDelete);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessBeforeDeleteEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>::get(), "ProcessBeforeDeleteEventDataCommon", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nodeToDelete);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessInsertedEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>::get(), "ProcessInsertedEventDataCommon", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, insertedNode);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, insertedNode);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeToDelete);
}
template <typename T> inline ::GlobalNamespace::BeatmapEventDataProcessor_1<T>* GlobalNamespace::BeatmapEventDataProcessor_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>());
}
template <typename T> inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BeatmapEventDataProcessor_1<T>::BeatmapEventDataProcessor_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
