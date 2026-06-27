#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFType.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFType::OVRGLTFType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFType::OVRGLTFType()   {
}
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::SCALAR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::VEC2{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::VEC3{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::VEC4{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::MAT4{static_cast<int32_t>(0x5)};
