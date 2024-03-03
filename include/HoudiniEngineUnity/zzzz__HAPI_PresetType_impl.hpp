#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PresetType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PresetType::HAPI_PresetType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PresetType::HAPI_PresetType() {}
constexpr ::HoudiniEngineUnity::HAPI_PresetType HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_PresetType HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_BINARY{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_PresetType HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_IDX{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_PresetType HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_MAX{ static_cast<int32_t>(0x2) };
