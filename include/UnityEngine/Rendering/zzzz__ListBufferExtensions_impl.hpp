#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ListBufferExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ListBufferExtensions_def.hpp"
#include "UnityEngine/Rendering/zzzz__ListBuffer_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::ListBufferExtensions::QuickSort(::UnityEngine::Rendering::ListBuffer_1<T> self) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBufferExtensions*>(),
                                                           { "QuickSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Rendering::ListBuffer_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ListBufferExtensions::ListBufferExtensions() {}
