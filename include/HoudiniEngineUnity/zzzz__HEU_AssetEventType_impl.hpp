#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetEventType.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_AssetEventType::HEU_AssetEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AssetEventType::HEU_AssetEventType() {}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType HoudiniEngineUnity::HEU_AssetEventType::UNKNOWN{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_AssetEventType HoudiniEngineUnity::HEU_AssetEventType::RELOAD{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_AssetEventType HoudiniEngineUnity::HEU_AssetEventType::COOK{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_AssetEventType HoudiniEngineUnity::HEU_AssetEventType::BAKE_NEW{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_AssetEventType HoudiniEngineUnity::HEU_AssetEventType::BAKE_UPDATE{ static_cast<int32_t>(0x4) };
