#pragma once
// IWYU pragma private; include "GlobalNamespace\SortExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SortExtensions_def.hpp"
#include "GlobalNamespace/zzzz__SortExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename T> constexpr ::System::Func_2<T, int32_t>*& GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::__cordl_internal_get_getSortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSortIndex;
}
template <typename T> constexpr ::System::Func_2<T, int32_t>* const& GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::__cordl_internal_get_getSortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSortIndex;
}
template <typename T> constexpr void GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::__cordl_internal_set_getSortIndex(::System::Func_2<T, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getSortIndex = value;
}
template <typename T> inline void GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::_Sort_b__0(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>*>(), { "<Sort>b__0", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
template <typename T> inline ::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>* GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::SortExtensions___c__DisplayClass1_0_1() {}
template <typename T> inline void GlobalNamespace::SortExtensions::InsertSorted(::System::Collections::Generic::List_1<T>* list, T item, ::System::Func_2<T, int32_t>* getSortIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SortExtensions*>(),
          { "InsertSorted", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Func_2<T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item, getSortIndex);
}
template <typename T> inline void GlobalNamespace::SortExtensions::Sort(::System::Collections::Generic::List_1<T>* list, ::System::Func_2<T, int32_t>* getSortIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortExtensions*>(),
                                       { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, getSortIndex);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SortExtensions::SortExtensions() {}
