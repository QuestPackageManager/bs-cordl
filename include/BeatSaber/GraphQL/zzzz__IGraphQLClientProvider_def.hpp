#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/IGraphQLClientProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGraphQLClientProvider)
namespace BeatSaber::GraphQL {
struct BSClientProviderInitializationState;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClient;
}
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
class IGraphQLClientProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GraphQL::IGraphQLClientProvider);
// Dependencies
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.IGraphQLClientProvider
class CORDL_TYPE IGraphQLClientProvider {
public:
  // Declarations
  __declspec(property(get = get_graphQLClient)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* graphQLClient;

  __declspec(property(get = get_initializationState)) ::BeatSaber::GraphQL::BSClientProviderInitializationState initializationState;

  /// @brief Method InitializeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync(::System::Threading::CancellationToken ctx);

  /// @brief Method add_globalRequestFailureEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method add_globalRequestSucceededEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method add_initializationDidFinishEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_initializationDidFinishEvent(::System::Action* value);

  /// @brief Method get_graphQLClient, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* get_graphQLClient();

  /// @brief Method get_initializationState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BeatSaber::GraphQL::BSClientProviderInitializationState get_initializationState();

  /// @brief Method remove_globalRequestFailureEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method remove_globalRequestSucceededEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method remove_initializationDidFinishEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_initializationDidFinishEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IGraphQLClientProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphQLClientProvider(IGraphQLClientProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::GraphQL
NEED_NO_BOX(::BeatSaber::GraphQL::IGraphQLClientProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::IGraphQLClientProvider*, "BeatSaber.GraphQL", "IGraphQLClientProvider");
