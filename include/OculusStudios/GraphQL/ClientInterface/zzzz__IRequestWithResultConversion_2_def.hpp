#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IRequestWithResultConversion_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRequestWithResultConversion_2)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
template <typename TBackend, typename TFrontend> class IRequestWithResultConversion_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// cpp template
template <typename TBackend, typename TFrontend>
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IRequestWithResultConversion`2<TBackend,TFrontend>
class CORDL_TYPE IRequestWithResultConversion_2 {
public:
  // Declarations
  /// @brief Method ConvertResponseModel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TFrontend>* ConvertResponseModel(TBackend backendModel);

  // Ctor Parameters [CppParam { name: "", ty: "IRequestWithResultConversion_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRequestWithResultConversion_2(IRequestWithResultConversion_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2, "OculusStudios.GraphQL.ClientInterface", "IRequestWithResultConversion`2");
