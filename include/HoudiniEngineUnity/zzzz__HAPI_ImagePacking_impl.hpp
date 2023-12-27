#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ImagePacking_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking::HAPI_ImagePacking(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking::HAPI_ImagePacking() {}
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_UNKNOWN{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_SINGLE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DUAL{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_RGB{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_BGR{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_RGBA{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_ABGR{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_MAX{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DEFAULT3{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DEFAULT4{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
