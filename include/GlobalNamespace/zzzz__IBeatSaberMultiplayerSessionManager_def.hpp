#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatSaberMultiplayerSessionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatSaberMultiplayerSessionManager)
namespace GlobalNamespace {
class BeatSaberConnectedPlayerManager;
}
namespace GlobalNamespace {
class BeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
struct BeatSaberPlayerIdentityPacketData;
}
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1;
}
namespace GlobalNamespace {
template <typename TConnectedPlayerManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class IMultiplayerSessionManager_4;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayer> class IMultiplayerSessionMessageProcessor_2;
}
namespace GlobalNamespace {
struct NetworkMessageType;
}
namespace System {
template <typename T> class Action_1;
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
  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept;

  /// @brief Convert operator to
  /// "::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*,::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                                     ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept;

  /// @brief Method add_playerAvatarChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*
  i___GlobalNamespace__IMultiplayerSessionManager_1___GlobalNamespace__IBeatSaberConnectedPlayer__() noexcept;

  /// @brief Convert to
  /// "::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*,::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                            ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
  i___GlobalNamespace__IMultiplayerSessionManager_4___GlobalNamespace__BeatSaberConnectedPlayerManager____GlobalNamespace__IBeatSaberConnectedPlayer____GlobalNamespace__BeatSaberConnectedPlayer____GlobalNamespace__BeatSaberPlayerIdentityPacketData_() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*
  i___GlobalNamespace__IMultiplayerSessionMessageProcessor_2___GlobalNamespace__NetworkMessageType___GlobalNamespace__IBeatSaberConnectedPlayer__() noexcept;

  /// @brief Method remove_playerAvatarChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatSaberMultiplayerSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatSaberMultiplayerSessionManager(IBeatSaberMultiplayerSessionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatSaberMultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, "", "IBeatSaberMultiplayerSessionManager");
