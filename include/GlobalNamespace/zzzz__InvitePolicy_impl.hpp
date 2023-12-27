#pragma once
#include "GlobalNamespace/zzzz__InvitePolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InvitePolicy::InvitePolicy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InvitePolicy::InvitePolicy() {}
constexpr ::GlobalNamespace::InvitePolicy GlobalNamespace::InvitePolicy::OnlyConnectionOwnerCanInvite{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::InvitePolicy GlobalNamespace::InvitePolicy::AnyoneCanInvite{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::InvitePolicy GlobalNamespace::InvitePolicy::NobodyCanInvite{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
