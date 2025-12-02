#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/PlatformInfo.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
// Ctor Parameters [CppParam { name: "IsEntitled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "OculusUser", ty: "::Oculus::Platform::Models::User*", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo::PlatformInfo(bool IsEntitled, ::StringW Token, ::Oculus::Platform::Models::User* OculusUser) noexcept {
  this->IsEntitled = IsEntitled;
  this->Token = Token;
  this->OculusUser = OculusUser;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo::PlatformInfo() {}
