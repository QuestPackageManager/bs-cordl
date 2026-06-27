#pragma once
// IWYU pragma private; include "System/Security/Permissions/SecurityAction.hpp"
#include "System/Security/Permissions/zzzz__SecurityAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::SecurityAction::SecurityAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::SecurityAction::SecurityAction()   {
}
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::Demand{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::_cordl_Assert{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::Deny{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::PermitOnly{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::LinkDemand{static_cast<int32_t>(0x6)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::InheritanceDemand{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::RequestMinimum{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::RequestOptional{static_cast<int32_t>(0x9)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::RequestRefuse{static_cast<int32_t>(0xa)};
