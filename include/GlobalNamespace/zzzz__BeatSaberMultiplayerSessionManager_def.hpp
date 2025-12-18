#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberMultiplayerSessionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_5_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
CORDL_MODULE_EXPORT(BeatSaberMultiplayerSessionManager)
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
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1_IMultiplayerSessionInitializer;
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
class BeatSaberMultiplayerSessionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberMultiplayerSessionManager);
// Dependencies BeatSaberPlayerIdentityPacketData, MultiplayerSessionManager`5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>,
// NetworkMessageType
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberMultiplayerSessionManager
class CORDL_TYPE BeatSaberMultiplayerSessionManager
    : public ::GlobalNamespace::MultiplayerSessionManager_5<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                            ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData> {
public:
  // Declarations
  /// @brief Field playerAvatarChangedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAvatarChangedEvent,
                      put = __cordl_internal_set_playerAvatarChangedEvent)) ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* playerAvatarChangedEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
  constexpr operator ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept;

  /// @brief Convert operator to
  /// "::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*,::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                                     ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept;

  /// @brief Method HandlePlayerAvatarChanged, addr 0x31d2d98, size 0x94, virtual false, abstract: false, final false
  inline void HandlePlayerAvatarChanged(::GlobalNamespace::IBeatSaberConnectedPlayer* player);

  /// @brief Method IMultiplayerSessionManager<BeatSaberConnectedPlayerManager,IBeatSaberConnectedPlayer,BeatSaberConnectedPlayer,BeatSaberPlayerIdentityPacketData>.StartSession, addr 0x31d2e78, size
  /// 0x64, virtual true, abstract: false, final true
  inline void IMultiplayerSessionManager_BeatSaberConnectedPlayerManager_IBeatSaberConnectedPlayer_BeatSaberConnectedPlayer_BeatSaberPlayerIdentityPacketData__StartSession(
      ::GlobalNamespace::BeatSaberConnectedPlayerManager* connectedPlayerManager,
      ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>* multiplayerSessionInitializer);

  static inline ::GlobalNamespace::BeatSaberMultiplayerSessionManager* New_ctor();

  /// @brief Method RegisterGameSpecificEventHandlers, addr 0x31d2c80, size 0x8c, virtual true, abstract: false, final false
  inline void RegisterGameSpecificEventHandlers();

  /// @brief Method UnregisterGameSpecificEventHandlers, addr 0x31d2d0c, size 0x8c, virtual true, abstract: false, final false
  inline void UnregisterGameSpecificEventHandlers();

  constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& __cordl_internal_get_playerAvatarChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& __cordl_internal_get_playerAvatarChangedEvent();

  constexpr void __cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Method .ctor, addr 0x31d2e2c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerAvatarChangedEvent, addr 0x31d2b00, size 0xc0, virtual true, abstract: false, final true
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Convert to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* i___GlobalNamespace__IBeatSaberMultiplayerSessionManager() noexcept;

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

  /// @brief Method remove_playerAvatarChangedEvent, addr 0x31d2bc0, size 0xc0, virtual true, abstract: false, final true
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberMultiplayerSessionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberMultiplayerSessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberMultiplayerSessionManager(BeatSaberMultiplayerSessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberMultiplayerSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberMultiplayerSessionManager(BeatSaberMultiplayerSessionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18808 };

  /// @brief Field playerAvatarChangedEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* ___playerAvatarChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberMultiplayerSessionManager, ___playerAvatarChangedEvent) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberMultiplayerSessionManager, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberMultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberMultiplayerSessionManager*, "", "BeatSaberMultiplayerSessionManager");
