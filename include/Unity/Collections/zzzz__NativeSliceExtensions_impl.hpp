#pragma once
// IWYU pragma private; include "Unity\Collections\NativeSliceExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSliceExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> Unity::Collections::NativeSliceExtensions::Slice(::Unity::Collections::NativeArray_1<T> thisArray, int32_t start, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSliceExtensions*>(),
                                       { "Slice", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>>(nullptr, ___internal_method, thisArray, start, length);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> Unity::Collections::NativeSliceExtensions::Slice(::Unity::Collections::NativeSlice_1<T> thisSlice, int32_t start, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSliceExtensions*>(),
                                       { "Slice", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>>(nullptr, ___internal_method, thisSlice, start, length);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeSliceExtensions::NativeSliceExtensions() {}
