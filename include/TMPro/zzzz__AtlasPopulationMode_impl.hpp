#pragma once
// IWYU pragma private; include "TMPro/AtlasPopulationMode.hpp"
#include "TMPro/zzzz__AtlasPopulationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::AtlasPopulationMode::AtlasPopulationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::AtlasPopulationMode::AtlasPopulationMode() {}
constexpr ::TMPro::AtlasPopulationMode TMPro::AtlasPopulationMode::Static{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::AtlasPopulationMode TMPro::AtlasPopulationMode::Dynamic{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::AtlasPopulationMode TMPro::AtlasPopulationMode::DynamicOS{ static_cast<int32_t>(0x2) };
