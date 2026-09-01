#pragma once
// IWYU pragma private; include "GlobalNamespace\OVREnumerable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
template <typename T> inline int32_t GlobalNamespace::OVREnumerable::CopyTo(::GlobalNamespace::OVREnumerable_1<T> enumerable, T* memory) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumerable*>(),
                                                           { "CopyTo", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::OVREnumerable_1<T>>(), ::i2c::type_of<T*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, enumerable, memory);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVREnumerable::OVREnumerable() {}
