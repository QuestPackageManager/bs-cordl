#pragma once
#include "GlobalNamespace/zzzz__SortedList_2_impl.hpp"
#include "GlobalNamespace/zzzz__SortedList_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
template <typename TBase> inline ::GlobalNamespace::SortedList_1<TBase>* GlobalNamespace::SortedList_1<TBase>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SortedList_1<TBase>*>());
}
template <typename TBase> inline void GlobalNamespace::SortedList_1<TBase>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_1<TBase>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase> inline ::GlobalNamespace::SortedList_1<TBase>* GlobalNamespace::SortedList_1<TBase>::New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SortedList_1<TBase>*>(sortedListDataProcessor));
}
template <typename TBase> inline void GlobalNamespace::SortedList_1<TBase>::_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_1<TBase>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortedListDataProcessor);
}
// Ctor Parameters []
template <typename TBase> constexpr ::GlobalNamespace::SortedList_1<TBase>::SortedList_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
