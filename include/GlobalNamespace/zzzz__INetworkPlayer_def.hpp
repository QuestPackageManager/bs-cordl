#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkPlayer)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INetworkPlayer);
// Type: ::INetworkPlayer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12801))
// CS Name: ::INetworkPlayer*
class CORDL_TYPE INetworkPlayer {
public:
  // Declarations
  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_isMyPartyOwner)) bool isMyPartyOwner;

  __declspec(property(get = get_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_canJoin)) bool canJoin;

  __declspec(property(get = get_requiresPassword)) bool requiresPassword;

  __declspec(property(get = get_isWaitingOnJoin)) bool isWaitingOnJoin;

  __declspec(property(get = get_canInvite)) bool canInvite;

  __declspec(property(get = get_isWaitingOnInvite)) bool isWaitingOnInvite;

  __declspec(property(get = get_canKick)) bool canKick;

  __declspec(property(get = get_canLeave)) bool canLeave;

  __declspec(property(get = get_canBlock)) bool canBlock;

  __declspec(property(get = get_canUnblock)) bool canUnblock;

  /// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_userName();

  /// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isMe();

  /// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_currentPartySize();

  /// @brief Method get_isMyPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isMyPartyOwner();

  /// @brief Method get_connectedPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer();

  /// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_canJoin addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_canJoin();

  /// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Join();

  /// @brief Method get_requiresPassword addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_requiresPassword();

  /// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Join(::StringW password);

  /// @brief Method get_isWaitingOnJoin addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isWaitingOnJoin();

  /// @brief Method get_canInvite addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_canInvite();

  /// @brief Method Invite addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Invite();

  /// @brief Method get_isWaitingOnInvite addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isWaitingOnInvite();

  /// @brief Method get_canKick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_canKick();

  /// @brief Method Kick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Kick();

  /// @brief Method get_canLeave addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_canLeave();

  /// @brief Method Leave addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Leave();

  /// @brief Method get_canBlock addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_canBlock();

  /// @brief Method Block addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Block();

  /// @brief Method get_canUnblock addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_canUnblock();

  /// @brief Method Unblock addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Unblock();

  /// @brief Method SendJoinResponse addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendJoinResponse(bool accept);

  /// @brief Method SendInviteResponse addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendInviteResponse(bool accept);

  // Ctor Parameters [CppParam { name: "", ty: "INetworkPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetworkPlayer(INetworkPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetworkPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkPlayer(INetworkPlayer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INetworkPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkPlayer*, "", "INetworkPlayer");
