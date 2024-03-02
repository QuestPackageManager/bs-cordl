#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeSliceUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
template <typename T>
inline ::Unity::Collections::NativeSlice_1<T> Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::ConvertExistingDataToNativeSlice(::cordl_internals::Ptr<void> dataPointer, int32_t stride,
                                                                                                                                               int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility*>::get(), "ConvertExistingDataToNativeSlice",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>, false>(nullptr, ___internal_method, dataPointer, stride, length);
}
template <typename T> inline ::cordl_internals::Ptr<void> Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::GetUnsafePtr(::Unity::Collections::NativeSlice_1<T> nativeSlice) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility*>::get(), "GetUnsafePtr",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, nativeSlice);
}
template <typename T> inline ::cordl_internals::Ptr<void> Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeSlice_1<T> nativeSlice) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility*>::get(), "GetUnsafeReadOnlyPtr",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, nativeSlice);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::NativeSliceUnsafeUtility() {}
