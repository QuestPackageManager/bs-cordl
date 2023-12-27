#pragma once
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::BindingInheritanceMethods::BindingInheritanceMethods(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::BindingInheritanceMethods::BindingInheritanceMethods() {}
constexpr ::Zenject::BindingInheritanceMethods Zenject::BindingInheritanceMethods::None{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::BindingInheritanceMethods Zenject::BindingInheritanceMethods::CopyIntoAll{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::BindingInheritanceMethods Zenject::BindingInheritanceMethods::CopyDirectOnly{ static_cast<int32_t>(0x2) };
constexpr ::Zenject::BindingInheritanceMethods Zenject::BindingInheritanceMethods::MoveIntoAll{ static_cast<int32_t>(0x3) };
constexpr ::Zenject::BindingInheritanceMethods Zenject::BindingInheritanceMethods::MoveDirectOnly{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
