#pragma once
#include "System/Security/AccessControl/zzzz__AuditFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AuditFlags::AuditFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AuditFlags::AuditFlags() {}
constexpr ::System::Security::AccessControl::AuditFlags System::Security::AccessControl::AuditFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::AuditFlags System::Security::AccessControl::AuditFlags::Success{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::AuditFlags System::Security::AccessControl::AuditFlags::Failure{ static_cast<int32_t>(0x2) };
