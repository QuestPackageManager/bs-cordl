#pragma once
// IWYU pragma private; include "System/Security/AccessControl/ControlFlags.hpp"
#include "System/Security/AccessControl/zzzz__ControlFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::ControlFlags::ControlFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::ControlFlags::ControlFlags() {}
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::OwnerDefaulted{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::GroupDefaulted{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::DiscretionaryAclPresent{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::DiscretionaryAclDefaulted{ static_cast<int32_t>(0x8) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::SystemAclPresent{ static_cast<int32_t>(0x10) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::SystemAclDefaulted{ static_cast<int32_t>(0x20) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::DiscretionaryAclUntrusted{ static_cast<int32_t>(0x40) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::ServerSecurity{ static_cast<int32_t>(0x80) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::DiscretionaryAclAutoInheritRequired{ static_cast<int32_t>(0x100) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::SystemAclAutoInheritRequired{ static_cast<int32_t>(0x200) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::DiscretionaryAclAutoInherited{ static_cast<int32_t>(0x400) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::SystemAclAutoInherited{ static_cast<int32_t>(0x800) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::DiscretionaryAclProtected{ static_cast<int32_t>(0x1000) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::SystemAclProtected{ static_cast<int32_t>(0x2000) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::RMControlValid{ static_cast<int32_t>(0x4000) };
constexpr ::System::Security::AccessControl::ControlFlags System::Security::AccessControl::ControlFlags::SelfRelative{ static_cast<int32_t>(0x8000) };
