#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLClientInfraException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLClientInfraException)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLClientInfraException;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClientInfraException);
// Dependencies OculusStudios.GraphQL.Client.GraphQLException
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClientInfraException
class CORDL_TYPE GraphQLClientInfraException : public ::OculusStudios::GraphQL::Client::GraphQLException {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::GraphQLClientInfraException* New_ctor();

  static inline ::OculusStudios::GraphQL::Client::GraphQLClientInfraException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5d707e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5d707e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientInfraException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientInfraException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClientInfraException(GraphQLClientInfraException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientInfraException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClientInfraException(GraphQLClientInfraException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20129 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClientInfraException, 0x90>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLClientInfraException);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClientInfraException*, "OculusStudios.GraphQL.Client", "GraphQLClientInfraException");
