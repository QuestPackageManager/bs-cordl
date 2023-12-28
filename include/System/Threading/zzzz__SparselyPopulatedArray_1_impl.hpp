#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArray_1<T>::__get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> const& System::Threading::SparselyPopulatedArray_1<T>::__get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArray_1<T>::__set__head(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArray_1<T>::__get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> const& System::Threading::SparselyPopulatedArray_1<T>::__get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArray_1<T>::__set__tail(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Threading::SparselyPopulatedArray_1<T>* System::Threading::SparselyPopulatedArray_1<T>::New_ctor(int32_t initialSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SparselyPopulatedArray_1<T>*>(initialSize));
}
template <typename T> inline void System::Threading::SparselyPopulatedArray_1<T>::_ctor(int32_t initialSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSize);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArray_1<T>::get_Tail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(),
                                                                             "get_Tail", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayAddInfo_1<T> System::Threading::SparselyPopulatedArray_1<T>::Add(T element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>, false>(this, ___internal_method, element);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::SparselyPopulatedArray_1<T>::SparselyPopulatedArray_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
