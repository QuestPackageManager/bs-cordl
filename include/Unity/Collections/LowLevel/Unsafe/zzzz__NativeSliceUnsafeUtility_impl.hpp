#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\NativeSliceUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeSliceUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
template <typename T>
inline ::Unity::Collections::NativeSlice_1<T> Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::ConvertExistingDataToNativeSlice(void* dataPointer, int32_t stride, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility*>(),
                                              { "ConvertExistingDataToNativeSlice", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>>(nullptr, ___internal_method, dataPointer, stride, length);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::GetUnsafePtr(::Unity::Collections::NativeSlice_1<T> nativeSlice) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility*>(),
                                                           { "GetUnsafePtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, nativeSlice);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeSlice_1<T> nativeSlice) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility*>(),
                                                           { "GetUnsafeReadOnlyPtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, nativeSlice);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::NativeSliceUnsafeUtility() {}
