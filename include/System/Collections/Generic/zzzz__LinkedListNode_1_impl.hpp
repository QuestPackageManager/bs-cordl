#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::LinkedList_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___list;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> const& System::Collections::Generic::LinkedListNode_1<T>::__get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___list;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__set_list(::System::Collections::Generic::LinkedList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___next;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> const& System::Collections::Generic::LinkedListNode_1<T>::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___next;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__set_next(::System::Collections::Generic::LinkedListNode_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> const& System::Collections::Generic::LinkedListNode_1<T>::__get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__set_prev(::System::Collections::Generic::LinkedListNode_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& System::Collections::Generic::LinkedListNode_1<T>::__get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___item;
}
template <typename T> constexpr T const& System::Collections::Generic::LinkedListNode_1<T>::__get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___item;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__set_item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___item)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::New_ctor(T value) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LinkedListNode_1<T>*>(value));
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::New_ctor(::System::Collections::Generic::LinkedList_1<T>* list, T value) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LinkedListNode_1<T>*>(list, value));
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::_ctor(::System::Collections::Generic::LinkedList_1<T>* list, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedList_1<T>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, value);
}
template <typename T> inline ::System::Collections::Generic::LinkedList_1<T>* System::Collections::Generic::LinkedListNode_1<T>::get_List() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                                                                             "get_List", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::get_Next() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                                                                             "get_Next", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::get_Previous() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                                                                             "get_Previous", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::LinkedListNode_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                                                                             "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(), "set_Value",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::Invalidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LinkedListNode_1<T>*>::get(),
                                                                             "Invalidate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>::LinkedListNode_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
