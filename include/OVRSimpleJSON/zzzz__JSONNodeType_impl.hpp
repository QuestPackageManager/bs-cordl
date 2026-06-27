#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNodeType.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNodeType::JSONNodeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNodeType::JSONNodeType()   {
}
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Array{static_cast<int32_t>(0x1)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Object{static_cast<int32_t>(0x2)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::String{static_cast<int32_t>(0x3)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Number{static_cast<int32_t>(0x4)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::NullValue{static_cast<int32_t>(0x5)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Boolean{static_cast<int32_t>(0x6)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::None{static_cast<int32_t>(0x7)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Custom{static_cast<int32_t>(0xff)};
