#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/IGraphQLClientTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IGraphQLClientTransport)
namespace OculusStudios::GraphQL::Client {
class GraphQLRequest;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream;
}
namespace OculusStudios::GraphQL::Client {
class MinimalMainThreadExecutor;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class IGraphQLClientTransport;
}
// Write type traits
MARK_REF_T(::OculusStudios::GraphQL::Client::IGraphQLClientTransport*);
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::IGraphQLClientTransport*, "OculusStudios.GraphQL.Client", "IGraphQLClientTransport");
// Dependencies
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.IGraphQLClientTransport
class CORDL_TYPE IGraphQLClientTransport {
public:
  // Declarations
  __declspec(property(get = get_CustomAppHeaders, put = set_CustomAppHeaders)) ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* CustomAppHeaders;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ExecuteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* request,
                                                                                                                    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* mainThreadExecutor);

  /// @brief Method get_CustomAppHeaders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_CustomAppHeaders();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_CustomAppHeaders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_CustomAppHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IGraphQLClientTransport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphQLClientTransport(IGraphQLClientTransport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21092 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
