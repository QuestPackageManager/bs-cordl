#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DynamicArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArrayExtensions_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArrayExtensions::Partition(::System::Span_1<T> data, int32_t left, int32_t right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArrayExtensions*>(),
                                              { "Partition", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Span_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, left, right);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArrayExtensions::QuickSort(::System::Span_1<T> data, int32_t left, int32_t right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArrayExtensions*>(),
                                              { "QuickSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Span_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, left, right);
}
template <typename T>
inline int32_t UnityEngine::Rendering::DynamicArrayExtensions::Partition(::System::Span_1<T> data, int32_t left, int32_t right, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArrayExtensions*>(),
                                                                                              { "Partition",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::System::Span_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, left, right, comparer);
}
template <typename T>
inline void UnityEngine::Rendering::DynamicArrayExtensions::QuickSort(::System::Span_1<T> data, int32_t left, int32_t right, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArrayExtensions*>(),
                                                                                              { "QuickSort",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::System::Span_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, left, right, comparer);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArrayExtensions::QuickSort(::UnityEngine::Rendering::DynamicArray_1<T>* array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArrayExtensions*>(),
                                                           { "QuickSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
template <typename T>
inline void UnityEngine::Rendering::DynamicArrayExtensions::QuickSort(::UnityEngine::Rendering::DynamicArray_1<T>* array, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::DynamicArrayExtensions*>(),
          { "QuickSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, comparer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DynamicArrayExtensions::DynamicArrayExtensions() {}
