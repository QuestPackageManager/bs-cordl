#pragma once
// IWYU pragma private; include "Oculus/Platform/KeyValuePairType.hpp"
#include "Oculus/Platform/zzzz__KeyValuePairType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::KeyValuePairType::KeyValuePairType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::KeyValuePairType::KeyValuePairType()   {
}
constexpr ::Oculus::Platform::KeyValuePairType  Oculus::Platform::KeyValuePairType::String{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::KeyValuePairType  Oculus::Platform::KeyValuePairType::Int{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::KeyValuePairType  Oculus::Platform::KeyValuePairType::Double{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::KeyValuePairType  Oculus::Platform::KeyValuePairType::Unknown{static_cast<int32_t>(0x3)};
