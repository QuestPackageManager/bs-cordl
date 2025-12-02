#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLLiveQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLLiveQuery)
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLLiveQuery;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLLiveQuery);
// Dependencies OculusStudios.GraphQL.Client.GraphQLRequest
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLLiveQuery
class CORDL_TYPE GraphQLLiveQuery : public ::OculusStudios::GraphQL::Client::GraphQLRequest {
public:
  // Declarations
  /// @brief Field Cancelled, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_Cancelled, put = __cordl_internal_set_Cancelled)) bool Cancelled;

  /// @brief Field PollingInterval, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_PollingInterval, put = __cordl_internal_set_PollingInterval)) int32_t PollingInterval;

  /// @brief Field TokenSource, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_TokenSource, put = __cordl_internal_set_TokenSource)) ::System::Threading::CancellationTokenSource* TokenSource;

  static inline ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* New_ctor();

  constexpr bool const& __cordl_internal_get_Cancelled() const;

  constexpr bool& __cordl_internal_get_Cancelled();

  constexpr int32_t const& __cordl_internal_get_PollingInterval() const;

  constexpr int32_t& __cordl_internal_get_PollingInterval();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_TokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_TokenSource();

  constexpr void __cordl_internal_set_Cancelled(bool value);

  constexpr void __cordl_internal_set_PollingInterval(int32_t value);

  constexpr void __cordl_internal_set_TokenSource(::System::Threading::CancellationTokenSource* value);

  /// @brief Method .ctor, addr 0x5d16cdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLLiveQuery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLLiveQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLLiveQuery(GraphQLLiveQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLLiveQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLLiveQuery(GraphQLLiveQuery const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20299 };

  /// @brief Field Cancelled, offset: 0x48, size: 0x1, def value: None
  bool ___Cancelled;

  /// @brief Field PollingInterval, offset: 0x4c, size: 0x4, def value: None
  int32_t ___PollingInterval;

  /// @brief Field TokenSource, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ___TokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLLiveQuery, ___Cancelled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLLiveQuery, ___PollingInterval) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLLiveQuery, ___TokenSource) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLLiveQuery, 0x58>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLLiveQuery);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLLiveQuery*, "OculusStudios.GraphQL.Client", "GraphQLLiveQuery");
