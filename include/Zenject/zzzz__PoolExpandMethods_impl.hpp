#pragma once
#include "Zenject/zzzz__PoolExpandMethods_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::PoolExpandMethods::PoolExpandMethods(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::PoolExpandMethods::PoolExpandMethods() {}
constexpr ::Zenject::PoolExpandMethods Zenject::PoolExpandMethods::OneAtATime{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::PoolExpandMethods Zenject::PoolExpandMethods::Double{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::PoolExpandMethods Zenject::PoolExpandMethods::Disabled{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
