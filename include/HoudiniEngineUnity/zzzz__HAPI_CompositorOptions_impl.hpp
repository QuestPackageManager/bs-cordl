#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_CompositorOptions_def.hpp"
// Ctor Parameters [CppParam { name: "maximumResolutionX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maximumResolutionY", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CompositorOptions::HAPI_CompositorOptions(int32_t maximumResolutionX, int32_t maximumResolutionY) noexcept {
  this->maximumResolutionX = maximumResolutionX;
  this->maximumResolutionY = maximumResolutionY;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_CompositorOptions::HAPI_CompositorOptions() {}
