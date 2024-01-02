#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
template <typename TElement> inline void System::Linq::EnumerableSorter_1<TElement>::ComputeKeys(::ArrayW<TElement, ::Array<TElement>*> elements, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_1<TElement>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elements, count);
}
template <typename TElement> inline int32_t System::Linq::EnumerableSorter_1<TElement>::CompareKeys(int32_t index1, int32_t index2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_1<TElement>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index1, index2);
}
template <typename TElement> inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Linq::EnumerableSorter_1<TElement>::Sort(::ArrayW<TElement, ::Array<TElement>*> elements, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_1<TElement>*>::get(), "Sort", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement, ::Array<TElement>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, elements, count);
}
template <typename TElement> inline void System::Linq::EnumerableSorter_1<TElement>::QuickSort(::ArrayW<int32_t, ::Array<int32_t>*> map, int32_t left, int32_t right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_1<TElement>*>::get(), "QuickSort", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, left, right);
}
template <typename TElement> inline ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::EnumerableSorter_1<TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_1<TElement>*>());
}
template <typename TElement> inline void System::Linq::EnumerableSorter_1<TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_1<TElement>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::EnumerableSorter_1<TElement>::EnumerableSorter_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
