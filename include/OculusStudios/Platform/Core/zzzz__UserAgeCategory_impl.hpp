#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/UserAgeCategory.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::UserAgeCategory::UserAgeCategory(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::UserAgeCategory::UserAgeCategory() {}
constexpr ::OculusStudios::Platform::Core::UserAgeCategory OculusStudios::Platform::Core::UserAgeCategory::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::Platform::Core::UserAgeCategory OculusStudios::Platform::Core::UserAgeCategory::Child{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::Platform::Core::UserAgeCategory OculusStudios::Platform::Core::UserAgeCategory::Teen{ static_cast<int32_t>(0x2) };
constexpr ::OculusStudios::Platform::Core::UserAgeCategory OculusStudios::Platform::Core::UserAgeCategory::Adult{ static_cast<int32_t>(0x3) };
