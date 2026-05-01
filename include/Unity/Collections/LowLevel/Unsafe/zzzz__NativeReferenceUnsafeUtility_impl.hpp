#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeReferenceUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeReferenceUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeReference_1_def.hpp"
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::GetUnsafePtr(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility*>::get(), "GetUnsafePtr",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeReference_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T*, false>(nullptr, ___internal_method, reference);
}
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility*>::get(),
                                               "GetUnsafeReadOnlyPtr", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeReference_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T*, false>(nullptr, ___internal_method, reference);
}
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::GetUnsafePtrWithoutChecks(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility*>::get(),
                                               "GetUnsafePtrWithoutChecks", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeReference_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T*, false>(nullptr, ___internal_method, reference);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::NativeReferenceUnsafeUtility() {}
