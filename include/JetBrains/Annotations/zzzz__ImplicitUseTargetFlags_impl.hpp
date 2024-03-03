#pragma once
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags::ImplicitUseTargetFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags::ImplicitUseTargetFlags() {}
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags JetBrains::Annotations::ImplicitUseTargetFlags::Default{ static_cast<int32_t>(0x1) };
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags JetBrains::Annotations::ImplicitUseTargetFlags::Itself{ static_cast<int32_t>(0x1) };
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags JetBrains::Annotations::ImplicitUseTargetFlags::Members{ static_cast<int32_t>(0x2) };
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags JetBrains::Annotations::ImplicitUseTargetFlags::WithMembers{ static_cast<int32_t>(0x3) };
