#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/EmptyResponseObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyResponseObject)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLModel;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class EmptyResponseObject;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject);
// Dependencies System.Object
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.EmptyResponseObject
class CORDL_TYPE EmptyResponseObject : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*() noexcept;

  static inline ::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject* New_ctor();

  /// @brief Method .ctor, addr 0x5d17230, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel* i___OculusStudios__GraphQL__ClientInterface__IGraphQLModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyResponseObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyResponseObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyResponseObject(EmptyResponseObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyResponseObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyResponseObject(EmptyResponseObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*, "OculusStudios.GraphQL.ClientInterface", "EmptyResponseObject");
