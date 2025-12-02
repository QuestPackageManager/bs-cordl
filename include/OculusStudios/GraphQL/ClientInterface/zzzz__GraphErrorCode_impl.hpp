#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/GraphErrorCode.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GraphErrorCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GraphErrorCode() {}
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::UNKNOWN{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__BAD_QUERY_SYNTAX{ static_cast<int32_t>(0x198ef9) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__BAD_QUERY{ static_cast<int32_t>(0x198efa) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__MISSING_QUERY_PARAMETER{ static_cast<int32_t>(0x198efb) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__RATE_LIMIT_EXCEEDED{ static_cast<int32_t>(0x198efc) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__NO_LOGGED_IN_USER{ static_cast<int32_t>(0x198efe) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__PERSISTED_QUERY_NOT_AVAILABLE{ static_cast<int32_t>(0x198eff) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_CURSOR{ static_cast<int32_t>(0x198f03) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__BAD_ARGUMENTS{ static_cast<int32_t>(0x198f04) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__UNPERSISTABLE_QUERY{ static_cast<int32_t>(0x198f05) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_SLICE{ static_cast<int32_t>(0x198f06) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_ID{ static_cast<int32_t>(0x198f07) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_GRAMMAR_ENTITY_AT_CALL{ static_cast<int32_t>(0x198f08) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_GRAPH_SEARCH_QUERY{ static_cast<int32_t>(0x198f09) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__ADFINDER_EXCEPTION{ static_cast<int32_t>(0x198f0a) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__BATCH_CIRCULAR_DEPENDENCY{ static_cast<int32_t>(0x198f0b) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_PHASE{ static_cast<int32_t>(0x198f0c) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_MUATION_RESULT{ static_cast<int32_t>(0x198f0d) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__MUTATION_ERROR{ static_cast<int32_t>(0x198f0e) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_ACTOR_ID{ static_cast<int32_t>(0x198f0f) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__BATCH_UNSATISFIED_REF_PARAM{ static_cast<int32_t>(0x198f10) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__UNPERSISTABLE_QUERY_ROOT_CALL{ static_cast<int32_t>(0x198f11) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__FLATBUFFER_INVALID_JSON_STRING{ static_cast<int32_t>(0x198f12) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__NULL_GRAPH_SEARCH_QUERY{ static_cast<int32_t>(0x198f13) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__TOO_MANY_INPUTS{ static_cast<int32_t>(0x198f14) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__UNEXPECTED_TYPE{ static_cast<int32_t>(0x198f15) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__QUERY_ERROR{ static_cast<int32_t>(0x198f16) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_SHARED_PARAMS{ static_cast<int32_t>(0x198f17) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__CANCELED_SUBSCRIPTION_PAYLOAD{ static_cast<int32_t>(0x198f18) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__REJECTED_DUE_TO_PEAK_OPTIMIZATION{ static_cast<int32_t>(
    0x198f19) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__UNAUTHORIZED_QUERY{ static_cast<int32_t>(0x198f1a) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__INVALID_LIVE_QUERY_CONFIG_ID{ static_cast<int32_t>(0x198f1b) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__LEGACY_QUERY_NOT_WHITELISTED{ static_cast<int32_t>(0x198f1c) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__OCULUS_STORE_MX_INVOICE_TEST{ static_cast<int32_t>(0x198f1d) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__QUERY_ERROR_WITH_CAUSE{ static_cast<int32_t>(0x198f1e) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__LEGACY_STRING_QUERY_NOT_ALLOWLISTED{ static_cast<int32_t>(
    0x198f1f) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__MODERN_STRING_QUERY_NOT_ALLOWLISTED{ static_cast<int32_t>(
    0x198f20) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__OVER_BATCH_MAX_LIMIT{ static_cast<int32_t>(0x198f21) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__PERMISSION_TOKEN_CHECK_DENIED{ static_cast<int32_t>(0x198f22) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__BLOCKED_FOR_PROXY_USER_ACCESS{ static_cast<int32_t>(0x198f23) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__DATA_LIMIT_EXCEEDED{ static_cast<int32_t>(0x198f24) };
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode OculusStudios::GraphQL::ClientInterface::GraphErrorCode::GRAPH_QL__ELASTIC_UNAVAILABILITY{ static_cast<int32_t>(0x198f25) };
