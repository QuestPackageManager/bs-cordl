#pragma once
#include "HoudiniEngineUnity/zzzz__JSONContainerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::JSONContainerType::JSONContainerType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::JSONContainerType::JSONContainerType() {}
constexpr ::HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONContainerType::Array{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONContainerType::Object{ static_cast<int32_t>(0x1) };
