#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONContainerType.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONContainerType::JSONContainerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONContainerType::JSONContainerType()   {
}
constexpr ::OVRSimpleJSON::JSONContainerType  OVRSimpleJSON::JSONContainerType::Array{static_cast<int32_t>(0x0)};
constexpr ::OVRSimpleJSON::JSONContainerType  OVRSimpleJSON::JSONContainerType::Object{static_cast<int32_t>(0x1)};
