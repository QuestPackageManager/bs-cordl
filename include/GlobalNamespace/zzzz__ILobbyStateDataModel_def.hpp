#pragma once
// IWYU pragma private; include "GlobalNamespace/ILobbyStateDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILobbyStateDataModel)
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
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
// Forward declare root types
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILobbyStateDataModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILobbyStateDataModel
class CORDL_TYPE ILobbyStateDataModel {
public:
  // Declarations
  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* connectedPlayers;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_localPlayer)) ::GlobalNamespace::IConnectedPlayer* localPlayer;

  __declspec(property(get = get_rawConnectedPlayers)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* rawConnectedPlayers;

  /// @brief Method Activate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Deactivate();

  /// @brief Method GetPlayerById, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* GetPlayerById(::StringW userId);

  /// @brief Method add_playerConnectedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method get_configuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();

  /// @brief Method get_isConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Method get_localPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_rawConnectedPlayers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers();

  /// @brief Method remove_playerConnectedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyStateDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILobbyStateDataModel(ILobbyStateDataModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILobbyStateDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyStateDataModel*, "", "ILobbyStateDataModel");
