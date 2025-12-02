#pragma once
// IWYU pragma private; include "Oculus/Platform/OfferTerm.hpp"
#include "Oculus/Platform/zzzz__OfferTerm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::OfferTerm::OfferTerm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::OfferTerm::OfferTerm() {}
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::WEEKLY{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::BIWEEKLY{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::MONTHLY{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::QUARTERLY{ static_cast<int32_t>(0x4) };
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::SEMIANNUAL{ static_cast<int32_t>(0x5) };
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::ANNUAL{ static_cast<int32_t>(0x6) };
constexpr ::Oculus::Platform::OfferTerm Oculus::Platform::OfferTerm::BIANNUAL{ static_cast<int32_t>(0x7) };
