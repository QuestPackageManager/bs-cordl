#pragma once
// IWYU pragma private; include "Unity\Collections\NotBurstCompatible\Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/NotBurstCompatible/zzzz__Extensions_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashSet_1_def.hpp"
template <typename T> inline ::ArrayW<T> Unity::Collections::NotBurstCompatible::Extensions::ToArray(::Unity::Collections::NativeHashSet_1<T> set) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NotBurstCompatible::Extensions*>(),
                                                           { "ToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, set);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::NotBurstCompatible::Extensions::ToArray(::Unity::Collections::NativeParallelHashSet_1<T> set) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NotBurstCompatible::Extensions*>(),
                                                           { "ToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, set);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::NotBurstCompatible::Extensions::ToArrayNBC(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NotBurstCompatible::Extensions*>(),
                                                           { "ToArrayNBC", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list);
}
template <typename T> inline void Unity::Collections::NotBurstCompatible::Extensions::CopyFromNBC(::Unity::Collections::NativeList_1<T> list, ::ArrayW<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NotBurstCompatible::Extensions*>(),
                                                           { "CopyFromNBC", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, array);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NotBurstCompatible::Extensions::Extensions() {}
