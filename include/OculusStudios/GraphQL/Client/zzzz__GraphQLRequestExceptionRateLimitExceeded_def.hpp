#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLRequestExceptionRateLimitExceeded.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLRequestExceptionRateLimitExceeded)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLRequestExceptionRateLimitExceeded;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded);
// Dependencies OculusStudios.GraphQL.Client.GraphQLRequestException
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLRequestExceptionRateLimitExceeded
class CORDL_TYPE GraphQLRequestExceptionRateLimitExceeded : public ::OculusStudios::GraphQL::Client::GraphQLRequestException {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded* New_ctor(int32_t errorCode, ::StringW message);

  /// @brief Method .ctor, addr 0x5d7069c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode, ::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLRequestExceptionRateLimitExceeded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLRequestExceptionRateLimitExceeded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLRequestExceptionRateLimitExceeded(GraphQLRequestExceptionRateLimitExceeded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLRequestExceptionRateLimitExceeded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLRequestExceptionRateLimitExceeded(GraphQLRequestExceptionRateLimitExceeded const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded, 0x98>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLRequestExceptionRateLimitExceeded*, "OculusStudios.GraphQL.Client", "GraphQLRequestExceptionRateLimitExceeded");
