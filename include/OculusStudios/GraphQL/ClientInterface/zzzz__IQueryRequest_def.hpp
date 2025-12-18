#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IQueryRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IQueryRequest)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class IQueryRequest;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IQueryRequest);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IQueryRequest
class CORDL_TYPE IQueryRequest {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IQueryRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IQueryRequest(IQueryRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::IQueryRequest);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::IQueryRequest*, "OculusStudios.GraphQL.ClientInterface", "IQueryRequest");
