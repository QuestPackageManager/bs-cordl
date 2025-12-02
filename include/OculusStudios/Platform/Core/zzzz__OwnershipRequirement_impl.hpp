#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/OwnershipRequirement.hpp"
#include "OculusStudios/Platform/Core/zzzz__OwnershipRequirement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::OwnershipRequirement::OwnershipRequirement(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::OwnershipRequirement::OwnershipRequirement() {}
constexpr ::OculusStudios::Platform::Core::OwnershipRequirement OculusStudios::Platform::Core::OwnershipRequirement::Self{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::Platform::Core::OwnershipRequirement OculusStudios::Platform::Core::OwnershipRequirement::AnyChildren{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::Platform::Core::OwnershipRequirement OculusStudios::Platform::Core::OwnershipRequirement::AllChildren{ static_cast<int32_t>(0x2) };
