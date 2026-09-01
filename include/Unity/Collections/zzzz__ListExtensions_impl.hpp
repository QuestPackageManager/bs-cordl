#pragma once
// IWYU pragma private; include "Unity\Collections\ListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__ListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template <typename T> inline bool Unity::Collections::ListExtensions::RemoveSwapBack(::System::Collections::Generic::List_1<T>* list, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ListExtensions*>(),
                                                           { "RemoveSwapBack", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T> inline bool Unity::Collections::ListExtensions::RemoveSwapBack(::System::Collections::Generic::List_1<T>* list, ::System::Predicate_1<T>* matcher) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::ListExtensions*>(),
                                       { "RemoveSwapBack", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, matcher);
}
template <typename T> inline void Unity::Collections::ListExtensions::RemoveAtSwapBack(::System::Collections::Generic::List_1<T>* list, int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ListExtensions*>(),
                                              { "RemoveAtSwapBack", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, index);
}
template <typename T>
inline ::Unity::Collections::NativeList_1<T> Unity::Collections::ListExtensions::ToNativeList(::System::Collections::Generic::List_1<T>* list,
                                                                                              ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::ListExtensions*>(),
          { "ToNativeList", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<T>>(nullptr, ___internal_method, list, allocator);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::ListExtensions::ToNativeArray(::System::Collections::Generic::List_1<T>* list,
                                                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::ListExtensions*>(),
          { "ToNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, list, allocator);
}
// Ctor Parameters []
constexpr ::Unity::Collections::ListExtensions::ListExtensions() {}
