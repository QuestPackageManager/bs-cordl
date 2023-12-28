#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
template <typename T> constexpr System::Collections::Generic::EqualityComparer_1<T>::operator ::System::Collections::IEqualityComparer*() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<T>"
template <typename T> constexpr System::Collections::Generic::EqualityComparer_1<T>::operator ::System::Collections::Generic::IEqualityComparer_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline void System::Collections::Generic::EqualityComparer_1<T>::setStaticF_defaultComparer(::System::Collections::Generic::EqualityComparer_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::EqualityComparer_1<T>*, "defaultComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get>(
      std::forward<::System::Collections::Generic::EqualityComparer_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::EqualityComparer_1<T>* System::Collections::Generic::EqualityComparer_1<T>::getStaticF_defaultComparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::EqualityComparer_1<T>*, "defaultComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::EqualityComparer_1<T>* System::Collections::Generic::EqualityComparer_1<T>::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(),
                                                                             "get_Default", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::EqualityComparer_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::EqualityComparer_1<T>* System::Collections::Generic::EqualityComparer_1<T>::CreateComparer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(),
                                                                             "CreateComparer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::EqualityComparer_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::EqualityComparer_1<T>::Equals(T x, T y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(), "Equals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t System::Collections::Generic::EqualityComparer_1<T>::GetHashCode(T obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(), "GetHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t System::Collections::Generic::EqualityComparer_1<T>::IndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline int32_t System::Collections::Generic::EqualityComparer_1<T>::LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(), "LastIndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline int32_t System::Collections::Generic::EqualityComparer_1<T>::System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(),
                                                                             "System.Collections.IEqualityComparer.GetHashCode", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
template <typename T> inline bool System::Collections::Generic::EqualityComparer_1<T>::System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(),
                                                                             "System.Collections.IEqualityComparer.Equals", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
template <typename T> inline ::System::Collections::Generic::EqualityComparer_1<T>* System::Collections::Generic::EqualityComparer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::EqualityComparer_1<T>*>());
}
template <typename T> inline void System::Collections::Generic::EqualityComparer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EqualityComparer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::EqualityComparer_1<T>::EqualityComparer_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
