#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
/// @brief Convert operator to "::System::Collections::IComparer"
template <typename T> constexpr System::Collections::Generic::Comparer_1<T>::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
template <typename T> constexpr System::Collections::Generic::Comparer_1<T>::operator ::System::Collections::Generic::IComparer_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline void System::Collections::Generic::Comparer_1<T>::setStaticF_defaultComparer(::System::Collections::Generic::Comparer_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Comparer_1<T>*, "defaultComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get>(
      std::forward<::System::Collections::Generic::Comparer_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::getStaticF_defaultComparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Comparer_1<T>*, "defaultComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(),
                                                                             "get_Default", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Comparer_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::CreateComparer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(),
                                                                             "CreateComparer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Comparer_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Generic::Comparer_1<T>::Compare(T x, T y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(), "Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t System::Collections::Generic::Comparer_1<T>::System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(),
                                                                             "System.Collections.IComparer.Compare", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::Comparer_1<T>*>());
}
template <typename T> inline void System::Collections::Generic::Comparer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::Comparer_1<T>::Comparer_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
