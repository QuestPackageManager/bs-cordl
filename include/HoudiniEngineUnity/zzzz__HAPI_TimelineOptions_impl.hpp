#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_TimelineOptions.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TimelineOptions_def.hpp"
// Ctor Parameters [CppParam { name: "fps", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "endTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_TimelineOptions::HAPI_TimelineOptions(float_t fps, float_t startTime, float_t endTime) noexcept {
  this->fps = fps;
  this->startTime = startTime;
  this->endTime = endTime;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_TimelineOptions::HAPI_TimelineOptions() {}
