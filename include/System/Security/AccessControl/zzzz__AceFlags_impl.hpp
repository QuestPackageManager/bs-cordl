#pragma once
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AceFlags::AceFlags(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AceFlags::AceFlags() {}
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::None{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::ObjectInherit{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::ContainerInherit{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::NoPropagateInherit{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::InheritOnly{ static_cast<uint8_t>(0x8u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::InheritanceFlags{ static_cast<uint8_t>(0xfu) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::Inherited{ static_cast<uint8_t>(0x10u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::SuccessfulAccess{ static_cast<uint8_t>(0x40u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::FailedAccess{ static_cast<uint8_t>(0x80u) };
constexpr ::System::Security::AccessControl::AceFlags System::Security::AccessControl::AceFlags::AuditFlags{ static_cast<uint8_t>(0xc0u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
