#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HFLayerType.hpp"
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HFLayerType::HFLayerType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HFLayerType::HFLayerType() {}
constexpr ::HoudiniEngineUnity::HFLayerType HoudiniEngineUnity::HFLayerType::DEFAULT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HFLayerType HoudiniEngineUnity::HFLayerType::HEIGHT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HFLayerType HoudiniEngineUnity::HFLayerType::MASK{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HFLayerType HoudiniEngineUnity::HFLayerType::DETAIL{ static_cast<int32_t>(0x3) };
