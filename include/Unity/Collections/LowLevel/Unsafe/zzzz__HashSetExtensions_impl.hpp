#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\HashSetExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashSetExtensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeHashSet_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList128Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList512Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList64Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashSet_1_def.hpp"
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "ExceptWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "IntersectWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "UnionWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "ExceptWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "IntersectWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "UnionWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "ExceptWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "IntersectWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "UnionWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "ExceptWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "IntersectWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "UnionWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "ExceptWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "IntersectWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "UnionWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeHashSet_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "ExceptWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeHashSet_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "IntersectWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeHashSet_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "UnionWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeList_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "ExceptWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeList_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "IntersectWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeList_1<T> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                       { "UnionWith",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::NativeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "ExceptWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::NativeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "IntersectWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::NativeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                          { "UnionWith",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::ExceptWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "ExceptWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::IntersectWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "IntersectWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::HashSetExtensions::UnionWith(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> container,
                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashSetExtensions*>(),
                                                                                              { "UnionWith",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::HashSetExtensions::HashSetExtensions() {}
