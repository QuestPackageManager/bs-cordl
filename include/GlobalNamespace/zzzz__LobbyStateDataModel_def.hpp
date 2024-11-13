#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyStateDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LobbyStateDataModel)
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyStateDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyStateDataModel);
// Type: ::LobbyStateDataModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LobbyStateDataModel*
class CORDL_TYPE LobbyStateDataModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _configuration, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration)) ::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _connectedPlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayers,
                      put = __cordl_internal_set__connectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _connectedPlayers;

  /// @brief Field _connectedPlayersById, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayersById,
                      put = __cordl_internal_set__connectedPlayersById)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* _connectedPlayersById;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__unifiedNetworkPlayerModel,
                      put = __cordl_internal_set__unifiedNetworkPlayerModel)) ::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* connectedPlayers;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_localPlayer)) ::GlobalNamespace::IConnectedPlayer* localPlayer;

  /// @brief Field playerConnectedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_playerConnectedEvent, put = __cordl_internal_set_playerConnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDisconnectedEvent,
                      put = __cordl_internal_set_playerDisconnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;

  __declspec(property(get = get_rawConnectedPlayers)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* rawConnectedPlayers;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyStateDataModel"
  constexpr operator ::GlobalNamespace::ILobbyStateDataModel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Activate, addr 0x26aaca8, size 0x7d8, virtual true, abstract: false, final true
  inline void Activate();

  /// @brief Method Deactivate, addr 0x26ab480, size 0x194, virtual true, abstract: false, final true
  inline void Deactivate();

  /// @brief Method Dispose, addr 0x26ab614, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetPlayerById, addr 0x26ab618, size 0x94, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* GetPlayerById(::StringW userId);

  /// @brief Method HandleMultiplayerSessionManagerPlayerConnected, addr 0x26ab6ac, size 0x168, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleMultiplayerSessionManagerPlayerDisconnected, addr 0x26ab814, size 0x120, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  static inline ::GlobalNamespace::LobbyStateDataModel* New_ctor();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__connectedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get__connectedPlayers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__connectedPlayersById();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>*> const&
  __cordl_internal_get__connectedPlayersById() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __cordl_internal_get__unifiedNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const& __cordl_internal_get__unifiedNetworkPlayerModel() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerConnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerDisconnectedEvent() const;

  constexpr void __cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__connectedPlayersById(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr void __cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method .ctor, addr 0x26ab934, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerConnectedEvent, addr 0x26aa7e4, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0x26aa944, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method get_configuration, addr 0x26aac94, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayers, addr 0x26aabe8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();

  /// @brief Method get_isConnected, addr 0x26aaaa4, size 0xa4, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_localPlayer, addr 0x26aab48, size 0xa0, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_rawConnectedPlayers, addr 0x26aabf0, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers();

  /// @brief Convert to "::GlobalNamespace::ILobbyStateDataModel"
  constexpr ::GlobalNamespace::ILobbyStateDataModel* i___GlobalNamespace__ILobbyStateDataModel() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_playerConnectedEvent, addr 0x26aa894, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0x26aa9f4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyStateDataModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyStateDataModel(LobbyStateDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyStateDataModel(LobbyStateDataModel const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13071 };

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
