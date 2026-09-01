#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ArrayExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ArrayExtensions.ResizeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccessArray>, int32_t)>(&::UnityEngine::Rendering::ArrayExtensions::ResizeArray)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67b4fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ArrayExtensions*>(),
                                                             { "ResizeArray", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccessArray>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
template <typename T> inline void UnityEngine::Rendering::ArrayExtensions::ResizeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> array, int32_t capacity) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ArrayExtensions*>(),
                                              { "ResizeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, capacity);
}
inline void UnityEngine::Rendering::ArrayExtensions::ResizeArray(::by_ref<::UnityEngine::Jobs::TransformAccessArray> array, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ArrayExtensions*>(),
                                                           { "ResizeArray", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccessArray>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, capacity);
}
template <typename T> inline void UnityEngine::Rendering::ArrayExtensions::ResizeArray(::by_ref<::ArrayW<T>> array, int32_t capacity) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ArrayExtensions*>(),
                                                           { "ResizeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, capacity);
}
template <typename T> inline void UnityEngine::Rendering::ArrayExtensions::FillArray(::by_ref<::Unity::Collections::NativeArray_1<T>> array, ::by_ref<T> value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ArrayExtensions*>(),
                          { "FillArray",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, value, startIndex, length);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ArrayExtensions::ArrayExtensions() {}
