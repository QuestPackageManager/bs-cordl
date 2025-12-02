#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IMutationRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMutationRequest)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class IMutationRequest;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IMutationRequest);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IMutationRequest
class CORDL_TYPE IMutationRequest {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IMutationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMutationRequest(IMutationRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22448 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::IMutationRequest);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::IMutationRequest*, "OculusStudios.GraphQL.ClientInterface", "IMutationRequest");
