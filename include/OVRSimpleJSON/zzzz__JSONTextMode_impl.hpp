#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONTextMode.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONTextMode::JSONTextMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONTextMode::JSONTextMode()   {
}
constexpr ::OVRSimpleJSON::JSONTextMode  OVRSimpleJSON::JSONTextMode::Compact{static_cast<int32_t>(0x0)};
constexpr ::OVRSimpleJSON::JSONTextMode  OVRSimpleJSON::JSONTextMode::Indent{static_cast<int32_t>(0x1)};
