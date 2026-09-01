#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\ComponentType.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ComponentType_def.hpp"
template <typename T> inline ::UnityEngine::UIElements::Layout::ComponentType UnityEngine::UIElements::Layout::ComponentType::Create() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::ComponentType>(), { "Create", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::ComponentType>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::ComponentType::ComponentType(int32_t Size) noexcept {
  this->Size = Size;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::ComponentType::ComponentType() {}
