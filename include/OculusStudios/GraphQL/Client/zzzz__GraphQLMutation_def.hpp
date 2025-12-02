#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLMutation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
CORDL_MODULE_EXPORT(GraphQLMutation)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLMutation;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLMutation);
// Dependencies OculusStudios.GraphQL.Client.GraphQLRequest
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLMutation
class CORDL_TYPE GraphQLMutation : public ::OculusStudios::GraphQL::Client::GraphQLRequest {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::GraphQLMutation* New_ctor();

  /// @brief Method .ctor, addr 0x5d16cd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLMutation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLMutation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLMutation(GraphQLMutation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLMutation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLMutation(GraphQLMutation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20298 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLMutation, 0x48>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLMutation);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLMutation*, "OculusStudios.GraphQL.Client", "GraphQLMutation");
