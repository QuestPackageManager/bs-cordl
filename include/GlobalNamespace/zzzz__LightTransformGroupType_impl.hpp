#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTransformGroupType.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroupType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LightTransformGroupType::LightTransformGroupType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTransformGroupType::LightTransformGroupType() {}
constexpr ::GlobalNamespace::LightTransformGroupType GlobalNamespace::LightTransformGroupType::Translation{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LightTransformGroupType GlobalNamespace::LightTransformGroupType::Rotation{ static_cast<int32_t>(0x1) };
