#pragma once
// IWYU pragma private; include "System/Security/AccessControl/PropagationFlags.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::PropagationFlags::PropagationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::PropagationFlags::PropagationFlags() {}
constexpr ::System::Security::AccessControl::PropagationFlags System::Security::AccessControl::PropagationFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::PropagationFlags System::Security::AccessControl::PropagationFlags::NoPropagateInherit{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::PropagationFlags System::Security::AccessControl::PropagationFlags::InheritOnly{ static_cast<int32_t>(0x2) };
