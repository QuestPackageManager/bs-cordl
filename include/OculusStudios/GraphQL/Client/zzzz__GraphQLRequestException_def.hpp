#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLRequestException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLRequestException)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLRequestException;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLRequestException);
// Dependencies OculusStudios.GraphQL.Client.GraphQLException, OculusStudios.GraphQL.ClientInterface.GraphErrorCode
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLRequestException
class CORDL_TYPE GraphQLRequestException : public ::OculusStudios::GraphQL::Client::GraphQLException {
public:
  // Declarations
  /// @brief Field errorCode, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_errorCode, put = __cordl_internal_set_errorCode)) int32_t errorCode;

  /// @brief Field graphErrorCode, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_graphErrorCode, put = __cordl_internal_set_graphErrorCode)) ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode graphErrorCode;

  static inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* New_ctor();

  static inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* New_ctor(int32_t errorCode, ::StringW message);

  static inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* New_ctor(::StringW message);

  constexpr int32_t const& __cordl_internal_get_errorCode() const;

  constexpr int32_t& __cordl_internal_get_errorCode();

  constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const& __cordl_internal_get_graphErrorCode() const;

  constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode& __cordl_internal_get_graphErrorCode();

  constexpr void __cordl_internal_set_errorCode(int32_t value);

  constexpr void __cordl_internal_set_graphErrorCode(::OculusStudios::GraphQL::ClientInterface::GraphErrorCode value);

  /// @brief Method .ctor, addr 0x5d707f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5d70654, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode, ::StringW message);

  /// @brief Method .ctor, addr 0x5d707f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLRequestException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLRequestException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLRequestException(GraphQLRequestException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLRequestException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLRequestException(GraphQLRequestException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20131 };

  /// @brief Field graphErrorCode, offset: 0x8c, size: 0x4, def value: None
  ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode ___graphErrorCode;

  /// @brief Field errorCode, offset: 0x90, size: 0x4, def value: None
  int32_t ___errorCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequestException, ___graphErrorCode) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequestException, ___errorCode) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLRequestException, 0x98>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLRequestException);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLRequestException*, "OculusStudios.GraphQL.Client", "GraphQLRequestException");
