#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLMutationOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLOperationBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLMutationOperation)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLOperation;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLMutationOperation;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLMutationOperation);
// Dependencies OculusStudios.GraphQL.Client.GraphQLOperationBase
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLMutationOperation
class CORDL_TYPE GraphQLMutationOperation : public ::OculusStudios::GraphQL::Client::GraphQLOperationBase {
public:
  // Declarations
  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*() noexcept;

  /// @brief Method GetPersistedQueryID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t GetPersistedQueryID();

  static inline ::OculusStudios::GraphQL::Client::GraphQLMutationOperation* New_ctor();

  /// @brief Method SetData, addr 0x5d73724, size 0x80, virtual false, abstract: false, final false
  inline void SetData(::System::Object* o);

  /// @brief Method .ctor, addr 0x5d737a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* i___OculusStudios__GraphQL__ClientInterface__IGraphQLOperation() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLMutationOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLMutationOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLMutationOperation(GraphQLMutationOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLMutationOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLMutationOperation(GraphQLMutationOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLMutationOperation, 0x18>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLMutationOperation);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLMutationOperation*, "OculusStudios.GraphQL.Client", "GraphQLMutationOperation");
