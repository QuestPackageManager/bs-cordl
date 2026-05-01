#pragma once
// IWYU pragma private; include "OSCE/Web/FailedGetRequest.hpp"
#include "OSCE/Web/zzzz__FailedGetRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "Path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Query", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "AttemptsMade", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Web::FailedGetRequest::FailedGetRequest(::StringW Path, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Query, int32_t AttemptsMade) noexcept {
  this->Path = Path;
  this->Query = Query;
  this->AttemptsMade = AttemptsMade;
}
// Ctor Parameters []
constexpr ::OSCE::Web::FailedGetRequest::FailedGetRequest() {}
