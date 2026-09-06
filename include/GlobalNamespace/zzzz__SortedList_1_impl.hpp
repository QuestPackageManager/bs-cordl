#pragma once
// IWYU pragma private; include "GlobalNamespace/SortedList_1.hpp"
#include "GlobalNamespace/zzzz__SortedList_2_impl.hpp"
#include "GlobalNamespace/zzzz__SortedList_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
template <typename TBase> inline void GlobalNamespace::SortedList_1<TBase>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortedList_1<TBase>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase> inline void GlobalNamespace::SortedList_1<TBase>::_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortedList_1<TBase>*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortedListDataProcessor);
}
template <typename TBase> inline ::GlobalNamespace::SortedList_1<TBase>* GlobalNamespace::SortedList_1<TBase>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SortedList_1<TBase>*>());
}
template <typename TBase> inline ::GlobalNamespace::SortedList_1<TBase>* GlobalNamespace::SortedList_1<TBase>::New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SortedList_1<TBase>*>(sortedListDataProcessor));
}
// Ctor Parameters []
template <typename TBase> constexpr ::GlobalNamespace::SortedList_1<TBase>::SortedList_1() {}
