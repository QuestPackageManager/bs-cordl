#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LobbyStateDataModel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyStateDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyStateDataModel);
// Type: ::LobbyStateDataModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4521))
// CS Name: ::LobbyStateDataModel*
class CORDL_TYPE LobbyStateDataModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x18, size 0x8
  __declspec(property(get = __get__unifiedNetworkPlayerModel, put = __set__unifiedNetworkPlayerModel))::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Field _connectedPlayers, offset 0x20, size 0x8
  __declspec(property(get = __get__connectedPlayers, put = __set__connectedPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _connectedPlayers;

  /// @brief Field _connectedPlayersById, offset 0x28, size 0x8
  __declspec(property(get = __get__connectedPlayersById,
                      put = __set__connectedPlayersById))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* _connectedPlayersById;

  /// @brief Field _configuration, offset 0x30, size 0x18
  __declspec(property(get = __get__configuration, put = __set__configuration))::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field playerConnectedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_playerConnectedEvent, put = __set_playerConnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_playerDisconnectedEvent, put = __set_playerDisconnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_localPlayer))::GlobalNamespace::IConnectedPlayer* localPlayer;

  __declspec(property(get = get_connectedPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* connectedPlayers;

  __declspec(property(get = get_rawConnectedPlayers))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* rawConnectedPlayers;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyStateDataModel"
  constexpr operator ::GlobalNamespace::ILobbyStateDataModel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __get__unifiedNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const& __get__unifiedNetworkPlayerModel() const;

  constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __get__connectedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get__connectedPlayers() const;

  constexpr void __set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>*& __get__connectedPlayersById();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>*> const& __get__connectedPlayersById() const;

  constexpr void __set__connectedPlayersById(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration() const;

  constexpr void __set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerConnectedEvent() const;

  constexpr void __set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerDisconnectedEvent() const;

  constexpr void __set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerConnectedEvent addr 0x2211264 size 0xb0 virtual true final true
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerConnectedEvent addr 0x2211314 size 0xb0 virtual true final true
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent addr 0x22113c4 size 0xb0 virtual true final true
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent addr 0x2211474 size 0xb0 virtual true final true
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method get_isConnected addr 0x2211524 size 0xa4 virtual true final true
  inline bool get_isConnected();

  /// @brief Method get_localPlayer addr 0x22115c8 size 0xa0 virtual true final true
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_connectedPlayers addr 0x2211668 size 0x8 virtual true final true
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();

  /// @brief Method get_rawConnectedPlayers addr 0x2211670 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers();

  /// @brief Method get_configuration addr 0x2211714 size 0x14 virtual true final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method Activate addr 0x2211728 size 0x7f0 virtual true final true
  inline void Activate();

  /// @brief Method Deactivate addr 0x2211f18 size 0x194 virtual true final true
  inline void Deactivate();

  /// @brief Method Dispose addr 0x22120ac size 0x4 virtual true final true
  inline void Dispose();

  /// @brief Method GetPlayerById addr 0x22120b0 size 0x94 virtual true final true
  inline ::GlobalNamespace::IConnectedPlayer* GetPlayerById(::StringW userId);

  /// @brief Method HandleMultiplayerSessionManagerPlayerConnected addr 0x2212144 size 0x170 virtual false final false
  inline void HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleMultiplayerSessionManagerPlayerDisconnected addr 0x22122b4 size 0x120 virtual false final false
  inline void HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  static inline ::GlobalNamespace::LobbyStateDataModel* New_ctor();

  /// @brief Method .ctor addr 0x22123d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyStateDataModel(LobbyStateDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyStateDataModel(LobbyStateDataModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyStateDataModel();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field _connectedPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* ____connectedPlayers;

  /// @brief Field _connectedPlayersById, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* ____connectedPlayersById;

  /// @brief Field _configuration, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field playerConnectedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerDisconnectedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyStateDataModel, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyStateDataModel, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyStateDataModel, ____unifiedNetworkPlayerModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyStateDataModel, ____connectedPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyStateDataModel, ____connectedPlayersById) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyStateDataModel, ____configuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyStateDataModel, ___playerConnectedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyStateDataModel, ___playerDisconnectedEvent) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyStateDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyStateDataModel*, "", "LobbyStateDataModel");
