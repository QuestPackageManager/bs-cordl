#pragma once
#include "System/Security/Permissions/zzzz__SecurityPermissionFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::SecurityPermissionFlag::SecurityPermissionFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::SecurityPermissionFlag::SecurityPermissionFlag() {}
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::NoFlags{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::Assertion{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::UnmanagedCode{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::SkipVerification{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::Execution{ static_cast<int32_t>(0x8) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::ControlThread{ static_cast<int32_t>(0x10) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::ControlEvidence{ static_cast<int32_t>(0x20) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::ControlPolicy{ static_cast<int32_t>(0x40) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::SerializationFormatter{ static_cast<int32_t>(0x80) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::ControlDomainPolicy{ static_cast<int32_t>(0x100) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::ControlPrincipal{ static_cast<int32_t>(0x200) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::ControlAppDomain{ static_cast<int32_t>(0x400) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::RemotingConfiguration{ static_cast<int32_t>(0x800) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::Infrastructure{ static_cast<int32_t>(0x1000) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::BindingRedirects{ static_cast<int32_t>(0x2000) };
constexpr ::System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermissionFlag::AllFlags{ static_cast<int32_t>(0x3fff) };
