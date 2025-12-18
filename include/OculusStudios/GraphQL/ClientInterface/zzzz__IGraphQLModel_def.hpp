#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGraphQLModel)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLModel;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IGraphQLModel);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IGraphQLModel
class CORDL_TYPE IGraphQLModel {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IGraphQLModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphQLModel(IGraphQLModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::IGraphQLModel);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*, "OculusStudios.GraphQL.ClientInterface", "IGraphQLModel");
