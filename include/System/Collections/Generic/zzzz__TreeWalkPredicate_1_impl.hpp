#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline ::System::Collections::Generic::TreeWalkPredicate_1<T>* System::Collections::Generic::TreeWalkPredicate_1<T>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::TreeWalkPredicate_1<T>*>(object, method));
}
template <typename T> inline void System::Collections::Generic::TreeWalkPredicate_1<T>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::TreeWalkPredicate_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline bool System::Collections::Generic::TreeWalkPredicate_1<T>::Invoke(::System::Collections::Generic::__SortedSet_1__Node<T>* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::TreeWalkPredicate_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::TreeWalkPredicate_1<T>::TreeWalkPredicate_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
