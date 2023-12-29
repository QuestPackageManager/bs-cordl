#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusNetworkPlayerModel)
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass55_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class OculusConnectionManager;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass51_0;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass50_0;
}
namespace GlobalNamespace {
struct __OculusNetworkPlayerModel___Start_d__42;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace GlobalNamespace {
struct __OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass64_0;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel__OculusNetworkPlayer;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
class UserInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel__OculusNetworkPlayer;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass50_0;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass51_0;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass55_0;
}
namespace GlobalNamespace {
class __OculusNetworkPlayerModel____c__DisplayClass64_0;
}
namespace GlobalNamespace {
struct __OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51;
}
namespace GlobalNamespace {
struct __OculusNetworkPlayerModel___Start_d__42;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0);
MARK_VAL_T(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51);
MARK_VAL_T(::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42);
// Type: ::OculusNetworkPlayer
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 146, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 3200 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(2446), inst: 3220 }), TypeDefinitionIndex(TypeDefinitionIndex(2446)), TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4586))
// CS Name: ::OculusNetworkPlayerModel::OculusNetworkPlayer*
class CORDL_TYPE __OculusNetworkPlayerModel__OculusNetworkPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _playerModel, offset 0x10, size 0x8
  __declspec(property(get = __get__playerModel, put = __set__playerModel))::GlobalNamespace::OculusNetworkPlayerModel* _playerModel;

  /// @brief Field _id, offset 0x18, size 0x8
  __declspec(property(get = __get__id, put = __set__id)) uint64_t _id;

  /// @brief Field _userId, offset 0x20, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x28, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _isMe, offset 0x30, size 0x1
  __declspec(property(get = __get__isMe, put = __set__isMe)) bool _isMe;

  /// @brief Field _room, offset 0x38, size 0x8
  __declspec(property(get = __get__room, put = __set__room))::Oculus::Platform::Models::Room* _room;

  /// @brief Field _cachedSelectionMask, offset 0x40, size 0x20
  __declspec(property(get = __get__cachedSelectionMask, put = __set__cachedSelectionMask))::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> _cachedSelectionMask;

  /// @brief Field _cachedConfiguration, offset 0x60, size 0x1c
  __declspec(property(get = __get__cachedConfiguration, put = __set__cachedConfiguration))::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> _cachedConfiguration;

  /// @brief Field removed, offset 0x7c, size 0x1
  __declspec(property(get = __get_removed, put = __set_removed)) bool removed;

  /// @brief Field inviteToken, offset 0x80, size 0x8
  __declspec(property(get = __get_inviteToken, put = __set_inviteToken))::StringW inviteToken;

  /// @brief Field <connectedPlayer>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__connectedPlayer_k__BackingField, put = __set__connectedPlayer_k__BackingField))::GlobalNamespace::IConnectedPlayer* _connectedPlayer_k__BackingField;

  /// @brief Field <isWaitingOnJoin>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __get__isWaitingOnJoin_k__BackingField, put = __set__isWaitingOnJoin_k__BackingField)) bool _isWaitingOnJoin_k__BackingField;

  /// @brief Field <isWaitingOnInvite>k__BackingField, offset 0x91, size 0x1
  __declspec(property(get = __get__isWaitingOnInvite_k__BackingField, put = __set__isWaitingOnInvite_k__BackingField)) bool _isWaitingOnInvite_k__BackingField;

  __declspec(property(get = get_id)) uint64_t id;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_isRoomOwner)) bool isRoomOwner;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_room, put = set_room))::Oculus::Platform::Models::Room* room;

  __declspec(property(get = get_connectedPlayer, put = set_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  __declspec(property(get = get_isMyPartyOwner)) bool isMyPartyOwner;

  __declspec(property(get = get_canJoin)) bool canJoin;

  __declspec(property(get = get_requiresPassword)) bool requiresPassword;

  __declspec(property(get = get_isWaitingOnJoin, put = set_isWaitingOnJoin)) bool isWaitingOnJoin;

  __declspec(property(get = get_canInvite)) bool canInvite;

  __declspec(property(get = get_isWaitingOnInvite, put = set_isWaitingOnInvite)) bool isWaitingOnInvite;

  __declspec(property(get = get_canKick)) bool canKick;

  __declspec(property(get = get_canLeave)) bool canLeave;

  __declspec(property(get = get_canBlock)) bool canBlock;

  __declspec(property(get = get_canUnblock)) bool canUnblock;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
  constexpr operator ::GlobalNamespace::INetworkPlayer*() noexcept;

  constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& __get__playerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& __get__playerModel() const;

  constexpr void __set__playerModel(::GlobalNamespace::OculusNetworkPlayerModel* value);

  constexpr uint64_t& __get__id();

  constexpr uint64_t const& __get__id() const;

  constexpr void __set__id(uint64_t value);

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr bool& __get__isMe();

  constexpr bool const& __get__isMe() const;

  constexpr void __set__isMe(bool value);

  constexpr ::Oculus::Platform::Models::Room*& __get__room();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Room*> const& __get__room() const;

  constexpr void __set__room(::Oculus::Platform::Models::Room* value);

  constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask>& __get__cachedSelectionMask();

  constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> const& __get__cachedSelectionMask() const;

  constexpr void __set__cachedSelectionMask(::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> value);

  constexpr ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration>& __get__cachedConfiguration();

  constexpr ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> const& __get__cachedConfiguration() const;

  constexpr void __set__cachedConfiguration(::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> value);

  constexpr bool& __get_removed();

  constexpr bool const& __get_removed() const;

  constexpr void __set_removed(bool value);

  constexpr ::StringW& __get_inviteToken();

  constexpr ::StringW const& __get_inviteToken() const;

  constexpr void __set_inviteToken(::StringW value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer_k__BackingField() const;

  constexpr void __set__connectedPlayer_k__BackingField(::GlobalNamespace::IConnectedPlayer* value);

  constexpr bool& __get__isWaitingOnJoin_k__BackingField();

  constexpr bool const& __get__isWaitingOnJoin_k__BackingField() const;

  constexpr void __set__isWaitingOnJoin_k__BackingField(bool value);

  constexpr bool& __get__isWaitingOnInvite_k__BackingField();

  constexpr bool const& __get__isWaitingOnInvite_k__BackingField() const;

  constexpr void __set__isWaitingOnInvite_k__BackingField(bool value);

  /// @brief Method get_id addr 0x2222164 size 0x8 virtual false final false
  inline uint64_t get_id();

  /// @brief Method get_userId addr 0x222216c size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x2222174 size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_isMe addr 0x222217c size 0x8 virtual true final true
  inline bool get_isMe();

  /// @brief Method get_isPartyOwner addr 0x2220428 size 0x14 virtual false final false
  inline bool get_isPartyOwner();

  /// @brief Method get_isRoomOwner addr 0x2222184 size 0xac virtual false final false
  inline bool get_isRoomOwner();

  /// @brief Method get_currentPartySize addr 0x2222230 size 0xdc virtual true final true
  inline int32_t get_currentPartySize();

  /// @brief Method get_selectionMask addr 0x222230c size 0x218 virtual true final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_configuration addr 0x2222524 size 0x39c virtual true final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_room addr 0x22228c0 size 0x8 virtual false final false
  inline ::Oculus::Platform::Models::Room* get_room();

  /// @brief Method set_room addr 0x222190c size 0x18 virtual false final false
  inline void set_room(::Oculus::Platform::Models::Room* value);

  /// @brief Method get_connectedPlayer addr 0x22228c8 size 0x8 virtual true final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer();

  /// @brief Method set_connectedPlayer addr 0x22228d0 size 0x8 virtual false final false
  inline void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  static inline ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* New_ctor(::GlobalNamespace::OculusNetworkPlayerModel* playerModel, uint64_t id, ::StringW userName, bool isMe);

  /// @brief Method .ctor addr 0x2221994 size 0xb8 virtual false final false
  inline void _ctor(::GlobalNamespace::OculusNetworkPlayerModel* playerModel, uint64_t id, ::StringW userName, bool isMe);

  /// @brief Method get_isMyPartyOwner addr 0x22228d8 size 0x70 virtual true final true
  inline bool get_isMyPartyOwner();

  /// @brief Method get_canJoin addr 0x2222948 size 0x20 virtual true final true
  inline bool get_canJoin();

  /// @brief Method Join addr 0x2222968 size 0xe4 virtual true final true
  inline void Join();

  /// @brief Method get_requiresPassword addr 0x2222a4c size 0x8 virtual true final true
  inline bool get_requiresPassword();

  /// @brief Method Join addr 0x2222a54 size 0x4 virtual true final true
  inline void Join(::StringW password);

  /// @brief Method get_isWaitingOnJoin addr 0x2222a58 size 0x8 virtual true final true
  inline bool get_isWaitingOnJoin();

  /// @brief Method set_isWaitingOnJoin addr 0x2222a60 size 0xc virtual false final false
  inline void set_isWaitingOnJoin(bool value);

  /// @brief Method get_canInvite addr 0x2222a6c size 0x74 virtual true final true
  inline bool get_canInvite();

  /// @brief Method Invite addr 0x2222ae0 size 0x5c virtual true final true
  inline void Invite();

  /// @brief Method get_isWaitingOnInvite addr 0x2222b3c size 0x8 virtual true final true
  inline bool get_isWaitingOnInvite();

  /// @brief Method set_isWaitingOnInvite addr 0x2222b44 size 0xc virtual false final false
  inline void set_isWaitingOnInvite(bool value);

  /// @brief Method get_canKick addr 0x2222b50 size 0x70 virtual true final true
  inline bool get_canKick();

  /// @brief Method Kick addr 0x2222bc0 size 0x11c virtual true final true
  inline void Kick();

  /// @brief Method get_canLeave addr 0x2222cdc size 0x94 virtual true final true
  inline bool get_canLeave();

  /// @brief Method Leave addr 0x2222d70 size 0x24 virtual true final true
  inline void Leave();

  /// @brief Method get_canBlock addr 0x2222d94 size 0x8 virtual true final true
  inline bool get_canBlock();

  /// @brief Method Block addr 0x2222d9c size 0x4 virtual true final true
  inline void Block();

  /// @brief Method get_canUnblock addr 0x2222da0 size 0x8 virtual true final true
  inline bool get_canUnblock();

  /// @brief Method Unblock addr 0x2222da8 size 0x4 virtual true final true
  inline void Unblock();

  /// @brief Method SendJoinResponse addr 0x2222dac size 0x40 virtual true final true
  inline void SendJoinResponse(bool accept);

  /// @brief Method SendInviteResponse addr 0x2222dec size 0xc virtual true final true
  inline void SendInviteResponse(bool accept);

  /// @brief Method SameRoomAs addr 0x2221fe0 size 0x3c virtual false final false
  inline bool SameRoomAs(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* other);

  /// @brief Method <Join>b__40_0 addr 0x2222df8 size 0x20 virtual false final false
  inline void _Join_b__40_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel__OculusNetworkPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusNetworkPlayerModel__OculusNetworkPlayer(__OculusNetworkPlayerModel__OculusNetworkPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel__OculusNetworkPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusNetworkPlayerModel__OculusNetworkPlayer(__OculusNetworkPlayerModel__OculusNetworkPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusNetworkPlayerModel__OculusNetworkPlayer();

public:
  /// @brief Field _playerModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* ____playerModel;

  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  uint64_t ____id;

  /// @brief Field _userId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _isMe, offset: 0x30, size: 0x1, def value: None
  bool ____isMe;

  /// @brief Field _room, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::Models::Room* ____room;

  /// @brief Field _cachedSelectionMask, offset: 0x40, size: 0x20, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> ____cachedSelectionMask;

  /// @brief Field _cachedConfiguration, offset: 0x60, size: 0x1c, def value: None
  ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> ____cachedConfiguration;

  /// @brief Field removed, offset: 0x7c, size: 0x1, def value: None
  bool ___removed;

  /// @brief Field inviteToken, offset: 0x80, size: 0x8, def value: None
  ::StringW ___inviteToken;

  /// @brief Field <connectedPlayer>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer_k__BackingField;

  /// @brief Field <isWaitingOnJoin>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____isWaitingOnJoin_k__BackingField;

  /// @brief Field <isWaitingOnInvite>k__BackingField, offset: 0x91, size: 0x1, def value: None
  bool ____isWaitingOnInvite_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____playerModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____userId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____userName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____isMe) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____room) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____cachedSelectionMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____cachedConfiguration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ___removed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ___inviteToken) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____connectedPlayer_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____isWaitingOnJoin_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer, ____isWaitingOnInvite_k__BackingField) == 0x91, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__42
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4717)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 405
// }), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4587)) CS Name: ::OculusNetworkPlayerModel::<Start>d__42
struct CORDL_TYPE __OculusNetworkPlayerModel___Start_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2222e18 size 0x49c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22232b4 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusNetworkPlayerModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __OculusNetworkPlayerModel___Start_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                     ::GlobalNamespace::OculusNetworkPlayerModel* __4__this,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusNetworkPlayerModel___Start_d__42();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass50_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4588))
// CS Name: ::OculusNetworkPlayerModel::<>c__DisplayClass50_0*
class CORDL_TYPE __OculusNetworkPlayerModel____c__DisplayClass50_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __get_id, put = __set_id)) uint64_t id;

  /// @brief Field tcs, offset 0x18, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* tcs;

  constexpr uint64_t& __get_id();

  constexpr uint64_t const& __get_id() const;

  constexpr void __set_id(uint64_t value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* value);

  static inline ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0* New_ctor();

  /// @brief Method .ctor addr 0x2221244 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUserNameAsync>b__0 addr 0x22232c0 size 0x108 virtual false final false
  inline void _GetUserNameAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass50_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusNetworkPlayerModel____c__DisplayClass50_0(__OculusNetworkPlayerModel____c__DisplayClass50_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass50_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusNetworkPlayerModel____c__DisplayClass50_0(__OculusNetworkPlayerModel____c__DisplayClass50_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusNetworkPlayerModel____c__DisplayClass50_0();

public:
  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  uint64_t ___id;

  /// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0, ___tcs) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass51_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4589))
// CS Name: ::OculusNetworkPlayerModel::<>c__DisplayClass51_0*
class CORDL_TYPE __OculusNetworkPlayerModel____c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field player, offset 0x10, size 0x8
  __declspec(property(get = __get_player, put = __set_player))::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* player;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusNetworkPlayerModel* __4__this;

  constexpr ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*& __get_player();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*> const& __get_player() const;

  constexpr void __set_player(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* value);

  constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel* value);

  static inline ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0* New_ctor();

  /// @brief Method .ctor addr 0x22233c8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleRoomInviteReceived>b__0 addr 0x22233d0 size 0xa0 virtual false final false
  inline void _HandleRoomInviteReceived_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusNetworkPlayerModel____c__DisplayClass51_0(__OculusNetworkPlayerModel____c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusNetworkPlayerModel____c__DisplayClass51_0(__OculusNetworkPlayerModel____c__DisplayClass51_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusNetworkPlayerModel____c__DisplayClass51_0();

public:
  /// @brief Field player, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* ___player;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0, ___player) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleRoomInviteReceived>d__51
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(3395)),
// TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4590)) CS Name: ::OculusNetworkPlayerModel::<HandleRoomInviteReceived>d__51
struct CORDL_TYPE __OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2223470 size 0x3c8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2223838 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusNetworkPlayerModel*", modifiers: "",
  // def_value: None }, CppParam { name: "message", ty: "::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification*>*", modifiers: "", def_value: None }, CppParam { name:
  // "__8__1", ty: "::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                        ::GlobalNamespace::OculusNetworkPlayerModel* __4__this,
                                                                        ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification*>* message,
                                                                        ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0* __8__1,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* __4__this;

  /// @brief Field message, offset: 0x30, size: 0x8, def value: None
  ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification*>* message;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass55_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4591))
