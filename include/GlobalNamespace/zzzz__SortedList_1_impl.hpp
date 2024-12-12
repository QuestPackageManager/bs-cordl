#pragma once
// IWYU pragma private; include "GlobalNamespace/SortedList_1.hpp"
#include "GlobalNamespace/zzzz__SortedList_2_impl.hpp"
#include "GlobalNamespace/zzzz__SortedList_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
template <typename TBase> inline void GlobalNamespace::SortedList_1<TBase>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_1<TBase>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase> inline void GlobalNamespace::SortedList_1<TBase>::_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_1<TBase>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortedListDataProcessor);
}
template <typename TBase> inline ::GlobalNamespace::SortedList_1<TBase>* GlobalNamespace::SortedList_1<TBase>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SortedList_1<TBase>*>());
}
template <typename TBase> inline ::GlobalNamespace::SortedList_1<TBase>* GlobalNamespace::SortedList_1<TBase>::New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SortedList_1<TBase>*>(sortedListDataProcessor));
}
// Ctor Parameters []
template <typename TBase> constexpr ::GlobalNamespace::SortedList_1<TBase>::SortedList_1() {}
