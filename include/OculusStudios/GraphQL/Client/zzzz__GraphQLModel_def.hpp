#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLModel)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLModel;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLModel;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLModel);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLModel
class CORDL_TYPE GraphQLModel : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*() noexcept;

  /// @brief Method ConvertString2Enum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::List_1<T>* ConvertString2Enum(::System::Collections::Generic::List_1<::StringW>* strList);

  /// @brief Method ConvertString2Enum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ConvertString2Enum(::StringW str);

  static inline ::OculusStudios::GraphQL::Client::GraphQLModel* New_ctor();

  /// @brief Method .ctor, addr 0x5d0cc40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel* i___OculusStudios__GraphQL__ClientInterface__IGraphQLModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLModel(GraphQLModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLModel(GraphQLModel const&) = delete;

  /// @brief Field UNKNOWN_ENUM_VALUE offset 0xffffffff size 0x8
  static constexpr ::ConstString UNKNOWN_ENUM_VALUE{ u"__UnknownValue" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20245 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLModel, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLModel);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLModel*, "OculusStudios.GraphQL.Client", "GraphQLModel");
