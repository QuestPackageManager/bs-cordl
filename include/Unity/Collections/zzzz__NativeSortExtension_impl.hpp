#pragma once
// IWYU pragma private; include "Unity\Collections\NativeSortExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSortExtension_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSortExtension_def.hpp"
#include "Unity/Collections/zzzz__SortJobDefer_2_def.hpp"
#include "Unity/Collections/zzzz__SortJob_2_def.hpp"
template <typename T> inline int32_t Unity::Collections::NativeSortExtension_DefaultComparer_1<T>::Compare(T x, T y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>(), { "Compare", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
template <typename T> constexpr Unity::Collections::NativeSortExtension_DefaultComparer_1<T>::operator ::System::Collections::Generic::IComparer_1<T>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IComparer_1<T>* Unity::Collections::NativeSortExtension_DefaultComparer_1<T>::i___System__Collections__Generic__IComparer_1_T_() {
  return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>::NativeSortExtension_DefaultComparer_1() {}
template <typename T> inline void Unity::Collections::NativeSortExtension::Sort(T* array, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(), { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::Sort(T* array, int32_t length, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length, comp);
}
template <typename T>
inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> Unity::Collections::NativeSortExtension::SortJob(T* array, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(), { "SortJob", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>>(nullptr, ___internal_method, array, length);
}
template <typename T, typename U> inline ::Unity::Collections::SortJob_2<T, U> Unity::Collections::NativeSortExtension::SortJob(T* array, int32_t length, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "SortJob", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, U>>(nullptr, ___internal_method, array, length, comp);
}
template <typename T> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(T* ptr, int32_t length, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, length, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(T* ptr, int32_t length, T value, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "BinarySearch", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, length, value, comp);
}
template <typename T> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::NativeArray_1<T> array) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                                                              { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::NativeArray_1<T> array, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, comp);
}
template <typename T>
inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>
Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::NativeArray_1<T> array) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                                                              { "SortJob", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>>(nullptr, ___internal_method, array);
}
template <typename T, typename U> inline ::Unity::Collections::SortJob_2<T, U> Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::NativeArray_1<T> array, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "SortJob", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, U>>(nullptr, ___internal_method, array, comp);
}
template <typename T> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeArray_1<T> array, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeArray_1<T> array, T value, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "BinarySearch", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, comp);
}
template <typename T> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeArray_1_ReadOnly<T> array, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeArray_1_ReadOnly<T> array, T value, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
          { "BinarySearch", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, comp);
}
template <typename T> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                                                              { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::NativeList_1<T> list, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, comp);
}
template <typename T>
inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                                                              { "SortJob", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline ::Unity::Collections::SortJob_2<T, U> Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::NativeList_1<T> list, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "SortJob", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, U>>(nullptr, ___internal_method, list, comp);
}
template <typename T>
inline ::Unity::Collections::SortJobDefer_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>
Unity::Collections::NativeSortExtension::SortJobDefer(::Unity::Collections::NativeList_1<T> list) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(), { "SortJobDefer", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJobDefer_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline ::Unity::Collections::SortJobDefer_2<T, U> Unity::Collections::NativeSortExtension::SortJobDefer(::Unity::Collections::NativeList_1<T> list, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "SortJobDefer", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJobDefer_2<T, U>>(nullptr, ___internal_method, list, comp);
}
template <typename T> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeList_1<T> list, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeList_1<T> list, T value, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "BinarySearch", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value, comp);
}
template <typename T> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, comp);
}
template <typename T>
inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>
Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "SortJob", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline ::Unity::Collections::SortJob_2<T, U> Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "SortJob", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, U>>(nullptr, ___internal_method, list, comp);
}
template <typename T> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, T value, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "BinarySearch",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value, comp);
}
template <typename T> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::NativeSlice_1<T> slice) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                                                              { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slice);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::Sort(::Unity::Collections::NativeSlice_1<T> slice, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slice, comp);
}
template <typename T>
inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>
Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::NativeSlice_1<T> slice) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                                                              { "SortJob", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>>>(nullptr, ___internal_method, slice);
}
template <typename T, typename U> inline ::Unity::Collections::SortJob_2<T, U> Unity::Collections::NativeSortExtension::SortJob(::Unity::Collections::NativeSlice_1<T> slice, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "SortJob", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::SortJob_2<T, U>>(nullptr, ___internal_method, slice, comp);
}
template <typename T> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeSlice_1<T> slice, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, slice, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::BinarySearch(::Unity::Collections::NativeSlice_1<T> slice, T value, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "BinarySearch", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, slice, value, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::IntroSort(void* array, int32_t length, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "IntroSort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::IntroSort_R(void* array, int32_t lo, int32_t hi, int32_t depth, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "IntroSort_R",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi, depth, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::InsertionSort(void* array, int32_t lo, int32_t hi, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                       { "InsertionSort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi, comp);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::Partition(void* array, int32_t lo, int32_t hi, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "Partition", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, lo, hi, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::HeapSort(void* array, int32_t lo, int32_t hi, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                          { "HeapSort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::Heapify(void* array, int32_t i, int32_t n, int32_t lo, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "Heapify",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, i, n, lo, comp);
}
template <typename T> inline void Unity::Collections::NativeSortExtension::Swap(void* array, int32_t lhs, int32_t rhs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "Swap", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lhs, rhs);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::SwapIfGreaterWithItems(void* array, int32_t lhs, int32_t rhs, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
          { "SwapIfGreaterWithItems", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lhs, rhs, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::IntroSortStruct(void* array, int32_t length, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "IntroSortStruct", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::IntroSortStruct_R(void* array, ::by_ref<int32_t> lo, ::by_ref<int32_t> _hi, int32_t depth, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                       { "IntroSortStruct_R",
                                         { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                         { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, _hi, depth, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::InsertionSortStruct(void* array, ::by_ref<int32_t> lo, ::by_ref<int32_t> hi, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "InsertionSortStruct",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi, comp);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeSortExtension::PartitionStruct(void* array, ::by_ref<int32_t> lo, ::by_ref<int32_t> hi, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "PartitionStruct",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, lo, hi, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::HeapSortStruct(void* array, ::by_ref<int32_t> lo, ::by_ref<int32_t> hi, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "HeapSortStruct",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi, comp);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::HeapifyStruct(void* array, int32_t i, int32_t n, ::by_ref<int32_t> lo, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "HeapifyStruct",
                                                { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, i, n, lo, comp);
}
template <typename T> inline void Unity::Collections::NativeSortExtension::SwapStruct(void* array, int32_t lhs, int32_t rhs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                                           { "SwapStruct", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lhs, rhs);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::SwapIfGreaterWithItemsStruct(void* array, int32_t lhs, int32_t rhs, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
          { "SwapIfGreaterWithItemsStruct", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lhs, rhs, comp);
}
template <typename T> inline void Unity::Collections::NativeSortExtension::CheckStrideMatchesSize(int32_t stride) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(), { "CheckStrideMatchesSize", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stride);
}
template <typename T, typename U> inline void Unity::Collections::NativeSortExtension::CheckComparer(T* array, int32_t length, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeSortExtension*>(),
                                              { "CheckComparer", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length, comp);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeSortExtension::NativeSortExtension() {}
