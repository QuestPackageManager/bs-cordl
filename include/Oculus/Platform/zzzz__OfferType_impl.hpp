#pragma once
// IWYU pragma private; include "Oculus/Platform/OfferType.hpp"
#include "Oculus/Platform/zzzz__OfferType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::OfferType::OfferType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::OfferType::OfferType() {}
constexpr ::Oculus::Platform::OfferType Oculus::Platform::OfferType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::OfferType Oculus::Platform::OfferType::INTROOFFER{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::OfferType Oculus::Platform::OfferType::FREETRIAL{ static_cast<int32_t>(0x2) };
