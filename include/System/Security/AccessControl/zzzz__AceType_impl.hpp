#pragma once
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AceType::AceType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AceType::AceType() {}
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessAllowed{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessDenied{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAudit{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAlarm{ static_cast<uint8_t>(0x3u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessAllowedCompound{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessAllowedObject{ static_cast<uint8_t>(0x5u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessDeniedObject{ static_cast<uint8_t>(0x6u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAuditObject{ static_cast<uint8_t>(0x7u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAlarmObject{ static_cast<uint8_t>(0x8u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessAllowedCallback{ static_cast<uint8_t>(0x9u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessDeniedCallback{ static_cast<uint8_t>(0xau) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessAllowedCallbackObject{ static_cast<uint8_t>(0xbu) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::AccessDeniedCallbackObject{ static_cast<uint8_t>(0xcu) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAuditCallback{ static_cast<uint8_t>(0xdu) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAlarmCallback{ static_cast<uint8_t>(0xeu) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAuditCallbackObject{ static_cast<uint8_t>(0xfu) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::SystemAlarmCallbackObject{ static_cast<uint8_t>(0x10u) };
constexpr ::System::Security::AccessControl::AceType System::Security::AccessControl::AceType::MaxDefinedAceType{ static_cast<uint8_t>(0x10u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
