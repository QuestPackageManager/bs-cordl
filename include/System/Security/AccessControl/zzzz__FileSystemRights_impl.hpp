#pragma once
// IWYU pragma private; include "System/Security/AccessControl/FileSystemRights.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemRights_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::FileSystemRights::FileSystemRights(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::FileSystemRights::FileSystemRights() {}
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ListDirectory{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ReadData{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::CreateFiles{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::WriteData{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::AppendData{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::CreateDirectories{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ReadExtendedAttributes{ static_cast<int32_t>(0x8) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::WriteExtendedAttributes{ static_cast<int32_t>(0x10) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ExecuteFile{ static_cast<int32_t>(0x20) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::Traverse{ static_cast<int32_t>(0x20) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::DeleteSubdirectoriesAndFiles{ static_cast<int32_t>(0x40) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ReadAttributes{ static_cast<int32_t>(0x80) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::WriteAttributes{ static_cast<int32_t>(0x100) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::Write{ static_cast<int32_t>(0x116) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::Delete{ static_cast<int32_t>(0x10000) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ReadPermissions{ static_cast<int32_t>(0x20000) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::Read{ static_cast<int32_t>(0x20089) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ReadAndExecute{ static_cast<int32_t>(0x200a9) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::Modify{ static_cast<int32_t>(0x301bf) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::ChangePermissions{ static_cast<int32_t>(0x40000) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::TakeOwnership{ static_cast<int32_t>(0x80000) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::Synchronize{ static_cast<int32_t>(0x100000) };
constexpr ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemRights::FullControl{ static_cast<int32_t>(0x1f01ff) };
