#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayer.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59caabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59caac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isReady", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isMe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isMe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59caacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isMe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_userId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59caad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_userName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59caaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_compatibilityVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_compatibilityVersion)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59cab04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_compatibilityVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_sortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_sortIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59cab48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_sortIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_autoConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_autoConnect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59cab60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_autoConnect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_inactiveByDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_inactiveByDefault)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59cab78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_inactiveByDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cab90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isConnected", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59caba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::MockPlayer::set_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59cabb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_multiplayerAvatarsData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_activeHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerActiveHand (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_activeHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cabc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_activeHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_activeHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::GlobalNamespace::MultiplayerActiveHand)>(&::GlobalNamespace::MockPlayer::set_activeHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cabd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_activeHand", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cabd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isConnectionOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cabe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isConnectionOwner", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_disconnectedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cabe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_disconnectedReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59cabf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_offsetSyncTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_hasValidLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_hasValidLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cacc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_hasValidLatency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_currentLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_currentLatency)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59caca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_currentLatency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isKicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isKicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cacd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isKicked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isKicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isKicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cacd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isKicked", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_currentPartySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_currentPartySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_currentPartySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_currentPartySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(int32_t)>(&::GlobalNamespace::MockPlayer::set_currentPartySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cace8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_currentPartySize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59cacf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_selectionMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::MockPlayer::set_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59cad08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_selectionMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59cad20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_configuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::MockPlayer::set_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59cad34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_configuration", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isMyPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isMyPartyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isMyPartyOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isMyPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isMyPartyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isMyPartyOwner", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_connectedPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer* (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_connectedPlayer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cad58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_connectedPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_canJoin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_canJoin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_requiresPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_requiresPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_requiresPassword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_requiresPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_requiresPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_requiresPassword", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isWaitingOnJoin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isWaitingOnJoin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isWaitingOnJoin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isWaitingOnJoin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isWaitingOnJoin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isWaitingOnJoin", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_canInvite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_canInvite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canInvite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_canInvite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_canInvite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canInvite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isWaitingOnInvite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isWaitingOnInvite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isWaitingOnInvite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isWaitingOnInvite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isWaitingOnInvite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cad9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isWaitingOnInvite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_canKick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_canKick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canKick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_canKick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_canKick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cadac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canKick", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_canLeave
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_canLeave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cadb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canLeave", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_canLeave
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_canLeave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cadbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canLeave", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_canBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_canBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cadc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_canBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_canBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cadcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canBlock", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_canUnblock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_canUnblock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cadd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canUnblock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_canUnblock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_canUnblock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59caddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canUnblock", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isPlayer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59cade4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isPlayer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59cae94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isPlayer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isDedicatedServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isDedicatedServer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59caf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isDedicatedServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isDedicatedServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isDedicatedServer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59cafe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isDedicatedServer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_wantsToPlayNextLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_wantsToPlayNextLevel)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59cb044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_wantsToPlayNextLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_wantsToPlayNextLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_wantsToPlayNextLevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59cb090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_wantsToPlayNextLevel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_wasActiveAtLevelStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_wasActiveAtLevelStart)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59cb0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_wasActiveAtLevelStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_wasActiveAtLevelStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_wasActiveAtLevelStart)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59cb138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_wasActiveAtLevelStart", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isActive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59cb194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isActive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59cb1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_finishedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_finishedLevel)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59cb23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_finishedLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_finishedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_finishedLevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59cb288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_finishedLevel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.get_isTerminating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::get_isTerminating)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59cb2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isTerminating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.set_isTerminating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::set_isTerminating)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59cb330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isTerminating", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::GlobalNamespace::MockPlayerSettings*, bool)>(&::GlobalNamespace::MockPlayer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59cb38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerSettings*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cb434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)(::StringW, bool)>(&::GlobalNamespace::MockPlayer::SetState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59caef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SetState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayer::*)(::StringW)>(&::GlobalNamespace::MockPlayer::HasState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59cae30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "HasState", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::BeatmapDataLoader*, ::GlobalNamespace::EnvironmentsListModel*,
    ::GlobalNamespace::BeatmapCharacteristicCollection*, ::GlobalNamespace::NodePoseSyncStateManager*)>(&::GlobalNamespace::MockPlayer::Connect)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x59cb438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Disconnect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59cc480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Unblock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Unblock)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Unblock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.SendJoinResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::SendJoinResponse)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SendJoinResponse", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.SendInviteResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(bool)>(&::GlobalNamespace::MockPlayer::SendInviteResponse)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SendInviteResponse", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Block)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Block", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Leave
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Leave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cc56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Leave", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Kick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Kick)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Kick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Invite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Invite)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Invite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::StringW)>(&::GlobalNamespace::MockPlayer::Join)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::Join)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cc618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.SimulateFail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::SimulateFail)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59cc650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SimulateFail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.SimulateGiveUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::SimulateGiveUp)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59cc674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SimulateGiveUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.SimulateReturnToMainMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)()>(&::GlobalNamespace::MockPlayer::SimulateReturnToMainMenu)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59cc698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SimulateReturnToMainMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.RecommendBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::GlobalNamespace::BeatmapDifficulty, ::StringW)>(
    &::GlobalNamespace::MockPlayer::RecommendBeatmapLevel)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59cc740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(),
                                                             { "RecommendBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayer.RecommendGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayer::*)(::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::MockPlayer::RecommendGameplayModifiers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59cc754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "RecommendGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isMe_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isMe_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isMe_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMe_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isConnected_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isConnected_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isConnected_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnected_k__BackingField = value;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::MockPlayer::__cordl_internal_get__multiplayerAvatarsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarsData_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::MockPlayer::__cordl_internal_get__multiplayerAvatarsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarsData_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__multiplayerAvatarsData_k__BackingField(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerAvatarsData_k__BackingField = value;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand& GlobalNamespace::MockPlayer::__cordl_internal_get__activeHand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeHand_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand const& GlobalNamespace::MockPlayer::__cordl_internal_get__activeHand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeHand_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__activeHand_k__BackingField(::GlobalNamespace::MultiplayerActiveHand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeHand_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isConnectionOwner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isConnectionOwner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isConnectionOwner_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isKicked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isKicked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isKicked_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isKicked_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::MockPlayer::__cordl_internal_get__currentPartySize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPartySize_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MockPlayer::__cordl_internal_get__currentPartySize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPartySize_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__currentPartySize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPartySize_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::MockPlayer::__cordl_internal_get__selectionMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::MockPlayer::__cordl_internal_get__selectionMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::MockPlayer::__cordl_internal_get__configuration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::MockPlayer::__cordl_internal_get__configuration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isMyPartyOwner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMyPartyOwner_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isMyPartyOwner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMyPartyOwner_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isMyPartyOwner_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMyPartyOwner_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__requiresPassword_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresPassword_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__requiresPassword_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresPassword_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__requiresPassword_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiresPassword_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isWaitingOnJoin_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWaitingOnJoin_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isWaitingOnJoin_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWaitingOnJoin_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isWaitingOnJoin_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isWaitingOnJoin_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__canInvite_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canInvite_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__canInvite_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canInvite_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__canInvite_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canInvite_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isWaitingOnInvite_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWaitingOnInvite_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isWaitingOnInvite_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWaitingOnInvite_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isWaitingOnInvite_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isWaitingOnInvite_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__canKick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canKick_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__canKick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canKick_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__canKick_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canKick_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__canLeave_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canLeave_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__canLeave_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canLeave_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__canLeave_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canLeave_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__canBlock_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBlock_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__canBlock_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBlock_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__canBlock_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canBlock_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__canUnblock_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canUnblock_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__canUnblock_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canUnblock_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__canUnblock_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canUnblock_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MockPlayer::__cordl_internal_get__isReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReady;
}
constexpr bool const& GlobalNamespace::MockPlayer::__cordl_internal_get__isReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReady;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__isReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isReady = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::MockPlayer::__cordl_internal_get__playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::MockPlayer::__cordl_internal_get__playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__playerState(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerState = value;
}
constexpr ::GlobalNamespace::MockPlayerSettings*& GlobalNamespace::MockPlayer::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::GlobalNamespace::MockPlayerSettings* const& GlobalNamespace::MockPlayer::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__settings(::GlobalNamespace::MockPlayerSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& GlobalNamespace::MockPlayer::__cordl_internal_get__fsm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fsm;
}
constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine* const& GlobalNamespace::MockPlayer::__cordl_internal_get__fsm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fsm;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fsm = value;
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::MockPlayer::__cordl_internal_get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::MockPlayer::__cordl_internal_get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::MockPlayer::__cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayRpcManager = value;
}
inline bool GlobalNamespace::MockPlayer::get_isReady() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isReady(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isReady", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isMe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isMe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayer::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayer::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayer::get_compatibilityVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_compatibilityVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MockPlayer::get_sortIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_sortIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::get_autoConnect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_autoConnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::get_inactiveByDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_inactiveByDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isConnected(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isConnected", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::MockPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_multiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_multiplayerAvatarsData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::MockPlayer::get_activeHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_activeHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerActiveHand>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_activeHand(::GlobalNamespace::MultiplayerActiveHand value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_activeHand", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isConnectionOwner(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isConnectionOwner", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::MockPlayer::get_disconnectedReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_disconnectedReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MockPlayer::get_offsetSyncTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_offsetSyncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::get_hasValidLatency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_hasValidLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MockPlayer::get_currentLatency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_currentLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::get_isKicked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isKicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isKicked(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isKicked", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MockPlayer::get_currentPartySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_currentPartySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_currentPartySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_currentPartySize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::MockPlayer::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_selectionMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_selectionMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::MockPlayer::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_configuration", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isMyPartyOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isMyPartyOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isMyPartyOwner(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isMyPartyOwner", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::MockPlayer::get_connectedPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_connectedPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::get_canJoin() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::get_requiresPassword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_requiresPassword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_requiresPassword(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_requiresPassword", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isWaitingOnJoin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isWaitingOnJoin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isWaitingOnJoin(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isWaitingOnJoin", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_canInvite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canInvite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_canInvite(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canInvite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isWaitingOnInvite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isWaitingOnInvite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isWaitingOnInvite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isWaitingOnInvite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_canKick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canKick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_canKick(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canKick", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_canLeave() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canLeave", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_canLeave(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canLeave", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_canBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_canBlock(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canBlock", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_canUnblock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_canUnblock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_canUnblock(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_canUnblock", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isPlayer(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isPlayer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isDedicatedServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isDedicatedServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isDedicatedServer(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isDedicatedServer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_wantsToPlayNextLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_wantsToPlayNextLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_wantsToPlayNextLevel(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_wantsToPlayNextLevel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_wasActiveAtLevelStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_wasActiveAtLevelStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_wasActiveAtLevelStart(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_wasActiveAtLevelStart", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isActive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_finishedLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_finishedLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_finishedLevel(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_finishedLevel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayer::get_isTerminating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "get_isTerminating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::set_isTerminating(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "set_isTerminating", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPlayer::_ctor(::GlobalNamespace::MockPlayerSettings* settings, bool isLocalPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerSettings*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, isLocalPlayer);
}
inline void GlobalNamespace::MockPlayer::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayer::SetState(::StringW state, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SetState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state, value);
}
inline bool GlobalNamespace::MockPlayer::HasState(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "HasState", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GlobalNamespace::MockPlayer::Connect(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                 ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                 ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                 ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, beatmapLevelsModel, beatmapDataLoader, environmentsListModel, beatmapCharacteristicCollection,
                                                   nodePoseSyncStateManager);
}
inline void GlobalNamespace::MockPlayer::Disconnect() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::Unblock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Unblock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::SendJoinResponse(bool accept) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SendJoinResponse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accept);
}
inline void GlobalNamespace::MockPlayer::SendInviteResponse(bool accept) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SendInviteResponse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accept);
}
inline void GlobalNamespace::MockPlayer::Block() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Block", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::Leave() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Leave", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::Kick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Kick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::Invite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "Invite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::Join(::StringW password) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password);
}
inline void GlobalNamespace::MockPlayer::Join() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayer*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::SimulateFail() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SimulateFail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::SimulateGiveUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SimulateGiveUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::SimulateReturnToMainMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "SimulateReturnToMainMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayer::RecommendBeatmapLevel(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::StringW beatmapLevelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(),
                                                           { "RecommendBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapDifficulty, beatmapLevelId);
}
inline void GlobalNamespace::MockPlayer::RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayer*>(), { "RecommendGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers);
}
inline ::GlobalNamespace::MockPlayer* GlobalNamespace::MockPlayer::New_ctor(::GlobalNamespace::MockPlayerSettings* settings, bool isLocalPlayer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayer*>(settings, isLocalPlayer));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr GlobalNamespace::MockPlayer::operator ::GlobalNamespace::IBeatSaberConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::MockPlayer::i___GlobalNamespace__IBeatSaberConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::MockPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MockPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
constexpr GlobalNamespace::MockPlayer::operator ::GlobalNamespace::INetworkPlayer*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayer"
constexpr ::GlobalNamespace::INetworkPlayer* GlobalNamespace::MockPlayer::i___GlobalNamespace__INetworkPlayer() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayer::MockPlayer() {}
