#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLException)
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLException;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLException);
// Dependencies System.Exception
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLException
class CORDL_TYPE GraphQLException : public ::System::Exception {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::GraphQLException* New_ctor();

  static inline ::OculusStudios::GraphQL::Client::GraphQLException* New_ctor(::StringW message);

  static inline ::OculusStudios::GraphQL::Client::GraphQLException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x5d09bc0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5d09c18, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5d09c84, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLException(GraphQLException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLException(GraphQLException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLException, 0x90>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLException);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLException*, "OculusStudios.GraphQL.Client", "GraphQLException");
