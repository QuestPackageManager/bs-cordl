#pragma once
// IWYU pragma private; include "GlobalNamespace/AnalyticsPostResponse.hpp"
#include "GlobalNamespace/zzzz__AnalyticsPostResponse_def.hpp"
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "error_message", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AnalyticsPostResponse::AnalyticsPostResponse(bool success, ::StringW error_message) noexcept {
  this->success = success;
  this->error_message = error_message;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnalyticsPostResponse::AnalyticsPostResponse() {}
