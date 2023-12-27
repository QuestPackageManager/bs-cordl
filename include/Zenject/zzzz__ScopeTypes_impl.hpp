#pragma once
#include "Zenject/zzzz__ScopeTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::ScopeTypes::ScopeTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::ScopeTypes::ScopeTypes() {}
constexpr ::Zenject::ScopeTypes Zenject::ScopeTypes::Unset{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::ScopeTypes Zenject::ScopeTypes::Transient{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::ScopeTypes Zenject::ScopeTypes::Singleton{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
