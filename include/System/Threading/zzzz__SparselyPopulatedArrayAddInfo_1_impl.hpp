#pragma once
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template <typename T> inline void System::Threading::SparselyPopulatedArrayAddInfo_1<T>::_ctor(::System::Threading::SparselyPopulatedArrayFragment_1<T>* source, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, index);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayAddInfo_1<T>::get_Source() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>::get(),
                                                                             "get_Source", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Threading::SparselyPopulatedArrayAddInfo_1<T>::get_Index() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>::get(),
                                                                             "get_Index", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_index", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Threading::SparselyPopulatedArrayAddInfo_1<T>::SparselyPopulatedArrayAddInfo_1(::System::Threading::SparselyPopulatedArrayFragment_1<T>* _source, int32_t _index) noexcept {
  this->_source = _source;
  this->_index = _index;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayAddInfo_1<T>::SparselyPopulatedArrayAddInfo_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
