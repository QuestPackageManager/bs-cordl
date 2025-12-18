#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLInputObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IGraphQLInputObject)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputObject;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IGraphQLInputObject
class CORDL_TYPE IGraphQLInputObject {
public:
  // Declarations
  /// @brief Method GetParams, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* GetParams();

  // Ctor Parameters [CppParam { name: "", ty: "IGraphQLInputObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphQLInputObject(IGraphQLInputObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*, "OculusStudios.GraphQL.ClientInterface", "IGraphQLInputObject");
