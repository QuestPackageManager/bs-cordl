#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\NativeListUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeListUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::GetUnsafePtr(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility*>(),
                                                           { "GetUnsafePtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, list);
}
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility*>(),
                                                           { "GetUnsafeReadOnlyPtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, list);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::GetInternalListDataPtrUnchecked(::by_ref<::Unity::Collections::NativeList_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility*>(),
                                                           { "GetInternalListDataPtrUnchecked", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility::NativeListUnsafeUtility() {}
