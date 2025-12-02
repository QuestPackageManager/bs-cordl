#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/GraphQLClientLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLClientLogger)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClientEvents;
}
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class GraphQLClientLogger;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::GraphQLClientLogger);
// Dependencies System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.GraphQLClientLogger
class CORDL_TYPE GraphQLClientLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*() noexcept;

  /// @brief Method LogError, addr 0x319cc04, size 0x5c, virtual true, abstract: false, final true
  inline void LogError(::System::Exception* exception);

  /// @brief Method LogError, addr 0x319cb78, size 0x8c, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogInfo, addr 0x319ccec, size 0x5c, virtual true, abstract: false, final true
  inline void LogInfo(::System::Exception* exception);

  /// @brief Method LogInfo, addr 0x319cc60, size 0x8c, virtual true, abstract: false, final true
  inline void LogInfo(::StringW message);

  /// @brief Method LogVerbose, addr 0x319cd48, size 0x4, virtual true, abstract: false, final true
  inline void LogVerbose(::StringW message);

  /// @brief Method LogWarning, addr 0x319cd4c, size 0x8c, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  static inline ::BeatSaber::Main::Leaderboards::GraphQLClientLogger* New_ctor();

  /// @brief Method OnRequestFailed, addr 0x319cddc, size 0x4, virtual true, abstract: false, final true
  inline void OnRequestFailed(::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method OnRequestSucceeded, addr 0x319cdd8, size 0x4, virtual true, abstract: false, final true
  inline void OnRequestSucceeded(::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method .ctor, addr 0x319cde0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* i___OculusStudios__GraphQL__ClientInterface__IGraphQLClientEvents() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClientLogger(GraphQLClientLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClientLogger(GraphQLClientLogger const&) = delete;

  /// @brief Field PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString PREFIX{ u"[GraphQLClient]" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20927 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::GraphQLClientLogger, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::GraphQLClientLogger);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::GraphQLClientLogger*, "BeatSaber.Main.Leaderboards", "GraphQLClientLogger");
