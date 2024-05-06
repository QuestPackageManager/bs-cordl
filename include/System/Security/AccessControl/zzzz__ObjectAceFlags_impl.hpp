#pragma once
// IWYU pragma private; include "System/Security/AccessControl/ObjectAceFlags.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::ObjectAceFlags::ObjectAceFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::ObjectAceFlags::ObjectAceFlags() {}
constexpr ::System::Security::AccessControl::ObjectAceFlags System::Security::AccessControl::ObjectAceFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::ObjectAceFlags System::Security::AccessControl::ObjectAceFlags::ObjectAceTypePresent{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::ObjectAceFlags System::Security::AccessControl::ObjectAceFlags::InheritedObjectAceTypePresent{ static_cast<int32_t>(0x2) };
