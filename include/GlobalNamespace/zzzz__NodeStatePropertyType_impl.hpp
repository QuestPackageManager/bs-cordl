#pragma once
// IWYU pragma private; include "GlobalNamespace/NodeStatePropertyType.hpp"
#include "GlobalNamespace/zzzz__NodeStatePropertyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NodeStatePropertyType::NodeStatePropertyType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodeStatePropertyType::NodeStatePropertyType()   {
}
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Acceleration{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::AngularAcceleration{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Velocity{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::AngularVelocity{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Position{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Orientation{static_cast<int32_t>(0x5)};
