#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeListUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeListUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::GetUnsafePtr(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility*>::get(), "GetUnsafePtr",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T*, false>(nullptr, ___internal_method, list);
}
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility*>::get(), "GetUnsafeReadOnlyPtr",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T*, false>(nullptr, ___internal_method, list);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::GetInternalListDataPtrUnchecked(::ByRef<::Unity::Collections::NativeList_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility*>::get(),
                                               "GetInternalListDataPtrUnchecked", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<T>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::NativeListUnsafeUtility() {}
