#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ThriftServerOptions_def.hpp"
// Ctor Parameters [CppParam { name: "autoClose", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeoutMs", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ThriftServerOptions::HAPI_ThriftServerOptions(bool autoClose, float_t timeoutMs) noexcept {
  this->autoClose = autoClose;
  this->timeoutMs = timeoutMs;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ThriftServerOptions::HAPI_ThriftServerOptions() {}
