#pragma once
#include "System/Collections/Generic/zzzz__EqualityComparer_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__NullableEqualityComparer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline bool System::Collections::Generic::NullableEqualityComparer_1<T>::Equals(::System::Nullable_1<T> x, ::System::Nullable_1<T> y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::NullableEqualityComparer_1<T>*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<T>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::GetHashCode(::System::Nullable_1<T> obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::NullableEqualityComparer_1<T>*>::get(), "GetHashCode",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
template <typename T>
inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::IndexOf(::ArrayW<::System::Nullable_1<T>, ::Array<::System::Nullable_1<T>>*> array, ::System::Nullable_1<T> value,
                                                                                    int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::NullableEqualityComparer_1<T>*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Nullable_1<T>, ::Array<::System::Nullable_1<T>>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, value, startIndex, count);
}
template <typename T>
inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::LastIndexOf(::ArrayW<::System::Nullable_1<T>, ::Array<::System::Nullable_1<T>>*> array, ::System::Nullable_1<T> value,
                                                                                        int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::NullableEqualityComparer_1<T>*>::get(), "LastIndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Nullable_1<T>, ::Array<::System::Nullable_1<T>>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline bool System::Collections::Generic::NullableEqualityComparer_1<T>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::NullableEqualityComparer_1<T>*>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::GetHashCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::NullableEqualityComparer_1<T>*>::get(), "GetHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::NullableEqualityComparer_1<T>* System::Collections::Generic::NullableEqualityComparer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::NullableEqualityComparer_1<T>*>());
}
template <typename T> inline void System::Collections::Generic::NullableEqualityComparer_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::NullableEqualityComparer_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::NullableEqualityComparer_1<T>::NullableEqualityComparer_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
