#pragma once
// IWYU pragma private; include "OSCE/Web/FailedPostRequest.hpp"
#include "OSCE/Web/zzzz__FailedPostRequest_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
// Ctor Parameters [CppParam { name: "Path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Json", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ErrorMessage", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "AttemptsMade", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Batch", ty:
// "::OSCE::Analytics::LoggerAnalyticsBatch*", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Web::FailedPostRequest::FailedPostRequest(::StringW Path, ::StringW Json, ::StringW ErrorMessage, int32_t AttemptsMade, ::OSCE::Analytics::LoggerAnalyticsBatch* Batch) noexcept {
  this->Path = Path;
  this->Json = Json;
  this->ErrorMessage = ErrorMessage;
  this->AttemptsMade = AttemptsMade;
  this->Batch = Batch;
}
// Ctor Parameters []
constexpr ::OSCE::Web::FailedPostRequest::FailedPostRequest() {}
