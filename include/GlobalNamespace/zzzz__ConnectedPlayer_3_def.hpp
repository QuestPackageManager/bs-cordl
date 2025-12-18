#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayer_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectedPlayer_3)
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class ConnectedPlayerManager_3;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class EncryptionUtility_IEncryptionState;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class LongRollingAverage;
}
namespace GlobalNamespace {
class PlayerConnectedPacket;
}
namespace GlobalNamespace {
template <typename TGameSpecificIdentityData> class PlayerIdentityPacket_1;
}
namespace GlobalNamespace {
class PlayerSortOrderPacket;
}
namespace GlobalNamespace {
struct PlayerStateHash;
}
namespace GlobalNamespace {
class PlayerStatePacket;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class ConnectedPlayer_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ConnectedPlayer_3);
// Dependencies DisconnectedReason, PlayerStateHash, System.Object
namespace GlobalNamespace {
// cpp template
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: ConnectedPlayer`3<TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
class CORDL_TYPE ConnectedPlayer_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _compatibilityVersion, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__compatibilityVersion, put = __cordl_internal_set__compatibilityVersion)) ::StringW _compatibilityVersion;

  /// @brief Field _connection, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__connection, put = __cordl_internal_set__connection)) ::GlobalNamespace::IConnection* _connection;

  /// @brief Field _connectionId, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__connectionId, put = __cordl_internal_set__connectionId)) uint8_t _connectionId;

  /// @brief Field _disconnectedReason, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__disconnectedReason, put = __cordl_internal_set__disconnectedReason)) ::GlobalNamespace::DisconnectedReason _disconnectedReason;

  /// @brief Field _encryptionState, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionState, put = __cordl_internal_set__encryptionState)) ::GlobalNamespace::EncryptionUtility_IEncryptionState* _encryptionState;

  /// @brief Field _isConnected, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnected, put = __cordl_internal_set__isConnected)) bool _isConnected;

  /// @brief Field _isConnectionOwner, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner, put = __cordl_internal_set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _isKicked, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isKicked, put = __cordl_internal_set__isKicked)) bool _isKicked;

  /// @brief Field _isMe, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isMe, put = __cordl_internal_set__isMe)) bool _isMe;

  /// @brief Field _latency, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__latency, put = __cordl_internal_set__latency)) ::GlobalNamespace::LongRollingAverage* _latency;

  /// @brief Field _manager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__manager,
                      put = __cordl_internal_set__manager)) ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* _manager;

  /// @brief Field _parent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) TConnectedPlayerImpl _parent;

  /// @brief Field _playerState, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__playerState, put = __cordl_internal_set__playerState)) ::GlobalNamespace::PlayerStateHash _playerState;

  /// @brief Field _publicEncryptionKey, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__publicEncryptionKey, put = __cordl_internal_set__publicEncryptionKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _publicEncryptionKey;

  /// @brief Field _random, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _random;

  /// @brief Field _remoteConnectionId, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__remoteConnectionId, put = __cordl_internal_set__remoteConnectionId)) uint8_t _remoteConnectionId;

  /// @brief Field _sortIndex, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__sortIndex, put = __cordl_internal_set__sortIndex)) int32_t _sortIndex;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName)) ::StringW _userName;

  __declspec(property(get = get_compatibilityVersion)) ::StringW compatibilityVersion;

  __declspec(property(get = get_connection)) ::GlobalNamespace::IConnection* connection;

  __declspec(property(get = get_connectionId)) uint8_t connectionId;

  __declspec(property(get = get_currentLatency)) int64_t currentLatency;

  __declspec(property(get = get_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_encryptionState)) ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDirectConnection)) bool isDirectConnection;

  __declspec(property(get = get_isKicked)) bool isKicked;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_publicEncryptionKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey;

  __declspec(property(get = get_random)) ::ArrayW<uint8_t, ::Array<uint8_t>*> random;

  __declspec(property(get = get_remoteConnectionId)) uint8_t remoteConnectionId;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method GetGameSpecificPlayerIdentityData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TGameSpecificIdentityData GetGameSpecificPlayerIdentityData();

  /// @brief Method GetPlayerConnectedPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerConnectedPacket* GetPlayerConnectedPacket();

  /// @brief Method GetPlayerIdentityPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* GetPlayerIdentityPacket();

  /// @brief Method GetPlayerSortOrderPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSortOrderPacket* GetPlayerSortOrderPacket();

  /// @brief Method GetPlayerStatePacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerStatePacket* GetPlayerStatePacket();

  /// @brief Method HasState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool HasState(::StringW state);

  static inline ::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
  New_ctor(::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, uint8_t remoteConnectionId,
           ::GlobalNamespace::IConnection* connection, TConnectedPlayerImpl parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
           ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::StringW compatibilityVersion);

  /// @brief Method SetEncryptionState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetEncryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState);

  /// @brief Method SetKicked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetKicked();

  /// @brief Method SetPlayerState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetPlayerState(::GlobalNamespace::PlayerStateHash playerState);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateIdentity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateIdentity(::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* packet);

  /// @brief Method UpdateLatency, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateLatency(int64_t latency);

  /// @brief Method UpdateSortIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool UpdateSortIndex(int32_t index);

  /// @brief Method UpdateState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateState(::GlobalNamespace::PlayerStatePacket* packet);

  constexpr ::StringW const& __cordl_internal_get__compatibilityVersion() const;

  constexpr ::StringW& __cordl_internal_get__compatibilityVersion();

  constexpr ::GlobalNamespace::IConnection* const& __cordl_internal_get__connection() const;

  constexpr ::GlobalNamespace::IConnection*& __cordl_internal_get__connection();

  constexpr uint8_t const& __cordl_internal_get__connectionId() const;

  constexpr uint8_t& __cordl_internal_get__connectionId();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get__disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get__disconnectedReason();

  constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState* const& __cordl_internal_get__encryptionState() const;

  constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState*& __cordl_internal_get__encryptionState();

  constexpr bool const& __cordl_internal_get__isConnected() const;

  constexpr bool& __cordl_internal_get__isConnected();

  constexpr bool const& __cordl_internal_get__isConnectionOwner() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner();

  constexpr bool const& __cordl_internal_get__isKicked() const;

  constexpr bool& __cordl_internal_get__isKicked();

  constexpr bool const& __cordl_internal_get__isMe() const;

  constexpr bool& __cordl_internal_get__isMe();

  constexpr ::GlobalNamespace::LongRollingAverage* const& __cordl_internal_get__latency() const;

  constexpr ::GlobalNamespace::LongRollingAverage*& __cordl_internal_get__latency();

  constexpr ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* const& __cordl_internal_get__manager() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*& __cordl_internal_get__manager();

  constexpr TConnectedPlayerImpl const& __cordl_internal_get__parent() const;

  constexpr TConnectedPlayerImpl& __cordl_internal_get__parent();

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get__playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get__playerState();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__publicEncryptionKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__publicEncryptionKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__random() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__random();

  constexpr uint8_t const& __cordl_internal_get__remoteConnectionId() const;

  constexpr uint8_t& __cordl_internal_get__remoteConnectionId();

  constexpr int32_t const& __cordl_internal_get__sortIndex() const;

  constexpr int32_t& __cordl_internal_get__sortIndex();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__compatibilityVersion(::StringW value);

  constexpr void __cordl_internal_set__connection(::GlobalNamespace::IConnection* value);

  constexpr void __cordl_internal_set__connectionId(uint8_t value);

  constexpr void __cordl_internal_set__disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  constexpr void __cordl_internal_set__encryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* value);

  constexpr void __cordl_internal_set__isConnected(bool value);

  constexpr void __cordl_internal_set__isConnectionOwner(bool value);

  constexpr void __cordl_internal_set__isKicked(bool value);

  constexpr void __cordl_internal_set__isMe(bool value);

  constexpr void __cordl_internal_set__latency(::GlobalNamespace::LongRollingAverage* value);

  constexpr void __cordl_internal_set__manager(::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* value);

  constexpr void __cordl_internal_set__parent(TConnectedPlayerImpl value);

  constexpr void __cordl_internal_set__playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr void __cordl_internal_set__publicEncryptionKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__random(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__remoteConnectionId(uint8_t value);

  constexpr void __cordl_internal_set__sortIndex(int32_t value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                    ::GlobalNamespace::IConnection* connection, TConnectedPlayerImpl parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::StringW compatibilityVersion);

  /// @brief Method get_compatibilityVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_compatibilityVersion();

  /// @brief Method get_connection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnection* get_connection();

  /// @brief Method get_connectionId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint8_t get_connectionId();

  /// @brief Method get_currentLatency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int64_t get_currentLatency();

  /// @brief Method get_disconnectedReason, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_encryptionState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* get_encryptionState();

  /// @brief Method get_hasValidLatency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_hasValidLatency();

  /// @brief Method get_isConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDirectConnection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isDirectConnection();

  /// @brief Method get_isKicked, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isKicked();

  /// @brief Method get_isMe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isMe();

  /// @brief Method get_offsetSyncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_publicEncryptionKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicEncryptionKey();

  /// @brief Method get_random, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_random();

  /// @brief Method get_remoteConnectionId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint8_t get_remoteConnectionId();

  /// @brief Method get_sortIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_sortIndex();

  /// @brief Method get_userId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayer_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayer_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayer_3(ConnectedPlayer_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayer_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayer_3(ConnectedPlayer_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18087 };

  /// @brief Field kFixedSyncTimeOffset offset 0xffffffff size 0x8
  static constexpr int64_t kFixedSyncTimeOffset{ static_cast<int64_t>(0x21) };

  /// @brief Field _userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _isMe, offset: 0x20, size: 0x1, def value: None
  bool ____isMe;

  /// @brief Field _isConnectionOwner, offset: 0x21, size: 0x1, def value: None
  bool ____isConnectionOwner;

  /// @brief Field _compatibilityVersion, offset: 0x28, size: 0x8, def value: None
  ::StringW ____compatibilityVersion;

  /// @brief Field _manager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* ____manager;

  /// @brief Field _connection, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IConnection* ____connection;

  /// @brief Field _parent, offset: 0x40, size: 0x8, def value: None
  TConnectedPlayerImpl ____parent;

  /// @brief Field _connectionId, offset: 0x48, size: 0x1, def value: None
  uint8_t ____connectionId;

  /// @brief Field _remoteConnectionId, offset: 0x49, size: 0x1, def value: None
  uint8_t ____remoteConnectionId;

  /// @brief Field _sortIndex, offset: 0x4c, size: 0x4, def value: None
  int32_t ____sortIndex;

  /// @brief Field _isConnected, offset: 0x50, size: 0x1, def value: None
  bool ____isConnected;

  /// @brief Field _disconnectedReason, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ____disconnectedReason;

  /// @brief Field _isKicked, offset: 0x58, size: 0x1, def value: None
  bool ____isKicked;

  /// @brief Field _playerState, offset: 0x60, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ____playerState;

  /// @brief Field _publicEncryptionKey, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicEncryptionKey;

  /// @brief Field _random, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____random;

  /// @brief Field _encryptionState, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::EncryptionUtility_IEncryptionState* ____encryptionState;

  /// @brief Field _latency, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::LongRollingAverage* ____latency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ConnectedPlayer_3, "", "ConnectedPlayer`3");