// CS Name: ::OculusNetworkPlayerModel::<>c__DisplayClass55_0*
class CORDL_TYPE __OculusNetworkPlayerModel____c__DisplayClass55_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusNetworkPlayerModel* __4__this;

  /// @brief Field onGetFriends, offset 0x18, size 0x8
  __declspec(property(get = __get_onGetFriends, put = __set_onGetFriends))::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList*>* onGetFriends;

  /// @brief Field onGetInvitable, offset 0x20, size 0x8
  __declspec(property(get = __get_onGetInvitable, put = __set_onGetInvitable))::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserList*>* onGetInvitable;

  constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel* value);

  constexpr ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList*>*& __get_onGetFriends();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList*>*> const& __get_onGetFriends() const;

  constexpr void __set_onGetFriends(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList*>* value);

  constexpr ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserList*>*& __get_onGetInvitable();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserList*>*> const& __get_onGetInvitable() const;

  constexpr void __set_onGetInvitable(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserList*>* value);

  static inline ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0* New_ctor();

  /// @brief Method .ctor addr 0x2221b0c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Refresh>b__0 addr 0x2223844 size 0x670 virtual false final false
  inline void _Refresh_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList*>* result);

  /// @brief Method <Refresh>b__1 addr 0x2223eb4 size 0x548 virtual false final false
  inline void _Refresh_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass55_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusNetworkPlayerModel____c__DisplayClass55_0(__OculusNetworkPlayerModel____c__DisplayClass55_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass55_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusNetworkPlayerModel____c__DisplayClass55_0(__OculusNetworkPlayerModel____c__DisplayClass55_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusNetworkPlayerModel____c__DisplayClass55_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* _____4__this;

  /// @brief Field onGetFriends, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList*>* ___onGetFriends;

  /// @brief Field onGetInvitable, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::UserList*>* ___onGetInvitable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0, ___onGetFriends) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0, ___onGetInvitable) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass64_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4592))
// CS Name: ::OculusNetworkPlayerModel::<>c__DisplayClass64_0*
class CORDL_TYPE __OculusNetworkPlayerModel____c__DisplayClass64_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusNetworkPlayerModel* __4__this;

  /// @brief Field tcs, offset 0x18, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  /// @brief Field userId, offset 0x20, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId)) uint64_t userId;

  constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel* value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr uint64_t& __get_userId();

  constexpr uint64_t const& __get_userId() const;

  constexpr void __set_userId(uint64_t value);

  static inline ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0* New_ctor();

  /// @brief Method .ctor addr 0x2221fd8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ShouldAcceptConnectionFromPlayer>b__0 addr 0x22243fc size 0xb4 virtual false final false
  inline void _ShouldAcceptConnectionFromPlayer_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass64_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusNetworkPlayerModel____c__DisplayClass64_0(__OculusNetworkPlayerModel____c__DisplayClass64_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusNetworkPlayerModel____c__DisplayClass64_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusNetworkPlayerModel____c__DisplayClass64_0(__OculusNetworkPlayerModel____c__DisplayClass64_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusNetworkPlayerModel____c__DisplayClass64_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* _____4__this;

  /// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  /// @brief Field userId, offset: 0x20, size: 0x8, def value: None
  uint64_t ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0, ___userId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusNetworkPlayerModel
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4599)), TypeDefinitionIndex(TypeDefinitionIndex(13418))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4593))
// CS Name: ::OculusNetworkPlayerModel*
class CORDL_TYPE OculusNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
  // Declarations
  using __c__DisplayClass64_0 = ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0;

  using __c__DisplayClass55_0 = ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0;

  using _HandleRoomInviteReceived_d__51 = ::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51;

  using __c__DisplayClass51_0 = ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0;

  using __c__DisplayClass50_0 = ::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0;

  using _Start_d__42 = ::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42;

  using OculusNetworkPlayer = ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer;

  /// @brief Field _platformUserModel, offset 0x90, size 0x8
  __declspec(property(get = __get__platformUserModel, put = __set__platformUserModel))::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _lastRefreshTime, offset 0x98, size 0x4
  __declspec(property(get = __get__lastRefreshTime, put = __set__lastRefreshTime)) float_t _lastRefreshTime;

  /// @brief Field _isRefreshing, offset 0x9c, size 0x1
  __declspec(property(get = __get__isRefreshing, put = __set__isRefreshing)) bool _isRefreshing;

  /// @brief Field _localPlayer, offset 0xa0, size 0x8
  __declspec(property(get = __get__localPlayer, put = __set__localPlayer))::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* _localPlayer;

  /// @brief Field _joinPolicy, offset 0xa8, size 0x4
  __declspec(property(get = __get__joinPolicy, put = __set__joinPolicy))::Oculus::Platform::RoomJoinPolicy _joinPolicy;

  /// @brief Field _partyEnabled, offset 0xac, size 0x1
  __declspec(property(get = __get__partyEnabled, put = __set__partyEnabled)) bool _partyEnabled;

  /// @brief Field _waitingOnRoomCreate, offset 0xad, size 0x1
  __declspec(property(get = __get__waitingOnRoomCreate, put = __set__waitingOnRoomCreate)) bool _waitingOnRoomCreate;

  /// @brief Field _roomDataStore, offset 0xb0, size 0x8
  __declspec(property(get = __get__roomDataStore, put = __set__roomDataStore))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _roomDataStore;

  /// @brief Field _partyPlayers, offset 0xb8, size 0x8
  __declspec(property(get = __get__partyPlayers, put = __set__partyPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>* _partyPlayers;

  /// @brief Field _otherPlayers, offset 0xc0, size 0x8
  __declspec(property(get = __get__otherPlayers, put = __set__otherPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>* _otherPlayers;

  /// @brief Field partySizeChangedEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_partySizeChangedEvent, put = __set_partySizeChangedEvent))::System::Action_1<int32_t>* partySizeChangedEvent;

  /// @brief Field partyChangedEvent, offset 0xd0, size 0x8
  __declspec(property(get = __get_partyChangedEvent, put = __set_partyChangedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;

  /// @brief Field inviteRequestedEvent, offset 0xd8, size 0x8
  __declspec(property(get = __get_inviteRequestedEvent, put = __set_inviteRequestedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;

  __declspec(property(get = get_localPlayer))::GlobalNamespace::INetworkPlayer* localPlayer;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_oculusConnectionManager))::GlobalNamespace::OculusConnectionManager* oculusConnectionManager;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  constexpr ::GlobalNamespace::IPlatformUserModel*& __get__platformUserModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& __get__platformUserModel() const;

  constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr float_t& __get__lastRefreshTime();

  constexpr float_t const& __get__lastRefreshTime() const;

  constexpr void __set__lastRefreshTime(float_t value);

  constexpr bool& __get__isRefreshing();

  constexpr bool const& __get__isRefreshing() const;

  constexpr void __set__isRefreshing(bool value);

  constexpr ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*& __get__localPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*> const& __get__localPlayer() const;

  constexpr void __set__localPlayer(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* value);

  constexpr ::Oculus::Platform::RoomJoinPolicy& __get__joinPolicy();

  constexpr ::Oculus::Platform::RoomJoinPolicy const& __get__joinPolicy() const;

  constexpr void __set__joinPolicy(::Oculus::Platform::RoomJoinPolicy value);

  constexpr bool& __get__partyEnabled();

  constexpr bool const& __get__partyEnabled() const;

  constexpr void __set__partyEnabled(bool value);

  constexpr bool& __get__waitingOnRoomCreate();

  constexpr bool const& __get__waitingOnRoomCreate() const;

  constexpr void __set__waitingOnRoomCreate(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __get__roomDataStore();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __get__roomDataStore() const;

  constexpr void __set__roomDataStore(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>*& __get__partyPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>*> const& __get__partyPlayers() const;

  constexpr void __set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>*& __get__otherPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>*> const& __get__otherPlayers() const;

  constexpr void __set__otherPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>* value);

  constexpr ::System::Action_1<int32_t>*& __get_partySizeChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_partySizeChangedEvent() const;

  constexpr void __set_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __get_partyChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __get_partyChangedEvent() const;

  constexpr void __set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __get_inviteRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __get_inviteRequestedEvent() const;

  constexpr void __set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_localPlayer addr 0x22203f4 size 0x8 virtual false final false
  inline ::GlobalNamespace::INetworkPlayer* get_localPlayer();

  /// @brief Method get_localPlayerIsPartyOwner addr 0x22203fc size 0x2c virtual true final false
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_currentPartySize addr 0x222043c size 0x48 virtual true final false
  inline int32_t get_currentPartySize();

  /// @brief Method add_partySizeChangedEvent addr 0x2220484 size 0xb0 virtual true final false
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_partySizeChangedEvent addr 0x2220534 size 0xb0 virtual true final false
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_partyChangedEvent addr 0x22205e4 size 0xb0 virtual true final false
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partyChangedEvent addr 0x2220694 size 0xb0 virtual true final false
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_inviteRequestedEvent addr 0x2220744 size 0xb0 virtual true final false
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_inviteRequestedEvent addr 0x22207f4 size 0xb0 virtual true final false
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_oculusConnectionManager addr 0x22208a4 size 0x58 virtual false final false
  inline ::GlobalNamespace::OculusConnectionManager* get_oculusConnectionManager();

  /// @brief Method Start addr 0x22208fc size 0x94 virtual true final false
  inline void Start();

  /// @brief Method Update addr 0x2220990 size 0x64 virtual true final false
  inline void Update();

  /// @brief Method GetPartyPlayers addr 0x2220bd4 size 0x8 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();

  /// @brief Method GetOtherPlayers addr 0x2220bdc size 0x8 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();

  /// @brief Method GetPlayer addr 0x2220be4 size 0x110 virtual false final false
  inline ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* GetPlayer(uint64_t id);

  /// @brief Method GetPlayer addr 0x2220cf4 size 0x120 virtual false final false
  inline ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* GetPlayer(::StringW userId);

  /// @brief Method TryCreateRoom addr 0x2220e14 size 0x2d8 virtual false final false
  inline bool TryCreateRoom();

  /// @brief Method GetUserName addr 0x22210ec size 0x18 virtual false final false
  inline ::StringW GetUserName(uint64_t id);

  /// @brief Method GetUserNameAsync addr 0x2221104 size 0x140 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetUserNameAsync(uint64_t id);

  /// @brief Method HandleRoomInviteReceived addr 0x222124c size 0xa0 virtual false final false
  inline void HandleRoomInviteReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification*>* message);

  /// @brief Method HandleRoomInviteAccepted addr 0x22212ec size 0x4 virtual false final false
  inline void HandleRoomInviteAccepted(::Oculus::Platform::Message_1<::StringW>* message);

  /// @brief Method HandleRoomUpdate addr 0x22212f0 size 0x61c virtual false final false
  inline void HandleRoomUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* message);

  /// @brief Method HandlePlayersChanged addr 0x2221924 size 0x70 virtual false final false
  inline void HandlePlayersChanged();

  /// @brief Method Refresh addr 0x22209f4 size 0x1e0 virtual false final false
  inline void Refresh();

  /// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig);

  /// @brief Method DestroyPartyConnection addr 0x2221b14 size 0x2c virtual true final false
  inline void DestroyPartyConnection();

  /// @brief Method PlayerConnected addr 0x2221d78 size 0xbc virtual true final false
  inline void PlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method PlayerDisconnected addr 0x2221e34 size 0xd8 virtual true final false
  inline void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method PartySizeChanged addr 0x2221f0c size 0xa4 virtual true final false
  inline void PartySizeChanged(int32_t currentPartySize);

  /// @brief Method UpdateRoomDataStore addr 0x2221fb0 size 0x28 virtual false final false
  inline void UpdateRoomDataStore();

  /// @brief Method TryLeaveRoom addr 0x2221b60 size 0x218 virtual false final false
  inline void TryLeaveRoom();

  /// @brief Method TryConnectToServer addr 0x2221a4c size 0xc0 virtual false final false
  inline void TryConnectToServer();

  /// @brief Method ShouldAcceptConnectionFromPlayer addr 0x2220214 size 0x1d4 virtual false final false
  inline ::System::Threading::Tasks::Task_1<bool>* ShouldAcceptConnectionFromPlayer(uint64_t userId);

  static inline ::GlobalNamespace::OculusNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor addr 0x222201c size 0xf4 virtual false final false
  inline void _ctor();

  /// @brief Method <TryCreateRoom>b__48_0 addr 0x2222118 size 0x4c virtual false final false
  inline void _TryCreateRoom_b__48_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusNetworkPlayerModel(OculusNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusNetworkPlayerModel(OculusNetworkPlayerModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusNetworkPlayerModel();

public:
  /// @brief Field _platformUserModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  /// @brief Field _lastRefreshTime, offset: 0x98, size: 0x4, def value: None
  float_t ____lastRefreshTime;

  /// @brief Field _isRefreshing, offset: 0x9c, size: 0x1, def value: None
  bool ____isRefreshing;

  /// @brief Field _localPlayer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer* ____localPlayer;

  /// @brief Field _joinPolicy, offset: 0xa8, size: 0x4, def value: None
  ::Oculus::Platform::RoomJoinPolicy ____joinPolicy;

  /// @brief Field _partyEnabled, offset: 0xac, size: 0x1, def value: None
  bool ____partyEnabled;

  /// @brief Field _waitingOnRoomCreate, offset: 0xad, size: 0x1, def value: None
  bool ____waitingOnRoomCreate;

  /// @brief Field _roomDataStore, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____roomDataStore;

  /// @brief Field _partyPlayers, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>* ____partyPlayers;

  /// @brief Field _otherPlayers, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*>* ____otherPlayers;

  /// @brief Field partySizeChangedEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___partySizeChangedEvent;

  /// @brief Field partyChangedEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___partyChangedEvent;

  /// @brief Field inviteRequestedEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___inviteRequestedEvent;

  /// @brief Field kConnectionTypeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionTypeKey{ u"connection" };

  /// @brief Field kConnectionTypeOculus offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionTypeOculus{ u"oculus" };

  /// @brief Field kConnectionTypeLiteNetLib offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionTypeLiteNetLib{ u"litenetlib" };

  /// @brief Field kCurrentPartySizeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentPartySizeKey{ u"currentPartySize" };

  /// @brief Field kDifficultiesKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultiesKey{ u"difficulties" };

  /// @brief Field kModifiersKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kModifiersKey{ u"modifiers" };

  /// @brief Field kSongPacksKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kSongPacksKey{ u"songPacks" };

  /// @brief Field kMaxPlayerCountKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kMaxPlayerCountKey{ u"maxPlayerCount" };

  /// @brief Field kDiscoveryPolicyKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDiscoveryPolicyKey{ u"discoveryPolicy" };

  /// @brief Field kInvitePolicyKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kInvitePolicyKey{ u"invitePolicy" };

  /// @brief Field kGameplayServerModeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameplayServerModeKey{ u"gameplayServerMode" };

  /// @brief Field kSongSelectionModeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kSongSelectionModeKey{ u"songSelectionMode" };

  /// @brief Field kGameplayServerControlSettingsKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameplayServerControlSettingsKey{ u"gameplayServerControlSettings" };

  /// @brief Field kAutoRefreshRate offset 0xffffffff size 0x4
  static constexpr float_t kAutoRefreshRate{ 30.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusNetworkPlayerModel, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____platformUserModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____lastRefreshTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____isRefreshing) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____localPlayer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____joinPolicy) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____partyEnabled) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____waitingOnRoomCreate) == 0xad, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____roomDataStore) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____partyPlayers) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ____otherPlayers) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ___partySizeChangedEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ___partyChangedEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusNetworkPlayerModel, ___inviteRequestedEvent) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusNetworkPlayerModel*, "", "OculusNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusNetworkPlayerModel__OculusNetworkPlayer*, "", "OculusNetworkPlayerModel/OculusNetworkPlayer");
NEED_NO_BOX(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass50_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass50_0");
NEED_NO_BOX(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass51_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass51_0");
NEED_NO_BOX(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass55_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass55_0");
NEED_NO_BOX(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusNetworkPlayerModel____c__DisplayClass64_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass64_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, "", "OculusNetworkPlayerModel/<HandleRoomInviteReceived>d__51");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusNetworkPlayerModel___Start_d__42, "", "OculusNetworkPlayerModel/<Start>d__42");
