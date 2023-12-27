#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_InputType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_InputType::HAPI_InputType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_InputType::HAPI_InputType() {}
constexpr ::HoudiniEngineUnity::HAPI_InputType HoudiniEngineUnity::HAPI_InputType::HAPI_INPUT_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_InputType HoudiniEngineUnity::HAPI_InputType::HAPI_INPUT_TRANSFORM{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_InputType HoudiniEngineUnity::HAPI_InputType::HAPI_INPUT_GEOMETRY{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_InputType HoudiniEngineUnity::HAPI_InputType::HAPI_INPUT_MAX{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
