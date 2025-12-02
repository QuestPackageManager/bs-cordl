#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MutationRequest_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_def.hpp"
CORDL_MODULE_EXPORT(MutationRequest_1)
namespace OculusStudios::GraphQL::Client {
class GraphQLMutationOperation;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
template <typename TInputModel> class MutationRequest_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::MutationRequest_1);
// Dependencies OculusStudios.GraphQL.Client.MutationRequest
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TInputModel>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.MutationRequest`1<TInputModel>
class CORDL_TYPE MutationRequest_1 : public ::OculusStudios::GraphQL::Client::MutationRequest {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::MutationRequest_1<TInputModel>* New_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, TInputModel inputObject,
                                                                                           bool forceRequestWhenOffline);

  /// @brief Method SupportsClientMutationId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool SupportsClientMutationId();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, TInputModel inputObject, bool forceRequestWhenOffline);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MutationRequest_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MutationRequest_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MutationRequest_1(MutationRequest_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MutationRequest_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MutationRequest_1(MutationRequest_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::MutationRequest_1, "OculusStudios.GraphQL.Client", "MutationRequest`1");
