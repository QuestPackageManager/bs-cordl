#pragma once
// IWYU pragma private; include "Oculus/Platform/ProductType.hpp"
#include "Oculus/Platform/zzzz__ProductType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ProductType::ProductType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ProductType::ProductType() {}
constexpr ::Oculus::Platform::ProductType Oculus::Platform::ProductType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::ProductType Oculus::Platform::ProductType::DURABLE{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::ProductType Oculus::Platform::ProductType::CONSUMABLE{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::ProductType Oculus::Platform::ProductType::SUBSCRIPTION{ static_cast<int32_t>(0x3) };
