#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatSaberConnectedPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayer_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatSaberConnectedPlayer)
namespace GlobalNamespace {
struct BeatSaberPlayerIdentityPacketData;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class ConnectedPlayerManager_3;
}
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
struct MultiplayerActiveHand;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace GlobalNamespace {
class PlayerAvatarPacket;
}
namespace GlobalNamespace {
class PlayerControllerDataPacket;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberConnectedPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatSaberConnectedPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatSaberConnectedPlayer*, "", "BeatSaberConnectedPlayer");
// Dependencies BeatSaberPlayerIdentityPacketData, ConnectedPlayer`3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>, MultiplayerActiveHand, MultiplayerAvatarsData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberConnectedPlayer
class CORDL_TYPE BeatSaberConnectedPlayer
    : public ::GlobalNamespace::ConnectedPlayer_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData> {
public:
  // Declarations
  /// @brief Field _activeHand, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__activeHand, put = __cordl_internal_set__activeHand)) ::GlobalNamespace::MultiplayerActiveHand _activeHand;

  /// @brief Field _playerAvatars, offset 0x90, size 0x18
  __declspec(property(get = __cordl_internal_get__playerAvatars, put = __cordl_internal_set__playerAvatars)) ::GlobalNamespace::MultiplayerAvatarsData _playerAvatars;

  __declspec(property(get = get_activeHand)) ::GlobalNamespace::MultiplayerActiveHand activeHand;

  __declspec(property(get = get_multiplayerAvatarsData)) ::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberConnectedPlayer"
  constexpr operator ::GlobalNamespace::IBeatSaberConnectedPlayer*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Method GetGameSpecificPlayerIdentityData, addr 0x32a6e38, size 0x1c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatSaberPlayerIdentityPacketData GetGameSpecificPlayerIdentityData();

  /// @brief Method GetPlayerAvatarPacket, addr 0x32a6e6c, size 0x70, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAvatarPacket* GetPlayerAvatarPacket();

  /// @brief Method GetPlayerControllerDataPacket, addr 0x32a6edc, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerControllerDataPacket* GetPlayerControllerDataPacket();

  static inline ::GlobalNamespace::BeatSaberConnectedPlayer*
  New_ctor(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* manager,
           uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::BeatSaberConnectedPlayer* parent, ::StringW userId, ::StringW userName,
           bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random, ::StringW compatibilityVersion);

  /// @brief Method SetActiveHand, addr 0x32a6ff4, size 0x8, virtual false, abstract: false, final false
  inline void SetActiveHand(::GlobalNamespace::MultiplayerActiveHand newActiveHand);

  /// @brief Method SetMultiplayerAvatarsData, addr 0x32a6fc8, size 0x14, virtual false, abstract: false, final false
  inline void SetMultiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData playerAvatars);

  /// @brief Method UpdateAvatar, addr 0x32a6fa8, size 0x20, virtual false, abstract: false, final false
  inline void UpdateAvatar(::GlobalNamespace::PlayerAvatarPacket* packet);

  /// @brief Method UpdateIdentity, addr 0x32a6f8c, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateIdentity(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData);

  /// @brief Method UpdatePlayerControllerData, addr 0x32a6fdc, size 0x18, virtual false, abstract: false, final false
  inline void UpdatePlayerControllerData(::GlobalNamespace::PlayerControllerDataPacket* packet);

  constexpr ::GlobalNamespace::MultiplayerActiveHand const& __cordl_internal_get__activeHand() const;

  constexpr ::GlobalNamespace::MultiplayerActiveHand& __cordl_internal_get__activeHand();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__playerAvatars() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__playerAvatars();

  constexpr void __cordl_internal_set__activeHand(::GlobalNamespace::MultiplayerActiveHand value);

  constexpr void __cordl_internal_set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method .ctor, addr 0x32a6d60, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* manager,
                    uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::BeatSaberConnectedPlayer* parent, ::StringW userId,
                    ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random, ::StringW compatibilityVersion);

  /// @brief Method get_activeHand, addr 0x32a6d58, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerActiveHand get_activeHand();

  /// @brief Method get_multiplayerAvatarsData, addr 0x32a6d44, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Convert to "::GlobalNamespace::IBeatSaberConnectedPlayer"
  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* i___GlobalNamespace__IBeatSaberConnectedPlayer() noexcept;

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberConnectedPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberConnectedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberConnectedPlayer(BeatSaberConnectedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberConnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberConnectedPlayer(BeatSaberConnectedPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18836 };

  /// @brief Field _playerAvatars, offset: 0x90, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____playerAvatars;

  /// @brief Field _activeHand, offset: 0xa8, size: 0x1, def value: None
  ::GlobalNamespace::MultiplayerActiveHand ____activeHand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayer, ____playerAvatars) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayer, ____activeHand) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatSaberConnectedPlayer) == 0xb0, "Size mismatch!");

} // namespace GlobalNamespace
