#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPlayerModel_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPlayerModel_1)
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_NetworkPlayer;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_NetworkServer;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_StartClientPartyConfig;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1__GetOtherPlayers_d__58;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1__GetPartyPlayers_d__57;
}
namespace GlobalNamespace {
template <typename T> struct NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1___c__DisplayClass59_0;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1___c;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_NetworkPlayer;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_NetworkServer;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1_StartClientPartyConfig;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1__GetOtherPlayers_d__58;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1__GetPartyPlayers_d__57;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1___c;
}
namespace GlobalNamespace {
template <typename T> class NetworkPlayerModel_1___c__DisplayClass59_0;
}
namespace GlobalNamespace {
template <typename T> struct NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1_NetworkServer);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__58);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__57);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1___c);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass59_0);
MARK_GEN_VAL_T(::GlobalNamespace::NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56);
// Dependencies INetworkPlayer, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/NetworkPlayer<T>
class CORDL_TYPE NetworkPlayerModel_1_NetworkPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _playerModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerModel, put = __cordl_internal_set__playerModel)) ::UnityW<T> _playerModel;

  __declspec(property(get = get_canBlock)) bool canBlock;

  __declspec(property(get = get_canInvite)) bool canInvite;

  __declspec(property(get = get_canJoin)) bool canJoin;

  __declspec(property(get = get_canKick)) bool canKick;

  __declspec(property(get = get_canLeave)) bool canLeave;

  __declspec(property(get = get_canUnblock)) bool canUnblock;

  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_isMyPartyOwner)) bool isMyPartyOwner;

  __declspec(property(get = get_isWaitingOnInvite)) bool isWaitingOnInvite;

  __declspec(property(get = get_isWaitingOnJoin)) bool isWaitingOnJoin;

  __declspec(property(get = get_requiresPassword)) bool requiresPassword;

  __declspec(property(get = get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
  constexpr operator ::GlobalNamespace::INetworkPlayer*() noexcept;

  /// @brief Method Block, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Block();

  /// @brief Method Invite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Invite();

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Join();

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Join(::StringW password);

  /// @brief Method Kick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Kick();

  /// @brief Method Leave, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Leave();

  static inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method SendInviteResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SendInviteResponse(bool accept);

  /// @brief Method SendJoinResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SendJoinResponse(bool accept);

  /// @brief Method Unblock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unblock();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::UnityW<T> const& __cordl_internal_get__playerModel() const;

  constexpr ::UnityW<T>& __cordl_internal_get__playerModel();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__playerModel(::UnityW<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method get_canBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canBlock();

  /// @brief Method get_canInvite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canInvite();

  /// @brief Method get_canJoin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canJoin();

  /// @brief Method get_canKick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canKick();

  /// @brief Method get_canLeave, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canLeave();

  /// @brief Method get_canUnblock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canUnblock();

  /// @brief Method get_configuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer();

  /// @brief Method get_currentPartySize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_currentPartySize();

  /// @brief Method get_isMe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isMe();

  /// @brief Method get_isMyPartyOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isMyPartyOwner();

  /// @brief Method get_isWaitingOnInvite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isWaitingOnInvite();

  /// @brief Method get_isWaitingOnJoin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isWaitingOnJoin();

  /// @brief Method get_requiresPassword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_requiresPassword();

  /// @brief Method get_selectionMask, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_sortIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_sortIndex();

  /// @brief Method get_userId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayer"
  constexpr ::GlobalNamespace::INetworkPlayer* i___GlobalNamespace__INetworkPlayer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1_NetworkPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_NetworkPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1_NetworkPlayer(NetworkPlayerModel_1_NetworkPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_NetworkPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1_NetworkPlayer(NetworkPlayerModel_1_NetworkPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17357 };

  /// @brief Field _playerModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<T> ____playerModel;

  /// @brief Field _connectedPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies BaseNetworkPlayerModel::PartyConfig, INetworkPlayerModelPartyConfig`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/JoinMatchmakingPartyConfig<T>
class CORDL_TYPE NetworkPlayerModel_1_JoinMatchmakingPartyConfig : public ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig {
public:
  // Declarations
  /// @brief Field code, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_code, put = __cordl_internal_set_code)) ::StringW code;

  /// @brief Field secret, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret)) ::StringW secret;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*() noexcept;

  static inline ::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_code() const;

  constexpr ::StringW& __cordl_internal_get_code();

  constexpr ::StringW const& __cordl_internal_get_secret() const;

  constexpr ::StringW& __cordl_internal_get_secret();

  constexpr void __cordl_internal_set_code(::StringW value);

  constexpr void __cordl_internal_set_secret(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
  constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>* i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW_T__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1_JoinMatchmakingPartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_JoinMatchmakingPartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1_JoinMatchmakingPartyConfig(NetworkPlayerModel_1_JoinMatchmakingPartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_JoinMatchmakingPartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1_JoinMatchmakingPartyConfig(NetworkPlayerModel_1_JoinMatchmakingPartyConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17358 };

  /// @brief Field secret, offset: 0x58, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field code, offset: 0x60, size: 0x8, def value: None
  ::StringW ___code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies BaseNetworkPlayerModel::PartyConfig, INetworkPlayerModelPartyConfig`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/StartClientPartyConfig<T>
class CORDL_TYPE NetworkPlayerModel_1_StartClientPartyConfig : public ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*() noexcept;

  static inline ::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
  constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>* i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW_T__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1_StartClientPartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_StartClientPartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1_StartClientPartyConfig(NetworkPlayerModel_1_StartClientPartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_StartClientPartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1_StartClientPartyConfig(NetworkPlayerModel_1_StartClientPartyConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, INetworkPlayer, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/NetworkServer<T>
class CORDL_TYPE NetworkPlayerModel_1_NetworkServer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = INetworkPlayer_get_userId)) ::StringW INetworkPlayer_userId;

  __declspec(property(get = INetworkPlayer_get_userName)) ::StringW INetworkPlayer_userName;

  /// @brief Field _code, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code)) ::StringW _code;

  /// @brief Field _configuration, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration)) ::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _currentPlayerCount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__currentPlayerCount, put = __cordl_internal_set__currentPlayerCount)) int32_t _currentPlayerCount;

  /// @brief Field _lastUpdateTime, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__lastUpdateTime, put = __cordl_internal_set__lastUpdateTime)) float_t _lastUpdateTime;

  /// @brief Field _playerModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerModel, put = __cordl_internal_set__playerModel)) ::UnityW<T> _playerModel;

  /// @brief Field _selectionMask, offset 0x20, size 0x28
  __declspec(property(get = __cordl_internal_get__selectionMask, put = __cordl_internal_set__selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask;

  __declspec(property(get = get_canBlock)) bool canBlock;

  __declspec(property(get = get_canInvite)) bool canInvite;

  __declspec(property(get = get_canJoin)) bool canJoin;

  __declspec(property(get = get_canKick)) bool canKick;

  __declspec(property(get = get_canLeave)) bool canLeave;

  __declspec(property(get = get_canUnblock)) bool canUnblock;

  __declspec(property(get = get_code)) ::StringW code;

  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_hasTimedOut)) bool hasTimedOut;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_isMyPartyOwner)) bool isMyPartyOwner;

  __declspec(property(get = get_isWaitingOnInvite)) bool isWaitingOnInvite;

  __declspec(property(get = get_isWaitingOnJoin)) bool isWaitingOnJoin;

  __declspec(property(get = get_requiresPassword)) bool requiresPassword;

  __declspec(property(get = get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_serverName)) ::StringW serverName;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
  constexpr operator ::GlobalNamespace::INetworkPlayer*() noexcept;

  /// @brief Method Block, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Block();

  /// @brief Method INetworkPlayer.get_userId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW INetworkPlayer_get_userId();

  /// @brief Method INetworkPlayer.get_userName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW INetworkPlayer_get_userName();

  /// @brief Method Invite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Invite();

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Join();

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Join(::StringW password);

  /// @brief Method Kick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Kick();

  /// @brief Method Leave, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Leave();

  static inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>* New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::StringW code,
                                                                                   ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                   ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method SendInviteResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SendInviteResponse(bool accept);

  /// @brief Method SendJoinResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SendJoinResponse(bool accept);

  /// @brief Method Unblock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unblock();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Update(int32_t currentPlayerCount);

  constexpr ::StringW const& __cordl_internal_get__code() const;

  constexpr ::StringW& __cordl_internal_get__code();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration();

  constexpr int32_t const& __cordl_internal_get__currentPlayerCount() const;

  constexpr int32_t& __cordl_internal_get__currentPlayerCount();

  constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

  constexpr float_t& __cordl_internal_get__lastUpdateTime();

  constexpr ::UnityW<T> const& __cordl_internal_get__playerModel() const;

  constexpr ::UnityW<T>& __cordl_internal_get__playerModel();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get__selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get__selectionMask();

  constexpr void __cordl_internal_set__code(::StringW value);

  constexpr void __cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set__currentPlayerCount(int32_t value);

  constexpr void __cordl_internal_set__lastUpdateTime(float_t value);

  constexpr void __cordl_internal_set__playerModel(::UnityW<T> value);

  constexpr void __cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                    ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method get_canBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canBlock();

  /// @brief Method get_canInvite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canInvite();

  /// @brief Method get_canJoin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canJoin();

  /// @brief Method get_canKick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canKick();

  /// @brief Method get_canLeave, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canLeave();

  /// @brief Method get_canUnblock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_canUnblock();

  /// @brief Method get_code, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_code();

  /// @brief Method get_configuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer();

  /// @brief Method get_currentPartySize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_currentPartySize();

  /// @brief Method get_hasTimedOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_hasTimedOut();

  /// @brief Method get_isMe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isMe();

  /// @brief Method get_isMyPartyOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isMyPartyOwner();

  /// @brief Method get_isWaitingOnInvite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isWaitingOnInvite();

  /// @brief Method get_isWaitingOnJoin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isWaitingOnJoin();

  /// @brief Method get_requiresPassword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_requiresPassword();

  /// @brief Method get_selectionMask, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_serverName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_serverName();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayer"
  constexpr ::GlobalNamespace::INetworkPlayer* i___GlobalNamespace__INetworkPlayer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1_NetworkServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_NetworkServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1_NetworkServer(NetworkPlayerModel_1_NetworkServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1_NetworkServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1_NetworkServer(NetworkPlayerModel_1_NetworkServer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17360 };

  /// @brief Field _playerModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<T> ____playerModel;

  /// @brief Field _code, offset: 0x18, size: 0x8, def value: None
  ::StringW ____code;

  /// @brief Field _selectionMask, offset: 0x20, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask;

  /// @brief Field _configuration, offset: 0x48, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field _currentPlayerCount, offset: 0x60, size: 0x4, def value: None
  int32_t ____currentPlayerCount;

  /// @brief Field _lastUpdateTime, offset: 0x64, size: 0x4, def value: None
  float_t ____lastUpdateTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/<>c<T>
class CORDL_TYPE NetworkPlayerModel_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::NetworkPlayerModel_1___c<T>* __9;

  /// @brief Field <>9__71_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__71_0, put = setStaticF___9__71_0)) ::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* __9__71_0;

  static inline ::GlobalNamespace::NetworkPlayerModel_1___c<T>* New_ctor();

  /// @brief Method <PlayerOrderChanged>b__71_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _PlayerOrderChanged_b__71_0(::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* a, ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* b);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::NetworkPlayerModel_1___c<T>* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* getStaticF___9__71_0();

  static inline void setStaticF___9(::GlobalNamespace::NetworkPlayerModel_1___c<T>* value);

  static inline void setStaticF___9__71_0(::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1___c(NetworkPlayerModel_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1___c(NetworkPlayerModel_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17361 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/<>c__DisplayClass59_0<T>
class CORDL_TYPE NetworkPlayerModel_1___c__DisplayClass59_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<T> __4__this;

  /// @brief Field clearCurrentList, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_clearCurrentList, put = __cordl_internal_set_clearCurrentList)) bool clearCurrentList;

  /// @brief Field localConfiguration, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_localConfiguration, put = __cordl_internal_set_localConfiguration)) ::GlobalNamespace::GameplayServerConfiguration localConfiguration;

  /// @brief Field localSelectionMask, offset 0x20, size 0x28
  __declspec(property(get = __cordl_internal_get_localSelectionMask, put = __cordl_internal_set_localSelectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask;

  static inline ::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass59_0<T>* New_ctor();

  /// @brief Method <Refresh>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Refresh_b__0(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>* servers);

  /// @brief Method <Refresh>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Refresh_b__1(::GlobalNamespace::ConnectionFailedReason reason);

  constexpr ::UnityW<T> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<T>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_clearCurrentList() const;

  constexpr bool& __cordl_internal_get_clearCurrentList();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get_localConfiguration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get_localConfiguration();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get_localSelectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get_localSelectionMask();

  constexpr void __cordl_internal_set___4__this(::UnityW<T> value);

  constexpr void __cordl_internal_set_clearCurrentList(bool value);

  constexpr void __cordl_internal_set_localConfiguration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set_localSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1___c__DisplayClass59_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1___c__DisplayClass59_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1___c__DisplayClass59_0(NetworkPlayerModel_1___c__DisplayClass59_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1___c__DisplayClass59_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1___c__DisplayClass59_0(NetworkPlayerModel_1___c__DisplayClass59_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17362 };

  /// @brief Field clearCurrentList, offset: 0x10, size: 0x1, def value: None
  bool ___clearCurrentList;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<T> _____4__this;

  /// @brief Field localSelectionMask, offset: 0x20, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___localSelectionMask;

  /// @brief Field localConfiguration, offset: 0x48, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___localConfiguration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerable,
// System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/<GetOtherPlayers>d__58<T>
class CORDL_TYPE NetworkPlayerModel_1__GetOtherPlayers_d__58 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)) ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<T> __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>
      __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__58<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::INetworkPlayer* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get___2__current();

  constexpr ::UnityW<T> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<T>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<T> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1__GetOtherPlayers_d__58();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1__GetOtherPlayers_d__58", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1__GetOtherPlayers_d__58(NetworkPlayerModel_1__GetOtherPlayers_d__58&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1__GetOtherPlayers_d__58", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1__GetOtherPlayers_d__58(NetworkPlayerModel_1__GetOtherPlayers_d__58 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17363 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<T> _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1/<GetPartyPlayers>d__57<T>
class CORDL_TYPE NetworkPlayerModel_1__GetPartyPlayers_d__57 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)) ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<T> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__57<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::INetworkPlayer* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get___2__current();

  constexpr ::UnityW<T> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<T>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<T> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1__GetPartyPlayers_d__57();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1__GetPartyPlayers_d__57", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1__GetPartyPlayers_d__57(NetworkPlayerModel_1__GetPartyPlayers_d__57&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1__GetPartyPlayers_d__57", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1__GetPartyPlayers_d__57(NetworkPlayerModel_1__GetPartyPlayers_d__57 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17364 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<T> _____4__this;

  /// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: NetworkPlayerModel`1/<InitAuthenticationTokenProvider>d__56<T>
struct CORDL_TYPE NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None
  // }]
  constexpr NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56(int32_t __1__state,
                                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*> __t__builder,
                                                                        ::UnityW<T> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<T> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies BaseNetworkPlayerModel, INetworkPlayerModel
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: NetworkPlayerModel`1<T>
class CORDL_TYPE NetworkPlayerModel_1 : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
  // Declarations
  using JoinMatchmakingPartyConfig = ::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>;

  using NetworkPlayer = ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>;

  using NetworkServer = ::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>;

  using StartClientPartyConfig = ::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>;

  using _GetOtherPlayers_d__58 = ::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__58<T>;

  using _GetPartyPlayers_d__57 = ::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__57<T>;

  using _InitAuthenticationTokenProvider_d__56 = ::GlobalNamespace::NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56<T>;

  using __c = ::GlobalNamespace::NetworkPlayerModel_1___c<T>;

  using __c__DisplayClass59_0 = ::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass59_0<T>;

  /// @brief Field _authenticationTokenProviderTask, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__authenticationTokenProviderTask,
      put = __cordl_internal_set__authenticationTokenProviderTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* _authenticationTokenProviderTask;

  /// @brief Field _currentPlayerCount, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__currentPlayerCount, put = __cordl_internal_set__currentPlayerCount)) int32_t _currentPlayerCount;

  /// @brief Field _filterChanged, offset 0x105, size 0x1
  __declspec(property(get = __cordl_internal_get__filterChanged, put = __cordl_internal_set__filterChanged)) bool _filterChanged;

  /// @brief Field _isRefreshing, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get__isRefreshing, put = __cordl_internal_set__isRefreshing)) bool _isRefreshing;

  /// @brief Field _lastServerRefresh, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__lastServerRefresh, put = __cordl_internal_set__lastServerRefresh)) float_t _lastServerRefresh;

  /// @brief Field _localPlayer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayer, put = __cordl_internal_set__localPlayer)) ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* _localPlayer;

  /// @brief Field _masterServerUnreachable, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get__masterServerUnreachable, put = __cordl_internal_set__masterServerUnreachable)) bool _masterServerUnreachable;

  /// @brief Field _networkingFailed, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__networkingFailed, put = __cordl_internal_set__networkingFailed)) bool _networkingFailed;

  /// @brief Field _partyPlayers, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__partyPlayers,
                      put = __cordl_internal_set__partyPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* _partyPlayers;

  /// @brief Field _platformUserModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__platformUserModel, put = __cordl_internal_set__platformUserModel)) ::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _publicServers, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__publicServers,
                      put = __cordl_internal_set__publicServers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>* _publicServers;

  __declspec(property(get = get_authenticationTokenProviderTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* authenticationTokenProviderTask;

  __declspec(property(get = get_code)) ::StringW code;

  __declspec(property(get = get_connectionManager)) T connectionManager;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_hasNetworkingFailed)) bool hasNetworkingFailed;

  /// @brief Field inviteRequestedEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_inviteRequestedEvent, put = __cordl_internal_set_inviteRequestedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;

  /// @brief Field joinRequestedEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_joinRequestedEvent, put = __cordl_internal_set_joinRequestedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  /// @brief Field partyChangedEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_partyChangedEvent, put = __cordl_internal_set_partyChangedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;

  __declspec(property(get = get_partyOwnerId)) ::StringW partyOwnerId;

  /// @brief Field partyRefreshingEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_partyRefreshingEvent, put = __cordl_internal_set_partyRefreshingEvent)) ::System::Action* partyRefreshingEvent;

  /// @brief Field partySizeChangedEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_partySizeChangedEvent, put = __cordl_internal_set_partySizeChangedEvent)) ::System::Action_1<int32_t>* partySizeChangedEvent;

  __declspec(property(get = get_publicServers)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* publicServers;

  __declspec(property(get = get_secret)) ::StringW secret;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  /// @brief Method Connected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Connected();

  /// @brief Method ConnectionFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method CreatePartyConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T2> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>* config);

  /// @brief Method Disconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Disconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method GetConnectToServerParams, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectionInitParams_1<T>* GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                 ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code);

  /// @brief Method GetOtherPlayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();

  /// @brief Method GetPartyPlayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();

  /// @brief Method GetPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* GetPlayer(::StringW userId);

  /// @brief Method GetServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>* GetServer(::StringW code);

  /// @brief Method GetStartClientParams, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectionInitParams_1<T>* GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method HandleInviteRequested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandleJoinRequested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandlePartyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel);

  /// @brief Method HandlePlatformUserInfoDidChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlatformUserInfoDidChange(::GlobalNamespace::UserInfo* newInfo);

  /// @brief Method HandlePlayersChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayersChanged();

  /// @brief Method InitAuthenticationTokenProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* InitAuthenticationTokenProvider();

  static inline ::GlobalNamespace::NetworkPlayerModel_1<T>* New_ctor();

  /// @brief Method PlayerConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PlayerDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PlayerOrderChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method PlayerStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PlayerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method RefreshPublicServers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                   ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                   ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure);

  /// @brief Method ResetMasterServerReachability, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetMasterServerReachability();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* const& __cordl_internal_get__authenticationTokenProviderTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& __cordl_internal_get__authenticationTokenProviderTask();

  constexpr int32_t const& __cordl_internal_get__currentPlayerCount() const;

  constexpr int32_t& __cordl_internal_get__currentPlayerCount();

  constexpr bool const& __cordl_internal_get__filterChanged() const;

  constexpr bool& __cordl_internal_get__filterChanged();

  constexpr bool const& __cordl_internal_get__isRefreshing() const;

  constexpr bool& __cordl_internal_get__isRefreshing();

  constexpr float_t const& __cordl_internal_get__lastServerRefresh() const;

  constexpr float_t& __cordl_internal_get__lastServerRefresh();

  constexpr ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* const& __cordl_internal_get__localPlayer() const;

  constexpr ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*& __cordl_internal_get__localPlayer();

  constexpr bool const& __cordl_internal_get__masterServerUnreachable() const;

  constexpr bool& __cordl_internal_get__masterServerUnreachable();

  constexpr bool const& __cordl_internal_get__networkingFailed() const;

  constexpr bool& __cordl_internal_get__networkingFailed();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* const& __cordl_internal_get__partyPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>*& __cordl_internal_get__partyPlayers();

  constexpr ::GlobalNamespace::IPlatformUserModel* const& __cordl_internal_get__platformUserModel() const;

  constexpr ::GlobalNamespace::IPlatformUserModel*& __cordl_internal_get__platformUserModel();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>* const& __cordl_internal_get__publicServers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>*& __cordl_internal_get__publicServers();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& __cordl_internal_get_inviteRequestedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get_inviteRequestedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& __cordl_internal_get_joinRequestedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get_joinRequestedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& __cordl_internal_get_partyChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __cordl_internal_get_partyChangedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_partyRefreshingEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_partyRefreshingEvent();

  constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_partySizeChangedEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_partySizeChangedEvent();

  constexpr void __cordl_internal_set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value);

  constexpr void __cordl_internal_set__currentPlayerCount(int32_t value);

  constexpr void __cordl_internal_set__filterChanged(bool value);

  constexpr void __cordl_internal_set__isRefreshing(bool value);

  constexpr void __cordl_internal_set__lastServerRefresh(float_t value);

  constexpr void __cordl_internal_set__localPlayer(::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* value);

  constexpr void __cordl_internal_set__masterServerUnreachable(bool value);

  constexpr void __cordl_internal_set__networkingFailed(bool value);

  constexpr void __cordl_internal_set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* value);

  constexpr void __cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr void __cordl_internal_set__publicServers(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>* value);

  constexpr void __cordl_internal_set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr void __cordl_internal_set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr void __cordl_internal_set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr void __cordl_internal_set_partyRefreshingEvent(::System::Action* value);

  constexpr void __cordl_internal_set_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_inviteRequestedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_joinRequestedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_partyChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partyRefreshingEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_partyRefreshingEvent(::System::Action* value);

  /// @brief Method add_partySizeChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method get_authenticationTokenProviderTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* get_authenticationTokenProviderTask();

  /// @brief Method get_code, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_code();

  /// @brief Method get_connectionManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_connectionManager();

  /// @brief Method get_currentPartySize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_currentPartySize();

  /// @brief Method get_hasNetworkingFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_hasNetworkingFailed();

  /// @brief Method get_localPlayerIsPartyOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_partyOwnerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_partyOwnerId();

  /// @brief Method get_publicServers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_publicServers();

  /// @brief Method get_secret, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_secret();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
  constexpr ::GlobalNamespace::INetworkPlayerModel* i___GlobalNamespace__INetworkPlayerModel() noexcept;

  /// @brief Method remove_inviteRequestedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_joinRequestedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_partyChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partyRefreshingEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_partyRefreshingEvent(::System::Action* value);

  /// @brief Method remove_partySizeChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerModel_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerModel_1(NetworkPlayerModel_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerModel_1(NetworkPlayerModel_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17366 };

  /// @brief Field kServerRefreshFrequency offset 0xffffffff size 0x4
  static constexpr float_t kServerRefreshFrequency{ static_cast<float_t>(10.0f) };

  /// @brief Field kServerTimeoutPeriod offset 0xffffffff size 0x4
  static constexpr float_t kServerTimeoutPeriod{ static_cast<float_t>(21.0f) };

  /// @brief Field _platformUserModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  /// @brief Field _authenticationTokenProviderTask, offset: 0xb0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* ____authenticationTokenProviderTask;

  /// @brief Field _localPlayer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* ____localPlayer;

  /// @brief Field _networkingFailed, offset: 0xc0, size: 0x1, def value: None
  bool ____networkingFailed;

  /// @brief Field _masterServerUnreachable, offset: 0xc1, size: 0x1, def value: None
  bool ____masterServerUnreachable;

  /// @brief Field _currentPlayerCount, offset: 0xc4, size: 0x4, def value: None
  int32_t ____currentPlayerCount;

  /// @brief Field partySizeChangedEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___partySizeChangedEvent;

  /// @brief Field partyRefreshingEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action* ___partyRefreshingEvent;

  /// @brief Field partyChangedEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___partyChangedEvent;

  /// @brief Field joinRequestedEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___joinRequestedEvent;

  /// @brief Field inviteRequestedEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___inviteRequestedEvent;

  /// @brief Field _partyPlayers, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* ____partyPlayers;

  /// @brief Field _publicServers, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>* ____publicServers;

  /// @brief Field _lastServerRefresh, offset: 0x100, size: 0x4, def value: None
  float_t ____lastServerRefresh;

  /// @brief Field _isRefreshing, offset: 0x104, size: 0x1, def value: None
  bool ____isRefreshing;

  /// @brief Field _filterChanged, offset: 0x105, size: 0x1, def value: None
  bool ____filterChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1, "", "NetworkPlayerModel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig, "", "NetworkPlayerModel`1/JoinMatchmakingPartyConfig");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer, "", "NetworkPlayerModel`1/NetworkPlayer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1_NetworkServer, "", "NetworkPlayerModel`1/NetworkServer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig, "", "NetworkPlayerModel`1/StartClientPartyConfig");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__58, "", "NetworkPlayerModel`1/<GetOtherPlayers>d__58");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__57, "", "NetworkPlayerModel`1/<GetPartyPlayers>d__57");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1___c, "", "NetworkPlayerModel`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass59_0, "", "NetworkPlayerModel`1/<>c__DisplayClass59_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::NetworkPlayerModel_1__InitAuthenticationTokenProvider_d__56, "", "NetworkPlayerModel`1/<InitAuthenticationTokenProvider>d__56");
