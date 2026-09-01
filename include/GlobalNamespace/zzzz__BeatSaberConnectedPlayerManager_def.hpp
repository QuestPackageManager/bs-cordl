#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatSaberConnectedPlayerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatSaberConnectedPlayerManager)
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
struct BeatSaberConnectedPlayerManager_BeatSaberMessageType;
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
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class IConnectedPlayerFactory_3;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
struct MultiplayerActiveHand;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
class PlayerAvatarPacket;
}
namespace GlobalNamespace {
class PlayerControllerDataPacket;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatSaberConnectedPlayerManager_BeatSaberMessageType;
}
namespace GlobalNamespace {
class BeatSaberConnectedPlayerManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType);
MARK_REF_T(::GlobalNamespace::BeatSaberConnectedPlayerManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, "", "BeatSaberConnectedPlayerManager/BeatSaberMessageType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatSaberConnectedPlayerManager*, "", "BeatSaberConnectedPlayerManager");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatSaberConnectedPlayerManager/BeatSaberMessageType
struct CORDL_TYPE BeatSaberConnectedPlayerManager_BeatSaberMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __BeatSaberConnectedPlayerManager_BeatSaberMessageType_Unwrapped
  enum struct __BeatSaberConnectedPlayerManager_BeatSaberMessageType_Unwrapped : uint8_t {
    __E_PlayerAvatarUpdate = static_cast<uint8_t>(0x0u),
    __E_PlayerControllerDataUpdate = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatSaberConnectedPlayerManager_BeatSaberMessageType_Unwrapped() const noexcept {
    return static_cast<__BeatSaberConnectedPlayerManager_BeatSaberMessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberConnectedPlayerManager_BeatSaberMessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr BeatSaberConnectedPlayerManager_BeatSaberMessageType(uint8_t value__) noexcept;

  /// @brief Field PlayerAvatarUpdate value: U8(0)
  static ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType const PlayerAvatarUpdate;

  /// @brief Field PlayerControllerDataUpdate value: U8(1)
  static ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType const PlayerControllerDataUpdate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18838 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType) == 0x1, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaberPlayerIdentityPacketData, ConnectedPlayerManager`3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>, MultiplayerActiveHand, MultiplayerAvatarsData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberConnectedPlayerManager
class CORDL_TYPE BeatSaberConnectedPlayerManager : public ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                      ::GlobalNamespace::BeatSaberPlayerIdentityPacketData> {
public:
  // Declarations
  using BeatSaberMessageType = ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType;

  /// @brief Field _beatSaberMessageSerializer, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__beatSaberMessageSerializer,
                      put = __cordl_internal_set__beatSaberMessageSerializer)) ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType,
                                                                                                                            ::GlobalNamespace::IBeatSaberConnectedPlayer*>* _beatSaberMessageSerializer;

  /// @brief Field _localPlayerActiveHand, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get__localPlayerActiveHand, put = __cordl_internal_set__localPlayerActiveHand)) ::GlobalNamespace::MultiplayerActiveHand _localPlayerActiveHand;

  /// @brief Field _localPlayerAvatars, offset 0x118, size 0x18
  __declspec(property(get = __cordl_internal_get__localPlayerAvatars, put = __cordl_internal_set__localPlayerAvatars)) ::GlobalNamespace::MultiplayerAvatarsData _localPlayerAvatars;

  /// @brief Field playerAvatarChangedEvent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAvatarChangedEvent,
                      put = __cordl_internal_set_playerAvatarChangedEvent)) ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* playerAvatarChangedEvent;

  /// @brief Field playerControllerDataChangedEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_playerControllerDataChangedEvent,
                      put = __cordl_internal_set_playerControllerDataChangedEvent)) ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* playerControllerDataChangedEvent;

  /// @brief Method DisposeGameSpecificResources, addr 0x32a7fc8, size 0xe0, virtual true, abstract: false, final false
  inline void DisposeGameSpecificResources();

  /// @brief Method HandleGameSpecificConnected, addr 0x32a7ae0, size 0x3c, virtual true, abstract: false, final false
  inline void HandleGameSpecificConnected();

  /// @brief Method HandleGameSpecificPlayerAdded, addr 0x32a7b1c, size 0x4, virtual true, abstract: false, final false
  inline void HandleGameSpecificPlayerAdded(::GlobalNamespace::BeatSaberConnectedPlayer* player);

  /// @brief Method HandleGameSpecificPlayerIdentityUpdate, addr 0x32a7b20, size 0x140, virtual true, abstract: false, final false
  inline void HandleGameSpecificPlayerIdentityUpdate(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData, ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerAvatarUpdate, addr 0x32a7dcc, size 0xd8, virtual false, abstract: false, final false
  inline void HandlePlayerAvatarUpdate(::GlobalNamespace::PlayerAvatarPacket* packet, ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerControllerDataUpdate, addr 0x32a7ea4, size 0xcc, virtual false, abstract: false, final false
  inline void HandlePlayerControllerDataUpdate(::GlobalNamespace::PlayerControllerDataPacket* packet, ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer);

  static inline ::GlobalNamespace::BeatSaberConnectedPlayerManager*
  New_ctor(::GlobalNamespace::IConnectionManager* connectionManager,
           ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                        ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory);

  static inline ::GlobalNamespace::BeatSaberConnectedPlayerManager*
  New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
           ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                        ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory);

  /// @brief Method SetLocalPlayerActiveHand, addr 0x32a7d3c, size 0x90, virtual false, abstract: false, final false
  inline void SetLocalPlayerActiveHand(::GlobalNamespace::MultiplayerActiveHand activeHand);

  /// @brief Method SetLocalPlayerAvatar, addr 0x32a7c60, size 0xdc, virtual false, abstract: false, final false
  inline void SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData);

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
  __cordl_internal_get__beatSaberMessageSerializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*&
  __cordl_internal_get__beatSaberMessageSerializer();

  constexpr ::GlobalNamespace::MultiplayerActiveHand const& __cordl_internal_get__localPlayerActiveHand() const;

  constexpr ::GlobalNamespace::MultiplayerActiveHand& __cordl_internal_get__localPlayerActiveHand();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__localPlayerAvatars() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__localPlayerAvatars();

  constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& __cordl_internal_get_playerAvatarChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& __cordl_internal_get_playerAvatarChangedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& __cordl_internal_get_playerControllerDataChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& __cordl_internal_get_playerControllerDataChangedEvent();

  constexpr void __cordl_internal_set__beatSaberMessageSerializer(
      ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__localPlayerActiveHand(::GlobalNamespace::MultiplayerActiveHand value);

  constexpr void __cordl_internal_set__localPlayerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Method .ctor, addr 0x32a7700, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectionManager* connectionManager,
                    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                 ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory);

  /// @brief Method .ctor, addr 0x32a77b8, size 0x328, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
                    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                 ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory);

  /// @brief Method add_playerAvatarChangedEvent, addr 0x32a7400, size 0xc0, virtual false, abstract: false, final false
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Method add_playerControllerDataChangedEvent, addr 0x32a7580, size 0xc0, virtual false, abstract: false, final false
  inline void add_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Method remove_playerAvatarChangedEvent, addr 0x32a74c0, size 0xc0, virtual false, abstract: false, final false
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Method remove_playerControllerDataChangedEvent, addr 0x32a7640, size 0xc0, virtual false, abstract: false, final false
  inline void remove_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberConnectedPlayerManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberConnectedPlayerManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberConnectedPlayerManager(BeatSaberConnectedPlayerManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberConnectedPlayerManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberConnectedPlayerManager(BeatSaberConnectedPlayerManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18839 };

  /// @brief Field playerAvatarChangedEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* ___playerAvatarChangedEvent;

  /// @brief Field playerControllerDataChangedEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* ___playerControllerDataChangedEvent;

  /// @brief Field _localPlayerAvatars, offset: 0x118, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____localPlayerAvatars;

  /// @brief Field _localPlayerActiveHand, offset: 0x130, size: 0x1, def value: None
  ::GlobalNamespace::MultiplayerActiveHand ____localPlayerActiveHand;

  /// @brief Field _beatSaberMessageSerializer, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* ____beatSaberMessageSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayerManager, ___playerAvatarChangedEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayerManager, ___playerControllerDataChangedEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayerManager, ____localPlayerAvatars) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayerManager, ____localPlayerActiveHand) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberConnectedPlayerManager, ____beatSaberMessageSerializer) == 0x138, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatSaberConnectedPlayerManager) == 0x140, "Size mismatch!");

} // namespace GlobalNamespace
