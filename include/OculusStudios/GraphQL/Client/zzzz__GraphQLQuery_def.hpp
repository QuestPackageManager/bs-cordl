#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
CORDL_MODULE_EXPORT(GraphQLQuery)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLQuery;
}
// Write type traits
MARK_REF_T(::OculusStudios::GraphQL::Client::GraphQLQuery*);
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::GraphQLQuery*, "OculusStudios.GraphQL.Client", "GraphQLQuery");
// Dependencies OculusStudios.GraphQL.Client.GraphQLRequest
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLQuery
class CORDL_TYPE GraphQLQuery : public ::OculusStudios::GraphQL::Client::GraphQLRequest {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::GraphQLQuery* New_ctor();

  /// @brief Method .ctor, addr 0x5f2bd04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLQuery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLQuery(GraphQLQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLQuery(GraphQLQuery const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OculusStudios::GraphQL::Client::GraphQLQuery) == 0x48, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
