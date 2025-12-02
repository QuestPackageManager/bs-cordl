#pragma once
// IWYU pragma private; include "GlobalNamespace/IDType.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::IDType::IDType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IDType::IDType() {}
constexpr ::GlobalNamespace::IDType GlobalNamespace::IDType::NO_ID_NEEDED{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::IDType GlobalNamespace::IDType::GAME_SPECIFIC_RID{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::IDType GlobalNamespace::IDType::OCULUS_PLATFORM{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::IDType GlobalNamespace::IDType::GAME_SPECIFIC_ID{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::IDType GlobalNamespace::IDType::PLATFORM_ACCOUNT_ID{ static_cast<int32_t>(0x4) };
