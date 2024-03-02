#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_PipelineType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_PipelineType::HEU_PipelineType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PipelineType::HEU_PipelineType() {}
constexpr ::HoudiniEngineUnity::HEU_PipelineType HoudiniEngineUnity::HEU_PipelineType::Unsupported{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_PipelineType HoudiniEngineUnity::HEU_PipelineType::BiRP{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_PipelineType HoudiniEngineUnity::HEU_PipelineType::URP{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_PipelineType HoudiniEngineUnity::HEU_PipelineType::HDRP{ static_cast<int32_t>(0x3) };
