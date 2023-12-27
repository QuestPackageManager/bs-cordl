#pragma once
#include "HoudiniEngineUnity/zzzz__JSONNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::JSONNodeType::JSONNodeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::JSONNodeType::JSONNodeType() {}
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::Array{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::Object{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::String{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::Number{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::NullValue{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::Boolean{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::None{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNodeType::Custom{ static_cast<int32_t>(0xff) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
