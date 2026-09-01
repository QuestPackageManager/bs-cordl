#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\MemoryUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MemoryUtilities_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
template <typename T> inline T* UnityEngine::Rendering::MemoryUtilities::Malloc(int32_t count, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MemoryUtilities*>(),
                                                           { "Malloc", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, count, allocator);
}
template <typename T> inline void UnityEngine::Rendering::MemoryUtilities::Free(T* p, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MemoryUtilities*>(),
                                                           { "Free", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, allocator);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MemoryUtilities::MemoryUtilities() {}
