#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PackedPrimInstancingMode.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PackedPrimInstancingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PackedPrimInstancingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PackedPrimInstancingMode() {}
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_DISABLED{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_HIERARCHY{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_FLAT{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_MAX{ static_cast<int32_t>(0x3) };
