#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/QueryRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
CORDL_MODULE_EXPORT(QueryRequest)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLOperation;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IQueryRequest;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLQueryOperation;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class QueryRequest;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::QueryRequest);
// Dependencies OculusStudios.GraphQL.ClientInterface.Request
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.QueryRequest
class CORDL_TYPE QueryRequest : public ::OculusStudios::GraphQL::ClientInterface::Request {
public:
  // Declarations
  /// @brief Field performRequestCalled, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_performRequestCalled,
                      put = __cordl_internal_set_performRequestCalled)) ::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* performRequestCalled;

  /// @brief Field query, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_query, put = __cordl_internal_set_query)) ::OculusStudios::GraphQL::Client::GraphQLQueryOperation* query;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IQueryRequest"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IQueryRequest*() noexcept;

  /// @brief Method GetCodeGenInfo, addr 0x5d74968, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* GetCodeGenInfo();

  static inline ::OculusStudios::GraphQL::Client::QueryRequest* New_ctor(::OculusStudios::GraphQL::Client::GraphQLQueryOperation* query, bool forceRequestWhenOffline);

  /// @brief Method PerformRequest, addr 0x5d74940, size 0x20, virtual true, abstract: false, final false
  inline void PerformRequest();

  /// @brief Method SupportsClientMutationId, addr 0x5d74960, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsClientMutationId();

  constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* const& __cordl_internal_get_performRequestCalled() const;

  constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*& __cordl_internal_get_performRequestCalled();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLQueryOperation* const& __cordl_internal_get_query() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLQueryOperation*& __cordl_internal_get_query();

  constexpr void __cordl_internal_set_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* value);

  constexpr void __cordl_internal_set_query(::OculusStudios::GraphQL::Client::GraphQLQueryOperation* value);

  /// @brief Method .ctor, addr 0x5d748c4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::GraphQL::Client::GraphQLQueryOperation* query, bool forceRequestWhenOffline);

  /// @brief Method add_performRequestCalled, addr 0x5d74744, size 0xc0, virtual false, abstract: false, final false
  inline void add_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* value);

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IQueryRequest"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* i___OculusStudios__GraphQL__ClientInterface__IQueryRequest() noexcept;

  /// @brief Method remove_performRequestCalled, addr 0x5d74804, size 0xc0, virtual false, abstract: false, final false
  inline void remove_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryRequest(QueryRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryRequest(QueryRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20177 };

  /// @brief Field performRequestCalled, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* ___performRequestCalled;

  /// @brief Field query, offset: 0x60, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLQueryOperation* ___query;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::QueryRequest, ___performRequestCalled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::QueryRequest, ___query) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::QueryRequest, 0x68>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::QueryRequest);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::QueryRequest*, "OculusStudios.GraphQL.Client", "QueryRequest");
