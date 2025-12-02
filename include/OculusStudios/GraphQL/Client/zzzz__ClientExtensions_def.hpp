#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/ClientExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClientExtensions)
namespace OculusStudios::GraphQL::Client {
class GraphQLError;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLRequestException;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponse;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class ClientExtensions;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::ClientExtensions);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.ClientExtensions
class CORDL_TYPE ClientExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateGraphQLRequestExceptionFromError, addr 0x5d09a14, size 0x160, virtual false, abstract: false, final false
  static inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* CreateGraphQLRequestExceptionFromError(::OculusStudios::GraphQL::Client::GraphQLError* error);

  /// @brief Method ExtractDataStringFromResponse, addr 0x5d09844, size 0x1d0, virtual false, abstract: false, final false
  static inline ::StringW ExtractDataStringFromResponse(::OculusStudios::GraphQL::Client::GraphQLResponse* response);

  /// @brief Method ProcessModel, addr 0x5d09720, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Object* ProcessModel(::StringW dataString, ::System::Type* type);

  /// @brief Method ProcessModel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ProcessModel(::StringW dataString);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientExtensions(ClientExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientExtensions(ClientExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::ClientExtensions, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::ClientExtensions);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::ClientExtensions*, "OculusStudios.GraphQL.Client", "ClientExtensions");
