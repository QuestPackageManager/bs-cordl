#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLInputSupportsClientMutationId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IGraphQLInputSupportsClientMutationId)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputSupportsClientMutationId;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IGraphQLInputSupportsClientMutationId
class CORDL_TYPE IGraphQLInputSupportsClientMutationId {
public:
  // Declarations
  __declspec(property(put = set_ClientMutationId)) ::StringW ClientMutationId;

  /// @brief Method set_ClientMutationId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ClientMutationId(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IGraphQLInputSupportsClientMutationId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphQLInputSupportsClientMutationId(IGraphQLInputSupportsClientMutationId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*, "OculusStudios.GraphQL.ClientInterface", "IGraphQLInputSupportsClientMutationId");
