#pragma once
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AccessControlType::AccessControlType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AccessControlType::AccessControlType() {}
constexpr ::System::Security::AccessControl::AccessControlType System::Security::AccessControl::AccessControlType::Allow{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::AccessControlType System::Security::AccessControl::AccessControlType::Deny{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
