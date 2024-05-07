#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AceQualifier.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AceQualifier::AceQualifier(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AceQualifier::AceQualifier() {}
constexpr ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::AceQualifier::AccessAllowed{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::AceQualifier::AccessDenied{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::AceQualifier::SystemAudit{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::AceQualifier::SystemAlarm{ static_cast<int32_t>(0x3) };
