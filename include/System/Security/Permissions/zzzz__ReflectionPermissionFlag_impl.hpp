#pragma once
#include "System/Security/Permissions/zzzz__ReflectionPermissionFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::ReflectionPermissionFlag::ReflectionPermissionFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::ReflectionPermissionFlag::ReflectionPermissionFlag() {}
constexpr ::System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermissionFlag::AllFlags{ static_cast<int32_t>(0x7) };
constexpr ::System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermissionFlag::MemberAccess{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermissionFlag::NoFlags{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermissionFlag::ReflectionEmit{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermissionFlag::RestrictedMemberAccess{ static_cast<int32_t>(0x8) };
constexpr ::System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermissionFlag::TypeInformation{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
