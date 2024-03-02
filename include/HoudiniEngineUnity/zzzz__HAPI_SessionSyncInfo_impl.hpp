#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
// Ctor Parameters [CppParam { name: "cookUsingHoudiniTime", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncViewport", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo::HAPI_SessionSyncInfo(bool cookUsingHoudiniTime, bool syncViewport) noexcept {
  this->cookUsingHoudiniTime = cookUsingHoudiniTime;
  this->syncViewport = syncViewport;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo::HAPI_SessionSyncInfo() {}
