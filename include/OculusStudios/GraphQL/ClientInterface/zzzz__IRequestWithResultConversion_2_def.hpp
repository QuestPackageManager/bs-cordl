#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IRequestWithResultConversion_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLModel_def.hpp"
CORDL_MODULE_EXPORT(IRequestWithResultConversion_2)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
template <typename TBackend, typename TFrontend>
  requires(::cordl_internals::type_constraint<TBackend, ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*> && ::cordl_internals::reference_type_constraint<TBackend> &&
           ::cordl_internals::reference_type_constraint<TFrontend>)
class IRequestWithResultConversion_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2, "OculusStudios.GraphQL.ClientInterface", "IRequestWithResultConversion`2");
// Dependencies OculusStudios.GraphQL.ClientInterface.IGraphQLModel
namespace OculusStudios::GraphQL::ClientInterface {
// cpp template
template <typename TBackend, typename TFrontend>
  requires(::cordl_internals::type_constraint<TBackend, ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*> && ::cordl_internals::reference_type_constraint<TBackend> &&
           ::cordl_internals::reference_type_constraint<TFrontend>)
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IRequestWithResultConversion`2<TBackend,TFrontend>
class CORDL_TYPE IRequestWithResultConversion_2 {
public:
  // Declarations
  /// @brief Method ConvertResponseModel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<TFrontend>* ConvertResponseModel(TBackend backendModel);

  // Ctor Parameters [CppParam { name: "", ty: "IRequestWithResultConversion_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRequestWithResultConversion_2(IRequestWithResultConversion_2const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22885 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
