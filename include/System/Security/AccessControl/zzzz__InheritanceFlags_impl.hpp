#pragma once
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::InheritanceFlags::InheritanceFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::InheritanceFlags::InheritanceFlags() {}
constexpr ::System::Security::AccessControl::InheritanceFlags System::Security::AccessControl::InheritanceFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::AccessControl::InheritanceFlags System::Security::AccessControl::InheritanceFlags::ContainerInherit{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::AccessControl::InheritanceFlags System::Security::AccessControl::InheritanceFlags::ObjectInherit{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
