#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MutationRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
CORDL_MODULE_EXPORT(MutationRequest)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLOperation;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IMutationRequest;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLMutationOperation;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class MutationRequest;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::MutationRequest);
// Dependencies OculusStudios.GraphQL.ClientInterface.Request
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.MutationRequest
class CORDL_TYPE MutationRequest : public ::OculusStudios::GraphQL::ClientInterface::Request {
public:
  // Declarations
  /// @brief Field mutation, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mutation, put = __cordl_internal_set_mutation)) ::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation;

  /// @brief Field performRequestCalled, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_performRequestCalled,
                      put = __cordl_internal_set_performRequestCalled)) ::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* performRequestCalled;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IMutationRequest"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IMutationRequest*() noexcept;

  /// @brief Method GetCodeGenInfo, addr 0x5d74738, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* GetCodeGenInfo();

  static inline ::OculusStudios::GraphQL::Client::MutationRequest* New_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, bool forceRequestWhenOffline);

  /// @brief Method PerformRequest, addr 0x5d74718, size 0x20, virtual true, abstract: false, final false
  inline void PerformRequest();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLMutationOperation* const& __cordl_internal_get_mutation() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLMutationOperation*& __cordl_internal_get_mutation();

  constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* const& __cordl_internal_get_performRequestCalled() const;

  constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*& __cordl_internal_get_performRequestCalled();

  constexpr void __cordl_internal_set_mutation(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* value);

  constexpr void __cordl_internal_set_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* value);

  /// @brief Method .ctor, addr 0x5d7469c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, bool forceRequestWhenOffline);

  /// @brief Method add_performRequestCalled, addr 0x5d7451c, size 0xc0, virtual false, abstract: false, final false
  inline void add_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* value);

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IMutationRequest"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* i___OculusStudios__GraphQL__ClientInterface__IMutationRequest() noexcept;

  /// @brief Method remove_performRequestCalled, addr 0x5d745dc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MutationRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MutationRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MutationRequest(MutationRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MutationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MutationRequest(MutationRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20175 };

  /// @brief Field performRequestCalled, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* ___performRequestCalled;

  /// @brief Field mutation, offset: 0x60, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLMutationOperation* ___mutation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::MutationRequest, ___performRequestCalled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::MutationRequest, ___mutation) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::MutationRequest, 0x68>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::MutationRequest);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::MutationRequest*, "OculusStudios.GraphQL.Client", "MutationRequest");
