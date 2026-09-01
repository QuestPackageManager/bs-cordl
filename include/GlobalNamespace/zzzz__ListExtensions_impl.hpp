#pragma once
// IWYU pragma private; include "GlobalNamespace\ListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template <typename T> inline int32_t GlobalNamespace::ListExtensions::IndexOf(::System::Collections::Generic::IReadOnlyList_1<T>* self, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListExtensions*>(),
                                                           { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self, item);
}
template <typename T> inline int32_t GlobalNamespace::ListExtensions::FindIndex(::System::Collections::Generic::IReadOnlyList_1<T>* list, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListExtensions*>(),
                          { "FindIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, match);
}
template <typename T> inline void GlobalNamespace::ListExtensions::InsertIntoSortedListFromEnd(::System::Collections::Generic::List_1<T>* sortedList, T newItem) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListExtensions*>(),
                                              { "InsertIntoSortedListFromEnd", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sortedList, newItem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListExtensions::ListExtensions() {}
