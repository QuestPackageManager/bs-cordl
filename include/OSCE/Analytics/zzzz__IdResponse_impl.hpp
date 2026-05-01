#pragma once
// IWYU pragma private; include "OSCE/Analytics/IdResponse.hpp"
#include "OSCE/Analytics/zzzz__IdResponse_def.hpp"
// Ctor Parameters [CppParam { name: "rid", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform_rid", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "platform_account_id", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "game_specific_id", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Analytics::IdResponse::IdResponse(::StringW rid, ::StringW platform_rid, ::StringW platform_account_id, ::StringW game_specific_id) noexcept {
  this->rid = rid;
  this->platform_rid = platform_rid;
  this->platform_account_id = platform_account_id;
  this->game_specific_id = game_specific_id;
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::IdResponse::IdResponse() {}
