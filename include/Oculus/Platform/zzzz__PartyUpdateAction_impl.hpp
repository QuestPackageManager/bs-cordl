#pragma once
// IWYU pragma private; include "Oculus/Platform/PartyUpdateAction.hpp"
#include "Oculus/Platform/zzzz__PartyUpdateAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PartyUpdateAction::PartyUpdateAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PartyUpdateAction::PartyUpdateAction()   {
}
constexpr ::Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Join{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Leave{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Invite{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Uninvite{static_cast<int32_t>(0x4)};
