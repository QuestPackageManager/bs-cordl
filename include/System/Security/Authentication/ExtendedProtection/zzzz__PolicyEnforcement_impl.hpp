#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/PolicyEnforcement.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__PolicyEnforcement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement::PolicyEnforcement(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement::PolicyEnforcement() {}
constexpr ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement System::Security::Authentication::ExtendedProtection::PolicyEnforcement::Never{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement System::Security::Authentication::ExtendedProtection::PolicyEnforcement::WhenSupported{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement System::Security::Authentication::ExtendedProtection::PolicyEnforcement::Always{ static_cast<int32_t>(0x2) };
