#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatSaberMultiplayerSessionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatSaberMultiplayerSessionManager)
namespace GlobalNamespace {
template <typename TSessionType> class IMultiplayerSessionManager_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename TMessageType> class IMultiplayerSessionMessageProcessor_1;
}
namespace GlobalNamespace {
struct MultiplayerSessionType;
}
namespace GlobalNamespace {
struct NetworkMessageType;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatSaberMultiplayerSessionManager);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatSaberMultiplayerSessionManager
class CORDL_TYPE IBeatSaberMultiplayerSessionManager {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager* i___GlobalNamespace__IMultiplayerSessionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*
  i___GlobalNamespace__IMultiplayerSessionManager_1___GlobalNamespace__MultiplayerSessionType_() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>"
  constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*
  i___GlobalNamespace__IMultiplayerSessionMessageProcessor_1___GlobalNamespace__NetworkMessageType_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatSaberMultiplayerSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatSaberMultiplayerSessionManager(IBeatSaberMultiplayerSessionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18961 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatSaberMultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, "", "IBeatSaberMultiplayerSessionManager");
