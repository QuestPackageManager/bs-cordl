#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeBitArrayUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeBitArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeBitArray_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility.ConvertExistingDataToNativeBitArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeBitArray (*)(void*, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility::ConvertExistingDataToNativeBitArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6316f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility*>::get(), "ConvertExistingDataToNativeBitArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::NativeBitArray
Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility::ConvertExistingDataToNativeBitArray(void* ptr, int32_t sizeInBytes,
                                                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility*>::get(), "ConvertExistingDataToNativeBitArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeBitArray, false>(nullptr, ___internal_method, ptr, sizeInBytes, allocator);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility::NativeBitArrayUnsafeUtility() {}
