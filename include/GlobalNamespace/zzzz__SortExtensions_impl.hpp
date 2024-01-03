#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SortExtensions_def.hpp"
#include "GlobalNamespace/zzzz__SortExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename T> constexpr ::System::Func_2<T, int32_t>*& GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>::__get_getSortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSortIndex;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, int32_t>*> const& GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>::__get_getSortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSortIndex;
}
template <typename T> constexpr void GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>::__set_getSortIndex(::System::Func_2<T, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getSortIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>* GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>*>());
}
template <typename T> inline void GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>::_Sort_b__0(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>*>::get(), "<Sort>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>::__SortExtensions____c__DisplayClass1_0_1() {}
template <typename T> inline void GlobalNamespace::SortExtensions::InsertSorted(::System::Collections::Generic::List_1<T>* list, T item, ::System::Func_2<T, int32_t>* getSortIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortExtensions*>::get(), "InsertSorted",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, int32_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, item, getSortIndex);
}
template <typename T> inline void GlobalNamespace::SortExtensions::Sort(::System::Collections::Generic::List_1<T>* list, ::System::Func_2<T, int32_t>* getSortIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortExtensions*>::get(), "Sort",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, int32_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, getSortIndex);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SortExtensions::SortExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
