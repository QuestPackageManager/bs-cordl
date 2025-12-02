#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/GraphErrorCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphErrorCode)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
struct GraphErrorCode;
}
// Write type traits
MARK_VAL_T(::OculusStudios::GraphQL::ClientInterface::GraphErrorCode);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: true
// CS Name: OculusStudios.GraphQL.ClientInterface.GraphErrorCode
struct CORDL_TYPE GraphErrorCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphErrorCode_Unwrapped
  enum struct __GraphErrorCode_Unwrapped : int32_t {
    __E_UNKNOWN = static_cast<int32_t>(0x0),
    __E_GRAPH_QL__BAD_QUERY_SYNTAX = static_cast<int32_t>(0x198ef9),
    __E_GRAPH_QL__BAD_QUERY = static_cast<int32_t>(0x198efa),
    __E_GRAPH_QL__MISSING_QUERY_PARAMETER = static_cast<int32_t>(0x198efb),
    __E_GRAPH_QL__RATE_LIMIT_EXCEEDED = static_cast<int32_t>(0x198efc),
    __E_GRAPH_QL__NO_LOGGED_IN_USER = static_cast<int32_t>(0x198efe),
    __E_GRAPH_QL__PERSISTED_QUERY_NOT_AVAILABLE = static_cast<int32_t>(0x198eff),
    __E_GRAPH_QL__INVALID_CURSOR = static_cast<int32_t>(0x198f03),
    __E_GRAPH_QL__BAD_ARGUMENTS = static_cast<int32_t>(0x198f04),
    __E_GRAPH_QL__UNPERSISTABLE_QUERY = static_cast<int32_t>(0x198f05),
    __E_GRAPH_QL__INVALID_SLICE = static_cast<int32_t>(0x198f06),
    __E_GRAPH_QL__INVALID_ID = static_cast<int32_t>(0x198f07),
    __E_GRAPH_QL__INVALID_GRAMMAR_ENTITY_AT_CALL = static_cast<int32_t>(0x198f08),
    __E_GRAPH_QL__INVALID_GRAPH_SEARCH_QUERY = static_cast<int32_t>(0x198f09),
    __E_GRAPH_QL__ADFINDER_EXCEPTION = static_cast<int32_t>(0x198f0a),
    __E_GRAPH_QL__BATCH_CIRCULAR_DEPENDENCY = static_cast<int32_t>(0x198f0b),
    __E_GRAPH_QL__INVALID_PHASE = static_cast<int32_t>(0x198f0c),
    __E_GRAPH_QL__INVALID_MUATION_RESULT = static_cast<int32_t>(0x198f0d),
    __E_GRAPH_QL__MUTATION_ERROR = static_cast<int32_t>(0x198f0e),
    __E_GRAPH_QL__INVALID_ACTOR_ID = static_cast<int32_t>(0x198f0f),
    __E_GRAPH_QL__BATCH_UNSATISFIED_REF_PARAM = static_cast<int32_t>(0x198f10),
    __E_GRAPH_QL__UNPERSISTABLE_QUERY_ROOT_CALL = static_cast<int32_t>(0x198f11),
    __E_GRAPH_QL__FLATBUFFER_INVALID_JSON_STRING = static_cast<int32_t>(0x198f12),
    __E_GRAPH_QL__NULL_GRAPH_SEARCH_QUERY = static_cast<int32_t>(0x198f13),
    __E_GRAPH_QL__TOO_MANY_INPUTS = static_cast<int32_t>(0x198f14),
    __E_GRAPH_QL__UNEXPECTED_TYPE = static_cast<int32_t>(0x198f15),
    __E_GRAPH_QL__QUERY_ERROR = static_cast<int32_t>(0x198f16),
    __E_GRAPH_QL__INVALID_SHARED_PARAMS = static_cast<int32_t>(0x198f17),
    __E_GRAPH_QL__CANCELED_SUBSCRIPTION_PAYLOAD = static_cast<int32_t>(0x198f18),
    __E_GRAPH_QL__REJECTED_DUE_TO_PEAK_OPTIMIZATION = static_cast<int32_t>(0x198f19),
    __E_GRAPH_QL__UNAUTHORIZED_QUERY = static_cast<int32_t>(0x198f1a),
    __E_GRAPH_QL__INVALID_LIVE_QUERY_CONFIG_ID = static_cast<int32_t>(0x198f1b),
    __E_GRAPH_QL__LEGACY_QUERY_NOT_WHITELISTED = static_cast<int32_t>(0x198f1c),
    __E_GRAPH_QL__OCULUS_STORE_MX_INVOICE_TEST = static_cast<int32_t>(0x198f1d),
    __E_GRAPH_QL__QUERY_ERROR_WITH_CAUSE = static_cast<int32_t>(0x198f1e),
    __E_GRAPH_QL__LEGACY_STRING_QUERY_NOT_ALLOWLISTED = static_cast<int32_t>(0x198f1f),
    __E_GRAPH_QL__MODERN_STRING_QUERY_NOT_ALLOWLISTED = static_cast<int32_t>(0x198f20),
    __E_GRAPH_QL__OVER_BATCH_MAX_LIMIT = static_cast<int32_t>(0x198f21),
    __E_GRAPH_QL__PERMISSION_TOKEN_CHECK_DENIED = static_cast<int32_t>(0x198f22),
    __E_GRAPH_QL__BLOCKED_FOR_PROXY_USER_ACCESS = static_cast<int32_t>(0x198f23),
    __E_GRAPH_QL__DATA_LIMIT_EXCEEDED = static_cast<int32_t>(0x198f24),
    __E_GRAPH_QL__ELASTIC_UNAVAILABILITY = static_cast<int32_t>(0x198f25),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphErrorCode_Unwrapped() const noexcept {
    return static_cast<__GraphErrorCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphErrorCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphErrorCode(int32_t value__) noexcept;

  /// @brief Field GRAPH_QL__ADFINDER_EXCEPTION value: I32(1675018)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__ADFINDER_EXCEPTION;

  /// @brief Field GRAPH_QL__BAD_ARGUMENTS value: I32(1675012)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__BAD_ARGUMENTS;

  /// @brief Field GRAPH_QL__BAD_QUERY value: I32(1675002)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__BAD_QUERY;

  /// @brief Field GRAPH_QL__BAD_QUERY_SYNTAX value: I32(1675001)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__BAD_QUERY_SYNTAX;

  /// @brief Field GRAPH_QL__BATCH_CIRCULAR_DEPENDENCY value: I32(1675019)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__BATCH_CIRCULAR_DEPENDENCY;

  /// @brief Field GRAPH_QL__BATCH_UNSATISFIED_REF_PARAM value: I32(1675024)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__BATCH_UNSATISFIED_REF_PARAM;

  /// @brief Field GRAPH_QL__BLOCKED_FOR_PROXY_USER_ACCESS value: I32(1675043)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__BLOCKED_FOR_PROXY_USER_ACCESS;

  /// @brief Field GRAPH_QL__CANCELED_SUBSCRIPTION_PAYLOAD value: I32(1675032)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__CANCELED_SUBSCRIPTION_PAYLOAD;

  /// @brief Field GRAPH_QL__DATA_LIMIT_EXCEEDED value: I32(1675044)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__DATA_LIMIT_EXCEEDED;

  /// @brief Field GRAPH_QL__ELASTIC_UNAVAILABILITY value: I32(1675045)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__ELASTIC_UNAVAILABILITY;

  /// @brief Field GRAPH_QL__FLATBUFFER_INVALID_JSON_STRING value: I32(1675026)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__FLATBUFFER_INVALID_JSON_STRING;

  /// @brief Field GRAPH_QL__INVALID_ACTOR_ID value: I32(1675023)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_ACTOR_ID;

  /// @brief Field GRAPH_QL__INVALID_CURSOR value: I32(1675011)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_CURSOR;

  /// @brief Field GRAPH_QL__INVALID_GRAMMAR_ENTITY_AT_CALL value: I32(1675016)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_GRAMMAR_ENTITY_AT_CALL;

  /// @brief Field GRAPH_QL__INVALID_GRAPH_SEARCH_QUERY value: I32(1675017)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_GRAPH_SEARCH_QUERY;

  /// @brief Field GRAPH_QL__INVALID_ID value: I32(1675015)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_ID;

  /// @brief Field GRAPH_QL__INVALID_LIVE_QUERY_CONFIG_ID value: I32(1675035)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_LIVE_QUERY_CONFIG_ID;

  /// @brief Field GRAPH_QL__INVALID_MUATION_RESULT value: I32(1675021)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_MUATION_RESULT;

  /// @brief Field GRAPH_QL__INVALID_PHASE value: I32(1675020)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_PHASE;

  /// @brief Field GRAPH_QL__INVALID_SHARED_PARAMS value: I32(1675031)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_SHARED_PARAMS;

  /// @brief Field GRAPH_QL__INVALID_SLICE value: I32(1675014)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__INVALID_SLICE;

  /// @brief Field GRAPH_QL__LEGACY_QUERY_NOT_WHITELISTED value: I32(1675036)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__LEGACY_QUERY_NOT_WHITELISTED;

  /// @brief Field GRAPH_QL__LEGACY_STRING_QUERY_NOT_ALLOWLISTED value: I32(1675039)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__LEGACY_STRING_QUERY_NOT_ALLOWLISTED;

  /// @brief Field GRAPH_QL__MISSING_QUERY_PARAMETER value: I32(1675003)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__MISSING_QUERY_PARAMETER;

  /// @brief Field GRAPH_QL__MODERN_STRING_QUERY_NOT_ALLOWLISTED value: I32(1675040)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__MODERN_STRING_QUERY_NOT_ALLOWLISTED;

  /// @brief Field GRAPH_QL__MUTATION_ERROR value: I32(1675022)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__MUTATION_ERROR;

  /// @brief Field GRAPH_QL__NO_LOGGED_IN_USER value: I32(1675006)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__NO_LOGGED_IN_USER;

  /// @brief Field GRAPH_QL__NULL_GRAPH_SEARCH_QUERY value: I32(1675027)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__NULL_GRAPH_SEARCH_QUERY;

  /// @brief Field GRAPH_QL__OCULUS_STORE_MX_INVOICE_TEST value: I32(1675037)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__OCULUS_STORE_MX_INVOICE_TEST;

  /// @brief Field GRAPH_QL__OVER_BATCH_MAX_LIMIT value: I32(1675041)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__OVER_BATCH_MAX_LIMIT;

  /// @brief Field GRAPH_QL__PERMISSION_TOKEN_CHECK_DENIED value: I32(1675042)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__PERMISSION_TOKEN_CHECK_DENIED;

  /// @brief Field GRAPH_QL__PERSISTED_QUERY_NOT_AVAILABLE value: I32(1675007)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__PERSISTED_QUERY_NOT_AVAILABLE;

  /// @brief Field GRAPH_QL__QUERY_ERROR value: I32(1675030)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__QUERY_ERROR;

  /// @brief Field GRAPH_QL__QUERY_ERROR_WITH_CAUSE value: I32(1675038)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__QUERY_ERROR_WITH_CAUSE;

  /// @brief Field GRAPH_QL__RATE_LIMIT_EXCEEDED value: I32(1675004)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__RATE_LIMIT_EXCEEDED;

  /// @brief Field GRAPH_QL__REJECTED_DUE_TO_PEAK_OPTIMIZATION value: I32(1675033)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__REJECTED_DUE_TO_PEAK_OPTIMIZATION;

  /// @brief Field GRAPH_QL__TOO_MANY_INPUTS value: I32(1675028)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__TOO_MANY_INPUTS;

  /// @brief Field GRAPH_QL__UNAUTHORIZED_QUERY value: I32(1675034)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__UNAUTHORIZED_QUERY;

  /// @brief Field GRAPH_QL__UNEXPECTED_TYPE value: I32(1675029)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__UNEXPECTED_TYPE;

  /// @brief Field GRAPH_QL__UNPERSISTABLE_QUERY value: I32(1675013)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__UNPERSISTABLE_QUERY;

  /// @brief Field GRAPH_QL__UNPERSISTABLE_QUERY_ROOT_CALL value: I32(1675025)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const GRAPH_QL__UNPERSISTABLE_QUERY_ROOT_CALL;

  /// @brief Field UNKNOWN value: I32(0)
  static ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const UNKNOWN;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22438 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::GraphErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::GraphErrorCode, 0x4>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::GraphErrorCode, "OculusStudios.GraphQL.ClientInterface", "GraphErrorCode");
