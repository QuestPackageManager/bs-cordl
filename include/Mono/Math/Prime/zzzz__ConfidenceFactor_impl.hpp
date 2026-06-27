#pragma once
// IWYU pragma private; include "Mono/Math/Prime/ConfidenceFactor.hpp"
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Math::Prime::ConfidenceFactor::ConfidenceFactor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Math::Prime::ConfidenceFactor::ConfidenceFactor()   {
}
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::ExtraLow{static_cast<int32_t>(0x0)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Low{static_cast<int32_t>(0x1)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Medium{static_cast<int32_t>(0x2)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::High{static_cast<int32_t>(0x3)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::ExtraHigh{static_cast<int32_t>(0x4)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Provable{static_cast<int32_t>(0x5)};
