#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IConnectedPlayer)
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IConnectedPlayer);
// Type: ::IConnectedPlayer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12778))
// CS Name: ::IConnectedPlayer*
class CORDL_TYPE IConnectedPlayer {
public:
  // Declarations
  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_currentLatency)) int64_t currentLatency;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_isKicked)) bool isKicked;

  __declspec(property(get = get_multiplayerAvatarsData))::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  /// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isMe();

  /// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_userName();

  /// @brief Method get_hasValidLatency addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_hasValidLatency();

  /// @brief Method get_currentLatency addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int64_t get_currentLatency();

  /// @brief Method get_isConnected addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isConnected();

  /// @brief Method get_disconnectedReason addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_isConnectionOwner addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_offsetSyncTime addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_sortIndex addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_sortIndex();

  /// @brief Method get_isKicked addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isKicked();

  /// @brief Method get_multiplayerAvatarsData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Method HasState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool HasState(::StringW state);

  // Ctor Parameters [CppParam { name: "", ty: "IConnectedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConnectedPlayer(IConnectedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnectedPlayer(IConnectedPlayer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IConnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectedPlayer*, "", "IConnectedPlayer");
