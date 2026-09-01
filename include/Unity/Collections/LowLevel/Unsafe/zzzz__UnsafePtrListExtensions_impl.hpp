#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafePtrListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrListExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrList_1_def.hpp"
template <typename T>
inline ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>>
Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions::ListData(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>> from) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions*>(),
                                                           { "ListData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>>>(nullptr, ___internal_method, from);
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>
Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions::ListDataRO(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> from) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions*>(),
                                                           { "ListDataRO", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>>(nullptr, ___internal_method, from);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions::UnsafePtrListExtensions() {}
