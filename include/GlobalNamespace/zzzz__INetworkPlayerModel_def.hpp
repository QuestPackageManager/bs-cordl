#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkPlayerModel)
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INetworkPlayerModel);
// Type: ::INetworkPlayerModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12720))
// CS Name: ::INetworkPlayerModel*
class CORDL_TYPE INetworkPlayerModel {
public:
  // Declarations
  __declspec(property(get = get_discoveryEnabled, put = set_discoveryEnabled)) bool discoveryEnabled;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  __declspec(property(get = get_hasNetworkingFailed)) bool hasNetworkingFailed;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_partyPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers;

  __declspec(property(get = get_otherPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers;

  __declspec(property(get = get_connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;

  /// @brief Method get_discoveryEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_discoveryEnabled();

  /// @brief Method set_discoveryEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_discoveryEnabled(bool value);

  /// @brief Method get_localPlayerIsPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_hasNetworkingFailed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_hasNetworkingFailed();

  /// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_currentPartySize();

  /// @brief Method get_partyPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_partyPlayers();

  /// @brief Method get_otherPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_otherPlayers();

  /// @brief Method get_connectedPlayerManager addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();

  /// @brief Method add_connectedPlayerManagerCreatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerCreatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_connectedPlayerManagerDestroyedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerDestroyedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* config);

  /// @brief Method DestroyPartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DestroyPartyConnection();

  // Ctor Parameters [CppParam { name: "", ty: "INetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetworkPlayerModel(INetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkPlayerModel(INetworkPlayerModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkPlayerModel*, "", "INetworkPlayerModel");
