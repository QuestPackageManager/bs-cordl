#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLClientEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IGraphQLClientEvents)
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClientEvents;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IGraphQLClientEvents
class CORDL_TYPE IGraphQLClientEvents {
public:
  // Declarations
  /// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogError(::System::Exception* exception);

  /// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogError(::StringW message);

  /// @brief Method LogInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogInfo(::System::Exception* exception);

  /// @brief Method LogInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogInfo(::StringW message);

  /// @brief Method LogVerbose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogVerbose(::StringW message);

  /// @brief Method LogWarning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogWarning(::StringW message);

  /// @brief Method OnRequestFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnRequestFailed(::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method OnRequestSucceeded, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnRequestSucceeded(::OculusStudios::GraphQL::ClientInterface::Request* request);

  // Ctor Parameters [CppParam { name: "", ty: "IGraphQLClientEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphQLClientEvents(IGraphQLClientEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22468 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*, "OculusStudios.GraphQL.ClientInterface", "IGraphQLClientEvents");
