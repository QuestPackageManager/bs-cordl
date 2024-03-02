#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_SessionType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Session_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionType_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_SessionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_Session::HAPI_Session(::HoudiniEngineUnity::HAPI_SessionType type, int64_t id) noexcept {
  this->type = type;
  this->id = id;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_Session::HAPI_Session() {}
