#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLResponseParseException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GraphQLResponseParseException)
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseParseException;
}
// Write type traits
MARK_REF_T(::OculusStudios::GraphQL::Client::GraphQLResponseParseException*);
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::GraphQLResponseParseException*, "OculusStudios.GraphQL.Client", "GraphQLResponseParseException");
// Dependencies OculusStudios.GraphQL.Client.GraphQLException
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLResponseParseException
class CORDL_TYPE GraphQLResponseParseException : public ::OculusStudios::GraphQL::Client::GraphQLException {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::GraphQLResponseParseException* New_ctor();

  static inline ::OculusStudios::GraphQL::Client::GraphQLResponseParseException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x5f1ec94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f1e7dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLResponseParseException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponseParseException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLResponseParseException(GraphQLResponseParseException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponseParseException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLResponseParseException(GraphQLResponseParseException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OculusStudios::GraphQL::Client::GraphQLResponseParseException) == 0x90, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
