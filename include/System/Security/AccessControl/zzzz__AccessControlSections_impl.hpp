#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AccessControlSections.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AccessControlSections::AccessControlSections(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AccessControlSections::AccessControlSections() {}
constexpr ::System::Security::AccessControl::AccessControlSections System::Security::AccessControl::AccessControlSections::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::AccessControlSections System::Security::AccessControl::AccessControlSections::Audit{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::AccessControlSections System::Security::AccessControl::AccessControlSections::Access{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::AccessControl::AccessControlSections System::Security::AccessControl::AccessControlSections::Owner{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::AccessControl::AccessControlSections System::Security::AccessControl::AccessControlSections::Group{ static_cast<int32_t>(0x8) };
constexpr ::System::Security::AccessControl::AccessControlSections System::Security::AccessControl::AccessControlSections::All{ static_cast<int32_t>(0xf) };
