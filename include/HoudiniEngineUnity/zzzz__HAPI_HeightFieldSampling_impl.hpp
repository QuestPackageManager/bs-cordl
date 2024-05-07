#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_HeightFieldSampling.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HeightFieldSampling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_HeightFieldSampling::HAPI_HeightFieldSampling(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_HeightFieldSampling::HAPI_HeightFieldSampling() {}
constexpr ::HoudiniEngineUnity::HAPI_HeightFieldSampling HoudiniEngineUnity::HAPI_HeightFieldSampling::HAPI_HEIGHTFIELD_SAMPLING_CENTER{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_HeightFieldSampling HoudiniEngineUnity::HAPI_HeightFieldSampling::HAPI_HEIGHTFIELD_SAMPLING_CORNER{ static_cast<int32_t>(0x1) };
