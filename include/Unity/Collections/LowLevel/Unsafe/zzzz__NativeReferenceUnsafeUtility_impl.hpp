#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\NativeReferenceUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeReferenceUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeReference_1_def.hpp"
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::GetUnsafePtr(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility*>(),
                                                           { "GetUnsafePtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, reference);
}
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::GetUnsafeReadOnlyPtr(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility*>(),
                                                           { "GetUnsafeReadOnlyPtr", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, reference);
}
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::GetUnsafePtrWithoutChecks(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility*>(),
                                                           { "GetUnsafePtrWithoutChecks", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, reference);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility::NativeReferenceUnsafeUtility() {}
