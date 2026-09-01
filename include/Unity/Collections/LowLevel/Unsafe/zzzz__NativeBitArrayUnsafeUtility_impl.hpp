#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\NativeBitArrayUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeBitArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeBitArray_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility.ConvertExistingDataToNativeBitArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeBitArray (*)(void*, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility::ConvertExistingDataToNativeBitArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64cd5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility*>(),
            { "ConvertExistingDataToNativeBitArray", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::NativeBitArray
Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility::ConvertExistingDataToNativeBitArray(void* ptr, int32_t sizeInBytes,
                                                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility*>(),
          { "ConvertExistingDataToNativeBitArray", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeBitArray>(nullptr, ___internal_method, ptr, sizeInBytes, allocator);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility::NativeBitArrayUnsafeUtility() {}
