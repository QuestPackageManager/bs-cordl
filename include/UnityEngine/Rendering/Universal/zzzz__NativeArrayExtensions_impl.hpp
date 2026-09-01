#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\NativeArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NativeArrayExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename T> inline ::by_ref<T> UnityEngine::Rendering::Universal::NativeArrayExtensions::UnsafeElementAt(::Unity::Collections::NativeArray_1<T> array, int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::NativeArrayExtensions*>(),
                                                           { "UnsafeElementAt", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, array, index);
}
template <typename T> inline ::by_ref<T> UnityEngine::Rendering::Universal::NativeArrayExtensions::UnsafeElementAtMutable(::Unity::Collections::NativeArray_1<T> array, int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::NativeArrayExtensions*>(),
                                              { "UnsafeElementAtMutable", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, array, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::NativeArrayExtensions::NativeArrayExtensions() {}
