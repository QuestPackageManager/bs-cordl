#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\NativeArrayUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray(void* dataPointer, int32_t length,
                                                                                                                                               ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*>(),
                       { "ConvertExistingDataToNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, dataPointer, length, allocator);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::GetUnsafePtr(::Unity::Collections::NativeArray_1<T> nativeArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*>(),
                                                           { "GetUnsafePtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, nativeArray);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeArray_1<T> nativeArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*>(),
                                                           { "GetUnsafeReadOnlyPtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, nativeArray);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeArray_1_ReadOnly<T> nativeArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*>(),
                                                           { "GetUnsafeReadOnlyPtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, nativeArray);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks(::Unity::Collections::NativeArray_1<T> nativeArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*>(),
                                                           { "GetUnsafeBufferPointerWithoutChecks", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, nativeArray);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::NativeArrayUnsafeUtility() {}
