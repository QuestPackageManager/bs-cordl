#pragma once
// IWYU pragma private; include "GlobalNamespace\ComponentExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ComponentExtensions_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
template <typename T> inline T GlobalNamespace::ComponentExtensions::GetComponentInParentOnly(::UnityEngine::Component* c) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComponentExtensions*>(), { "GetComponentInParentOnly", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComponentExtensions::ComponentExtensions() {}
