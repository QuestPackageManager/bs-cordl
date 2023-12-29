#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalNetworkPlayerModel)
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class __LocalNetworkPlayerModel__CreatePartyConfig;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class BasicConnectionRequestHandler;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct __LocalNetworkPlayerModel___Start_d__41;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __LocalNetworkPlayerModel__LocalNetworkPlayer;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class LocalNetworkDiscoveryManager;
}
namespace System::Net {
class IPAddress;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalNetworkPlayerModel;
}
namespace GlobalNamespace {
class __LocalNetworkPlayerModel__CreatePartyConfig;
}
namespace GlobalNamespace {
class __LocalNetworkPlayerModel__LocalNetworkPlayer;
}
namespace GlobalNamespace {
struct __LocalNetworkPlayerModel___Start_d__41;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkPlayerModel__CreatePartyConfig);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer);
MARK_VAL_T(::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41);
// Type: ::LocalNetworkPlayer
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 151, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4556))
// CS Name: ::LocalNetworkPlayerModel::LocalNetworkPlayer*
class CORDL_TYPE __LocalNetworkPlayerModel__LocalNetworkPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _playerModel, offset 0x10, size 0x8
  __declspec(property(get = __get__playerModel, put = __set__playerModel))::GlobalNamespace::LocalNetworkPlayerModel* _playerModel;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x20, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _ipAddress, offset 0x28, size 0x8
  __declspec(property(get = __get__ipAddress, put = __set__ipAddress))::System::Net::IPAddress* _ipAddress;

  /// @brief Field _isMe, offset 0x30, size 0x1
  __declspec(property(get = __get__isMe, put = __set__isMe)) bool _isMe;

  /// @brief Field _isPartyOwner, offset 0x31, size 0x1
  __declspec(property(get = __get__isPartyOwner, put = __set__isPartyOwner)) bool _isPartyOwner;

  /// @brief Field _joinRequestTime, offset 0x34, size 0x4
  __declspec(property(get = __get__joinRequestTime, put = __set__joinRequestTime)) float_t _joinRequestTime;

  /// @brief Field _inviteSentTime, offset 0x38, size 0x4
  __declspec(property(get = __get__inviteSentTime, put = __set__inviteSentTime)) float_t _inviteSentTime;

  /// @brief Field _isBlocked, offset 0x3c, size 0x1
  __declspec(property(get = __get__isBlocked, put = __set__isBlocked)) bool _isBlocked;

  /// @brief Field _hasBlockedMe, offset 0x3d, size 0x1
  __declspec(property(get = __get__hasBlockedMe, put = __set__hasBlockedMe)) bool _hasBlockedMe;

  /// @brief Field _secret, offset 0x40, size 0x8
  __declspec(property(get = __get__secret, put = __set__secret))::StringW _secret;

  /// @brief Field _multiplayerPort, offset 0x48, size 0x4
  __declspec(property(get = __get__multiplayerPort, put = __set__multiplayerPort)) int32_t _multiplayerPort;

  /// @brief Field _connectedPlayer, offset 0x50, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _connectingStartTime, offset 0x58, size 0x4
  __declspec(property(get = __get__connectingStartTime, put = __set__connectingStartTime)) float_t _connectingStartTime;

  /// @brief Field _currentPartySize, offset 0x5c, size 0x4
  __declspec(property(get = __get__currentPartySize, put = __set__currentPartySize)) int32_t _currentPartySize;

  /// @brief Field _selectionMask, offset 0x60, size 0x18
  __declspec(property(get = __get__selectionMask, put = __set__selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask;

  /// @brief Field _configuration, offset 0x78, size 0x18
  __declspec(property(get = __get__configuration, put = __set__configuration))::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _lastUpdateTime, offset 0x90, size 0x4
  __declspec(property(get = __get__lastUpdateTime, put = __set__lastUpdateTime)) float_t _lastUpdateTime;

  /// @brief Field _allowedJoinToMyParty, offset 0x94, size 0x1
  __declspec(property(get = __get__allowedJoinToMyParty, put = __set__allowedJoinToMyParty)) bool _allowedJoinToMyParty;

  /// @brief Field _requestedToJoinMyParty, offset 0x95, size 0x1
  __declspec(property(get = __get__requestedToJoinMyParty, put = __set__requestedToJoinMyParty)) bool _requestedToJoinMyParty;

  /// @brief Field _invitedMeToJoinTheirParty, offset 0x96, size 0x1
  __declspec(property(get = __get__invitedMeToJoinTheirParty, put = __set__invitedMeToJoinTheirParty)) bool _invitedMeToJoinTheirParty;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_ipAddress))::System::Net::IPAddress* ipAddress;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  __declspec(property(get = get_isBlocked)) bool isBlocked;

  __declspec(property(get = get_hasBlockedMe)) bool hasBlockedMe;

  __declspec(property(get = get_secret))::StringW secret;

  __declspec(property(get = get_multiplayerPort)) int32_t multiplayerPort;

  __declspec(property(get = get_isMyPartyOwner)) bool isMyPartyOwner;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_allowedJoinToMyParty)) bool allowedJoinToMyParty;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_wasConnecting)) bool wasConnecting;

  __declspec(property(get = get_isTimedOut)) bool isTimedOut;

  __declspec(property(get = get_isWaitingOnJoin)) bool isWaitingOnJoin;

  __declspec(property(get = get_canJoin)) bool canJoin;

  __declspec(property(get = get_requiresPassword)) bool requiresPassword;

  __declspec(property(get = get_isWaitingOnInvite)) bool isWaitingOnInvite;

  __declspec(property(get = get_canInvite)) bool canInvite;

  __declspec(property(get = get_canKick)) bool canKick;

  __declspec(property(get = get_canLeave)) bool canLeave;

  __declspec(property(get = get_canBlock)) bool canBlock;

  __declspec(property(get = get_canUnblock)) bool canUnblock;

  __declspec(property(get = get_isConnectable)) bool isConnectable;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
  constexpr operator ::GlobalNamespace::INetworkPlayer*() noexcept;

  constexpr ::GlobalNamespace::LocalNetworkPlayerModel*& __get__playerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalNetworkPlayerModel*> const& __get__playerModel() const;

  constexpr void __set__playerModel(::GlobalNamespace::LocalNetworkPlayerModel* value);

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr ::System::Net::IPAddress*& __get__ipAddress();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> const& __get__ipAddress() const;

  constexpr void __set__ipAddress(::System::Net::IPAddress* value);

  constexpr bool& __get__isMe();

  constexpr bool const& __get__isMe() const;

  constexpr void __set__isMe(bool value);

  constexpr bool& __get__isPartyOwner();

  constexpr bool const& __get__isPartyOwner() const;

  constexpr void __set__isPartyOwner(bool value);

  constexpr float_t& __get__joinRequestTime();

  constexpr float_t const& __get__joinRequestTime() const;

  constexpr void __set__joinRequestTime(float_t value);

  constexpr float_t& __get__inviteSentTime();

  constexpr float_t const& __get__inviteSentTime() const;

  constexpr void __set__inviteSentTime(float_t value);

  constexpr bool& __get__isBlocked();

  constexpr bool const& __get__isBlocked() const;

  constexpr void __set__isBlocked(bool value);

  constexpr bool& __get__hasBlockedMe();

  constexpr bool const& __get__hasBlockedMe() const;

  constexpr void __set__hasBlockedMe(bool value);

  constexpr ::StringW& __get__secret();

  constexpr ::StringW const& __get__secret() const;

  constexpr void __set__secret(::StringW value);

  constexpr int32_t& __get__multiplayerPort();

  constexpr int32_t const& __get__multiplayerPort() const;

  constexpr void __set__multiplayerPort(int32_t value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr float_t& __get__connectingStartTime();

  constexpr float_t const& __get__connectingStartTime() const;

  constexpr void __set__connectingStartTime(float_t value);

  constexpr int32_t& __get__currentPartySize();

  constexpr int32_t const& __get__currentPartySize() const;

  constexpr void __set__currentPartySize(int32_t value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get__selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get__selectionMask() const;

  constexpr void __set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration() const;

  constexpr void __set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr float_t& __get__lastUpdateTime();

  constexpr float_t const& __get__lastUpdateTime() const;

  constexpr void __set__lastUpdateTime(float_t value);

  constexpr bool& __get__allowedJoinToMyParty();

  constexpr bool const& __get__allowedJoinToMyParty() const;

  constexpr void __set__allowedJoinToMyParty(bool value);

  constexpr bool& __get__requestedToJoinMyParty();

  constexpr bool const& __get__requestedToJoinMyParty() const;

  constexpr void __set__requestedToJoinMyParty(bool value);

  constexpr bool& __get__invitedMeToJoinTheirParty();

  constexpr bool const& __get__invitedMeToJoinTheirParty() const;

  constexpr void __set__invitedMeToJoinTheirParty(bool value);

  /// @brief Method get_userId addr 0x221bb14 size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x221bb1c size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_ipAddress addr 0x221bb24 size 0x8 virtual false final false
  inline ::System::Net::IPAddress* get_ipAddress();

  /// @brief Method get_isMe addr 0x221bb2c size 0x8 virtual true final true
  inline bool get_isMe();

  /// @brief Method get_isPartyOwner addr 0x221bb34 size 0x8 virtual false final false
  inline bool get_isPartyOwner();

  /// @brief Method get_currentPartySize addr 0x221bb3c size 0x8 virtual true final true
  inline int32_t get_currentPartySize();

  /// @brief Method get_selectionMask addr 0x221bb44 size 0x14 virtual true final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_configuration addr 0x221bb58 size 0x14 virtual true final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayer addr 0x221bb6c size 0x8 virtual true final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer();

  /// @brief Method get_isBlocked addr 0x221bb74 size 0x8 virtual false final false
  inline bool get_isBlocked();

  /// @brief Method get_hasBlockedMe addr 0x221bb7c size 0x8 virtual false final false
  inline bool get_hasBlockedMe();

  /// @brief Method get_secret addr 0x221bb84 size 0x8 virtual false final false
  inline ::StringW get_secret();

  /// @brief Method get_multiplayerPort addr 0x221bb8c size 0x8 virtual false final false
  inline int32_t get_multiplayerPort();

  /// @brief Method get_isMyPartyOwner addr 0x221b934 size 0x68 virtual true final true
  inline bool get_isMyPartyOwner();

  /// @brief Method get_isConnected addr 0x221bb94 size 0xb0 virtual false final false
  inline bool get_isConnected();

  /// @brief Method get_allowedJoinToMyParty addr 0x221bc44 size 0x8 virtual false final false
  inline bool get_allowedJoinToMyParty();

  /// @brief Method get_isConnecting addr 0x221b490 size 0x40 virtual false final false
  inline bool get_isConnecting();

  /// @brief Method get_wasConnecting addr 0x221bc4c size 0x40 virtual false final false
  inline bool get_wasConnecting();

  /// @brief Method get_isTimedOut addr 0x221970c size 0x70 virtual false final false
  inline bool get_isTimedOut();

  static inline ::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* New_ctor(::GlobalNamespace::LocalNetworkPlayerModel* playerModel, ::StringW userId, ::StringW userName,
                                                                                           ::System::Net::IPAddress* ipAddress, bool isMe);

  /// @brief Method .ctor addr 0x2219fac size 0x50 virtual false final false
  inline void _ctor(::GlobalNamespace::LocalNetworkPlayerModel* playerModel, ::StringW userId, ::StringW userName, ::System::Net::IPAddress* ipAddress, bool isMe);

  /// @brief Method get_isWaitingOnJoin addr 0x221bc8c size 0x44 virtual true final true
  inline bool get_isWaitingOnJoin();

  /// @brief Method get_canJoin addr 0x221bcd0 size 0xb0 virtual true final true
  inline bool get_canJoin();

  /// @brief Method Join addr 0x221bd80 size 0x4c virtual true final true
  inline void Join();

  /// @brief Method get_requiresPassword addr 0x221bdcc size 0x8 virtual true final true
  inline bool get_requiresPassword();

  /// @brief Method Join addr 0x221bdd4 size 0x4 virtual true final true
  inline void Join(::StringW password);

  /// @brief Method get_isWaitingOnInvite addr 0x221bdd8 size 0x44 virtual true final true
  inline bool get_isWaitingOnInvite();

  /// @brief Method get_canInvite addr 0x221be1c size 0xac virtual true final true
  inline bool get_canInvite();

  /// @brief Method Invite addr 0x221bec8 size 0x5c virtual true final true
  inline void Invite();

  /// @brief Method get_canKick addr 0x221bf24 size 0x3c virtual true final true
  inline bool get_canKick();

  /// @brief Method Kick addr 0x221bf60 size 0x20 virtual true final true
  inline void Kick();

  /// @brief Method get_canLeave addr 0x221bf80 size 0x4c virtual true final true
  inline bool get_canLeave();

  /// @brief Method Leave addr 0x221bfcc size 0x24 virtual true final true
  inline void Leave();

  /// @brief Method get_canBlock addr 0x221bff0 size 0x68 virtual true final true
  inline bool get_canBlock();

  /// @brief Method Block addr 0x221c058 size 0xc virtual true final true
  inline void Block();

  /// @brief Method get_canUnblock addr 0x221c064 size 0x8 virtual true final true
  inline bool get_canUnblock();

  /// @brief Method Unblock addr 0x221c06c size 0x8 virtual true final true
  inline void Unblock();

  /// @brief Method SendJoinResponse addr 0x221a238 size 0x3c virtual true final true
  inline void SendJoinResponse(bool accept);

  /// @brief Method SendInviteResponse addr 0x221ab34 size 0x5c virtual true final true
  inline void SendInviteResponse(bool accept);

  /// @brief Method Update addr 0x2219c14 size 0xec virtual false final false
  inline bool Update(bool isPartyOwner, int32_t currentPartySize, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method HasFailedToConnect addr 0x2219688 size 0x84 virtual false final false
  inline bool HasFailedToConnect();

  /// @brief Method SetInvited addr 0x221aaf8 size 0x3c virtual false final false
  inline void SetInvited(bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret,
                         int32_t multiplayerPort);

  /// @brief Method SetJoinResponse addr 0x221a768 size 0x40 virtual false final false
  inline void SetJoinResponse(bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret,
                              int32_t multiplayerPort, bool blocked);

  /// @brief Method SetInviteResponse addr 0x221ace8 size 0x2c virtual false final false
  inline void SetInviteResponse(bool accepted, bool blocked);

  /// @brief Method SetJoinRequested addr 0x221a22c size 0xc virtual false final false
  inline void SetJoinRequested();

  /// @brief Method SetConnected addr 0x221b39c size 0x20 virtual false final false
  inline bool SetConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method SetDisconnected addr 0x221b4d0 size 0x24 virtual false final false
  inline bool SetDisconnected();

  /// @brief Method get_isConnectable addr 0x221c0c8 size 0x3c virtual false final false
  inline bool get_isConnectable();

  /// @brief Method Connect addr 0x221c074 size 0x54 virtual false final false
  inline void Connect();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkPlayerModel__LocalNetworkPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkPlayerModel__LocalNetworkPlayer(__LocalNetworkPlayerModel__LocalNetworkPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkPlayerModel__LocalNetworkPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkPlayerModel__LocalNetworkPlayer(__LocalNetworkPlayerModel__LocalNetworkPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkPlayerModel__LocalNetworkPlayer();

public:
  /// @brief Field _playerModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LocalNetworkPlayerModel* ____playerModel;

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _ipAddress, offset: 0x28, size: 0x8, def value: None
  ::System::Net::IPAddress* ____ipAddress;

  /// @brief Field _isMe, offset: 0x30, size: 0x1, def value: None
  bool ____isMe;

  /// @brief Field _isPartyOwner, offset: 0x31, size: 0x1, def value: None
  bool ____isPartyOwner;

  /// @brief Field _joinRequestTime, offset: 0x34, size: 0x4, def value: None
  float_t ____joinRequestTime;

  /// @brief Field _inviteSentTime, offset: 0x38, size: 0x4, def value: None
  float_t ____inviteSentTime;

  /// @brief Field _isBlocked, offset: 0x3c, size: 0x1, def value: None
  bool ____isBlocked;

  /// @brief Field _hasBlockedMe, offset: 0x3d, size: 0x1, def value: None
  bool ____hasBlockedMe;

  /// @brief Field _secret, offset: 0x40, size: 0x8, def value: None
  ::StringW ____secret;

  /// @brief Field _multiplayerPort, offset: 0x48, size: 0x4, def value: None
  int32_t ____multiplayerPort;

  /// @brief Field _connectedPlayer, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _connectingStartTime, offset: 0x58, size: 0x4, def value: None
  float_t ____connectingStartTime;

  /// @brief Field _currentPartySize, offset: 0x5c, size: 0x4, def value: None
  int32_t ____currentPartySize;

  /// @brief Field _selectionMask, offset: 0x60, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask;

  /// @brief Field _configuration, offset: 0x78, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field _lastUpdateTime, offset: 0x90, size: 0x4, def value: None
  float_t ____lastUpdateTime;

  /// @brief Field _allowedJoinToMyParty, offset: 0x94, size: 0x1, def value: None
  bool ____allowedJoinToMyParty;

  /// @brief Field _requestedToJoinMyParty, offset: 0x95, size: 0x1, def value: None
  bool ____requestedToJoinMyParty;

  /// @brief Field _invitedMeToJoinTheirParty, offset: 0x96, size: 0x1, def value: None
  bool ____invitedMeToJoinTheirParty;

  /// @brief Field kPeerBroadcastTimeout offset 0xffffffff size 0x4
  static constexpr float_t kPeerBroadcastTimeout{ 30.0 };

  /// @brief Field kConnectionTimeout offset 0xffffffff size 0x4
  static constexpr float_t kConnectionTimeout{ 5.0 };

  /// @brief Field kRequestTimeout offset 0xffffffff size 0x4
  static constexpr float_t kRequestTimeout{ 120.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____playerModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____ipAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____isMe) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____isPartyOwner) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____joinRequestTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____inviteSentTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____isBlocked) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____hasBlockedMe) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____secret) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____multiplayerPort) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____connectedPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____connectingStartTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____currentPartySize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____selectionMask) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____configuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____lastUpdateTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____allowedJoinToMyParty) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____requestedToJoinMyParty) == 0x95, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer, ____invitedMeToJoinTheirParty) == 0x96, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CreatePartyConfig
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4534))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4557))
// CS Name: ::LocalNetworkPlayerModel::CreatePartyConfig*
class CORDL_TYPE __LocalNetworkPlayerModel__CreatePartyConfig : public ::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::LocalNetworkPlayerModel*>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::LocalNetworkPlayerModel*>*() noexcept;

  static inline ::GlobalNamespace::__LocalNetworkPlayerModel__CreatePartyConfig* New_ctor();

  /// @brief Method .ctor addr 0x221c104 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkPlayerModel__CreatePartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkPlayerModel__CreatePartyConfig(__LocalNetworkPlayerModel__CreatePartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkPlayerModel__CreatePartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkPlayerModel__CreatePartyConfig(__LocalNetworkPlayerModel__CreatePartyConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkPlayerModel__CreatePartyConfig();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkPlayerModel__CreatePartyConfig, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__41
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(4717)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 405 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4558)) CS Name: ::LocalNetworkPlayerModel::<Start>d__41
struct CORDL_TYPE __LocalNetworkPlayerModel___Start_d__41 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x221c10c size 0x6bc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x221c7c8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalNetworkPlayerModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __LocalNetworkPlayerModel___Start_d__41(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LocalNetworkPlayerModel* __4__this,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkPlayerModel___Start_d__41();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LocalNetworkPlayerModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalNetworkPlayerModel
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4559))
// CS Name: ::LocalNetworkPlayerModel*
class CORDL_TYPE LocalNetworkPlayerModel : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
  // Declarations
  using _Start_d__41 = ::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41;

  using CreatePartyConfig = ::GlobalNamespace::__LocalNetworkPlayerModel__CreatePartyConfig;

  using LocalNetworkPlayer = ::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer;

  /// @brief Field _discoveryManager, offset 0x90, size 0x8
  __declspec(property(get = __get__discoveryManager, put = __set__discoveryManager))::GlobalNamespace::LocalNetworkDiscoveryManager* _discoveryManager;

  /// @brief Field _platformUserModel, offset 0x98, size 0x8
  __declspec(property(get = __get__platformUserModel, put = __set__platformUserModel))::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _networkConfig, offset 0xa0, size 0x8
  __declspec(property(get = __get__networkConfig, put = __set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _partyPlayers, offset 0xa8, size 0x8
  __declspec(property(get = __get__partyPlayers, put = __set__partyPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>* _partyPlayers;

  /// @brief Field _otherPlayers, offset 0xb0, size 0x8
  __declspec(property(get = __get__otherPlayers, put = __set__otherPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>* _otherPlayers;

  /// @brief Field _localPlayer, offset 0xb8, size 0x8
  __declspec(property(get = __get__localPlayer, put = __set__localPlayer))::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* _localPlayer;

  /// @brief Field _networkingFailed, offset 0xc0, size 0x1
  __declspec(property(get = __get__networkingFailed, put = __set__networkingFailed)) bool _networkingFailed;

  /// @brief Field _partyEnabled, offset 0xc1, size 0x1
  __declspec(property(get = __get__partyEnabled, put = __set__partyEnabled)) bool _partyEnabled;

  /// @brief Field _partyManager, offset 0xc8, size 0x8
  __declspec(property(get = __get__partyManager, put = __set__partyManager))::GlobalNamespace::INetworkPlayerModel* _partyManager;

  /// @brief Field _connectionRequestHandler, offset 0xd0, size 0x8
  __declspec(property(get = __get__connectionRequestHandler, put = __set__connectionRequestHandler))::GlobalNamespace::BasicConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field partySizeChangedEvent, offset 0xd8, size 0x8
  __declspec(property(get = __get_partySizeChangedEvent, put = __set_partySizeChangedEvent))::System::Action_1<int32_t>* partySizeChangedEvent;

  /// @brief Field partyChangedEvent, offset 0xe0, size 0x8
  __declspec(property(get = __get_partyChangedEvent, put = __set_partyChangedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;

  /// @brief Field joinRequestedEvent, offset 0xe8, size 0x8
  __declspec(property(get = __get_joinRequestedEvent, put = __set_joinRequestedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;

  /// @brief Field inviteRequestedEvent, offset 0xf0, size 0x8
  __declspec(property(get = __get_inviteRequestedEvent, put = __set_inviteRequestedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;

  __declspec(property(get = get_canInvitePlayers)) bool canInvitePlayers;

  __declspec(property(get = get_hasConnectedPeers)) bool hasConnectedPeers;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_discoveryEnabled, put = set_discoveryEnabled)) bool discoveryEnabled;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  __declspec(property(get = get_otherPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers;

  __declspec(property(get = get_hasNetworkingFailed)) bool hasNetworkingFailed;

  __declspec(property(get = get_liteNetLibConnectionManager))::GlobalNamespace::LiteNetLibConnectionManager* liteNetLibConnectionManager;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  constexpr ::GlobalNamespace::LocalNetworkDiscoveryManager*& __get__discoveryManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalNetworkDiscoveryManager*> const& __get__discoveryManager() const;

  constexpr void __set__discoveryManager(::GlobalNamespace::LocalNetworkDiscoveryManager* value);

  constexpr ::GlobalNamespace::IPlatformUserModel*& __get__platformUserModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& __get__platformUserModel() const;

  constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr ::GlobalNamespace::INetworkConfig*& __get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __get__networkConfig() const;

  constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>*& __get__partyPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>*> const& __get__partyPlayers() const;

  constexpr void __set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>*& __get__otherPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>*> const& __get__otherPlayers() const;

  constexpr void __set__otherPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>* value);

  constexpr ::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*& __get__localPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*> const& __get__localPlayer() const;

  constexpr void __set__localPlayer(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* value);

  constexpr bool& __get__networkingFailed();

  constexpr bool const& __get__networkingFailed() const;

  constexpr void __set__networkingFailed(bool value);

  constexpr bool& __get__partyEnabled();

  constexpr bool const& __get__partyEnabled() const;

  constexpr void __set__partyEnabled(bool value);

  constexpr ::GlobalNamespace::INetworkPlayerModel*& __get__partyManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayerModel*> const& __get__partyManager() const;

  constexpr void __set__partyManager(::GlobalNamespace::INetworkPlayerModel* value);

  constexpr ::GlobalNamespace::BasicConnectionRequestHandler*& __get__connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicConnectionRequestHandler*> const& __get__connectionRequestHandler() const;

  constexpr void __set__connectionRequestHandler(::GlobalNamespace::BasicConnectionRequestHandler* value);

  constexpr ::System::Action_1<int32_t>*& __get_partySizeChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_partySizeChangedEvent() const;

  constexpr void __set_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __get_partyChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __get_partyChangedEvent() const;

  constexpr void __set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __get_joinRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __get_joinRequestedEvent() const;

  constexpr void __set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __get_inviteRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __get_inviteRequestedEvent() const;

  constexpr void __set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_canInvitePlayers addr 0x2218d78 size 0x90 virtual false final false
  inline bool get_canInvitePlayers();

  /// @brief Method get_hasConnectedPeers addr 0x2218e08 size 0x50 virtual false final false
  inline bool get_hasConnectedPeers();

  /// @brief Method get_currentPartySize addr 0x2218e58 size 0x48 virtual true final false
  inline int32_t get_currentPartySize();

  /// @brief Method get_discoveryEnabled addr 0x2218ea0 size 0x1c virtual true final false
  inline bool get_discoveryEnabled();

  /// @brief Method set_discoveryEnabled addr 0x2218ebc size 0x20 virtual true final false
  inline void set_discoveryEnabled(bool value);

  /// @brief Method add_partySizeChangedEvent addr 0x2218edc size 0xb0 virtual true final false
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_partySizeChangedEvent addr 0x2218f8c size 0xb0 virtual true final false
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_partyChangedEvent addr 0x221903c size 0xb0 virtual true final false
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partyChangedEvent addr 0x22190ec size 0xb0 virtual true final false
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_joinRequestedEvent addr 0x221919c size 0xb0 virtual true final false
  inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_joinRequestedEvent addr 0x221924c size 0xb0 virtual true final false
  inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_inviteRequestedEvent addr 0x22192fc size 0xb0 virtual true final false
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_inviteRequestedEvent addr 0x22193ac size 0xb0 virtual true final false
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_localPlayerIsPartyOwner addr 0x221945c size 0x1c virtual true final false
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_otherPlayers addr 0x2219478 size 0x10 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_otherPlayers();

  /// @brief Method get_hasNetworkingFailed addr 0x2219488 size 0x8 virtual true final false
  inline bool get_hasNetworkingFailed();

  /// @brief Method get_liteNetLibConnectionManager addr 0x2219490 size 0x58 virtual false final false
  inline ::GlobalNamespace::LiteNetLibConnectionManager* get_liteNetLibConnectionManager();

  /// @brief Method Start addr 0x22194e8 size 0x94 virtual true final false
  inline void Start();

  /// @brief Method Update addr 0x221957c size 0x10c virtual true final false
  inline void Update();

  /// @brief Method OnDestroy addr 0x2219870 size 0x24c virtual true final false
  inline void OnDestroy();

  /// @brief Method GetPartyPlayers addr 0x2219abc size 0x8 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();

  /// @brief Method GetOtherPlayers addr 0x2219ac4 size 0x8 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();

  /// @brief Method TryGetPlayer addr 0x2219acc size 0x12c virtual false final false
  inline bool TryGetPlayer(::StringW userId, ByRef<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*> player);

  /// @brief Method GetPlayer addr 0x2219bf8 size 0x1c virtual false final false
  inline ::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* GetPlayer(::StringW userId);

  /// @brief Method RefreshLocalPlayer addr 0x221977c size 0xf4 virtual false final false
  inline void RefreshLocalPlayer(bool forcePlayersChanged);

  /// @brief Method HandlePeerUpdate addr 0x2219d70 size 0x23c virtual false final false
  inline void HandlePeerUpdate(::StringW userId, ::System::Net::IPAddress* ipAddress, ::StringW encryptedUserName, int32_t currentPartySize, bool isPartyOwner,
                               ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method SendJoinRequest addr 0x2219ffc size 0x6c virtual false final false
  inline void SendJoinRequest(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* player);

  /// @brief Method HandleJoinRequest addr 0x221a068 size 0x1c4 virtual false final false
  inline void HandleJoinRequest(::StringW userId, ::System::Net::IPAddress* ipAddress, ::StringW encryptedUserName);

  /// @brief Method SendJoinResponse addr 0x221a274 size 0x1fc virtual false final false
  inline void SendJoinResponse(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* player, bool allowJoin);

  /// @brief Method HandleJoinResponse addr 0x221a5f8 size 0x170 virtual false final false
  inline void HandleJoinResponse(::StringW id, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                 ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method SendInviteRequest addr 0x221a7a8 size 0x164 virtual false final false
  inline void SendInviteRequest(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* player);

  /// @brief Method HandleInviteRequest addr 0x221a90c size 0x1ec virtual false final false
  inline void HandleInviteRequest(::StringW userId, ::System::Net::IPAddress* ipAddress, ::StringW encryptedUserName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner,
                                  ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method SendInviteResponse addr 0x221ab90 size 0xa8 virtual false final false
  inline void SendInviteResponse(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* player, bool acceptInvite);

  /// @brief Method HandleInviteResponse addr 0x221ac38 size 0xb0 virtual false final false
  inline void HandleInviteResponse(::StringW userId, bool accepted, bool blocked);

  /// @brief Method ConnectToPeer addr 0x221ad14 size 0x1b8 virtual false final false
  inline bool ConnectToPeer(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* player);

  /// @brief Method PlayerConnected addr 0x221aecc size 0x4d0 virtual true final false
  inline void PlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method ConnectionFailed addr 0x221b3bc size 0xd4 virtual true final false
  inline void ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method PlayerDisconnected addr 0x221b4f4 size 0x3b8 virtual true final false
  inline void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method DisconnectPeer addr 0x221b8ac size 0x88 virtual false final false
  inline void DisconnectPeer(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* player);

  /// @brief Method HandlePlayersChanged addr 0x2219d00 size 0x70 virtual false final false
  inline void HandlePlayersChanged();

  /// @brief Method PartySizeChanged addr 0x221b99c size 0x3c virtual true final false
  inline void PartySizeChanged(int32_t currentPartySize);

  /// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig);

  /// @brief Method DestroyPartyConnection addr 0x221b9d8 size 0x64 virtual true final false
  inline void DestroyPartyConnection();

  /// @brief Method ConnectedPlayerManagerChanged addr 0x221ba3c size 0x8 virtual true final false
  inline void ConnectedPlayerManagerChanged();

  /// @brief Method TryStartServer addr 0x221a470 size 0x188 virtual false final false
  inline bool TryStartServer();

  static inline ::GlobalNamespace::LocalNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor addr 0x221ba44 size 0xd0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalNetworkPlayerModel(LocalNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalNetworkPlayerModel(LocalNetworkPlayerModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalNetworkPlayerModel();

public:
  /// @brief Field _discoveryManager, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::LocalNetworkDiscoveryManager* ____discoveryManager;

  /// @brief Field _platformUserModel, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  /// @brief Field _networkConfig, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _partyPlayers, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>* ____partyPlayers;

  /// @brief Field _otherPlayers, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*>* ____otherPlayers;

  /// @brief Field _localPlayer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer* ____localPlayer;

  /// @brief Field _networkingFailed, offset: 0xc0, size: 0x1, def value: None
  bool ____networkingFailed;

  /// @brief Field _partyEnabled, offset: 0xc1, size: 0x1, def value: None
  bool ____partyEnabled;

  /// @brief Field _partyManager, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayerModel* ____partyManager;

  /// @brief Field _connectionRequestHandler, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::BasicConnectionRequestHandler* ____connectionRequestHandler;

  /// @brief Field partySizeChangedEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___partySizeChangedEvent;

  /// @brief Field partyChangedEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___partyChangedEvent;

  /// @brief Field joinRequestedEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___joinRequestedEvent;

  /// @brief Field inviteRequestedEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___inviteRequestedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalNetworkPlayerModel, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____discoveryManager) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____platformUserModel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____networkConfig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____partyPlayers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____otherPlayers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____localPlayer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____networkingFailed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____partyEnabled) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____partyManager) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ____connectionRequestHandler) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ___partySizeChangedEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ___partyChangedEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ___joinRequestedEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayerModel, ___inviteRequestedEvent) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkPlayerModel*, "", "LocalNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkPlayerModel__CreatePartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkPlayerModel__CreatePartyConfig*, "", "LocalNetworkPlayerModel/CreatePartyConfig");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkPlayerModel__LocalNetworkPlayer*, "", "LocalNetworkPlayerModel/LocalNetworkPlayer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkPlayerModel___Start_d__41, "", "LocalNetworkPlayerModel/<Start>d__41");
