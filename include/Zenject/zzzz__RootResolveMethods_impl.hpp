#pragma once
#include "Zenject/zzzz__RootResolveMethods_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::RootResolveMethods::RootResolveMethods(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::RootResolveMethods::RootResolveMethods() {}
constexpr ::Zenject::RootResolveMethods Zenject::RootResolveMethods::NonLazyOnly{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::RootResolveMethods Zenject::RootResolveMethods::All{ static_cast<int32_t>(0x1) };
