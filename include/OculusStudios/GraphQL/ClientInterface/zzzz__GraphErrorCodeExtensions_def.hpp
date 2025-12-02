#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/GraphErrorCodeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphErrorCodeExtensions)
namespace OculusStudios::GraphQL::ClientInterface {
struct GraphErrorCode;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class GraphErrorCodeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions);
// Dependencies System.Object
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.GraphErrorCodeExtensions
class CORDL_TYPE GraphErrorCodeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetGraphQLErrorCode, addr 0x5d1768c, size 0xbc, virtual false, abstract: false, final false
  static inline ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode GetGraphQLErrorCode(int32_t code);

  /// @brief Method IsGraphQLErrorCode, addr 0x5d175dc, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsGraphQLErrorCode(int32_t code);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphErrorCodeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphErrorCodeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphErrorCodeExtensions(GraphErrorCodeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphErrorCodeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphErrorCodeExtensions(GraphErrorCodeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::GraphErrorCodeExtensions*, "OculusStudios.GraphQL.ClientInterface", "GraphErrorCodeExtensions");
