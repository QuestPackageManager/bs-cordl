#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLobbyConnectionController)
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __MultiplayerLobbyConnectionController__LobbyConnectionType;
}
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct __MultiplayerLobbyConnectionController__LobbyConnectionState;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerLobbyConnectionController__LobbyConnectionState;
}
namespace GlobalNamespace {
struct __MultiplayerLobbyConnectionController__LobbyConnectionType;
}
namespace GlobalNamespace {
class MultiplayerLobbyConnectionController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState);
MARK_VAL_T(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyConnectionController);
// Type: ::LobbyConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4511))
// CS Name: ::MultiplayerLobbyConnectionController::LobbyConnectionState
struct CORDL_TYPE __MultiplayerLobbyConnectionController__LobbyConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerLobbyConnectionController__LobbyConnectionState_Unwrapped
  enum struct ____MultiplayerLobbyConnectionController__LobbyConnectionState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_ConnectionFailed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerLobbyConnectionController__LobbyConnectionState_Unwrapped() const noexcept {
    return static_cast<____MultiplayerLobbyConnectionController__LobbyConnectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerLobbyConnectionController__LobbyConnectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLobbyConnectionController__LobbyConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState const None;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState const Connecting;

  /// @brief Field Connected value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState const Connected;

  /// @brief Field ConnectionFailed value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState const ConnectionFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LobbyConnectionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4512))
// CS Name: ::MultiplayerLobbyConnectionController::LobbyConnectionType
struct CORDL_TYPE __MultiplayerLobbyConnectionController__LobbyConnectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerLobbyConnectionController__LobbyConnectionType_Unwrapped
  enum struct ____MultiplayerLobbyConnectionController__LobbyConnectionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PartyHost = static_cast<int32_t>(0x1),
    __E_PartyClient = static_cast<int32_t>(0x2),
    __E_QuickPlay = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerLobbyConnectionController__LobbyConnectionType_Unwrapped() const noexcept {
    return static_cast<____MultiplayerLobbyConnectionController__LobbyConnectionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerLobbyConnectionController__LobbyConnectionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLobbyConnectionController__LobbyConnectionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType const None;

  /// @brief Field PartyHost value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType const PartyHost;

  /// @brief Field PartyClient value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType const PartyClient;

  /// @brief Field QuickPlay value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType const QuickPlay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLobbyConnectionController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4511)), TypeDefinitionIndex(TypeDefinitionIndex(12708)), TypeDefinitionIndex(TypeDefinitionIndex(4512)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4513)) CS Name: ::MultiplayerLobbyConnectionController*
class CORDL_TYPE MultiplayerLobbyConnectionController : public ::System::Object {
public:
  // Declarations
  using LobbyConnectionType = ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType;

  using LobbyConnectionState = ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x18, size 0x8
  __declspec(property(get = __get__unifiedNetworkPlayerModel, put = __set__unifiedNetworkPlayerModel))::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Field connectionSuccessEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_connectionSuccessEvent, put = __set_connectionSuccessEvent))::System::Action* connectionSuccessEvent;

  /// @brief Field connectionFailedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_connectionFailedEvent, put = __set_connectionFailedEvent))::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,
                                                                                                               ::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  /// @brief Field <connectionState>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__connectionState_k__BackingField,
                      put = __set__connectionState_k__BackingField))::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState _connectionState_k__BackingField;

  /// @brief Field <connectionType>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__connectionType_k__BackingField,
                      put = __set__connectionType_k__BackingField))::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType _connectionType_k__BackingField;

  /// @brief Field <connectionFailedReason>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__connectionFailedReason_k__BackingField,
                      put = __set__connectionFailedReason_k__BackingField))::GlobalNamespace::ConnectionFailedReason _connectionFailedReason_k__BackingField;

  /// @brief Field _partyConfig, offset 0x40, size 0x8
  __declspec(property(get = __get__partyConfig, put = __set__partyConfig))::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* _partyConfig;

  /// @brief Field _retryAttemptsLeft, offset 0x48, size 0x4
  __declspec(property(get = __get__retryAttemptsLeft, put = __set__retryAttemptsLeft)) int32_t _retryAttemptsLeft;

  __declspec(property(get = get_connectionState, put = set_connectionState))::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState connectionState;

  __declspec(property(get = get_connectionType, put = set_connectionType))::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType;

  __declspec(property(get = get_connectionFailedReason, put = set_connectionFailedReason))::GlobalNamespace::ConnectionFailedReason connectionFailedReason;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __get__unifiedNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const& __get__unifiedNetworkPlayerModel() const;

  constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr ::System::Action*& __get_connectionSuccessEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_connectionSuccessEvent() const;

  constexpr void __set_connectionSuccessEvent(::System::Action* value);

  constexpr ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*& __get_connectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*> const&
  __get_connectionFailedEvent() const;

  constexpr void __set_connectionFailedEvent(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState& __get__connectionState_k__BackingField();

  constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState const& __get__connectionState_k__BackingField() const;

  constexpr void __set__connectionState_k__BackingField(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState value);

  constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType& __get__connectionType_k__BackingField();

  constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType const& __get__connectionType_k__BackingField() const;

  constexpr void __set__connectionType_k__BackingField(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType value);

  constexpr ::GlobalNamespace::ConnectionFailedReason& __get__connectionFailedReason_k__BackingField();

  constexpr ::GlobalNamespace::ConnectionFailedReason const& __get__connectionFailedReason_k__BackingField() const;

  constexpr void __set__connectionFailedReason_k__BackingField(::GlobalNamespace::ConnectionFailedReason value);

  constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*& __get__partyConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*> const& __get__partyConfig() const;

  constexpr void __set__partyConfig(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* value);

  constexpr int32_t& __get__retryAttemptsLeft();

  constexpr int32_t const& __get__retryAttemptsLeft() const;

  constexpr void __set__retryAttemptsLeft(int32_t value);

  /// @brief Method add_connectionSuccessEvent addr 0x23614a4 size 0x9c virtual false final false
  inline void add_connectionSuccessEvent(::System::Action* value);

  /// @brief Method remove_connectionSuccessEvent addr 0x2361540 size 0x9c virtual false final false
  inline void remove_connectionSuccessEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent addr 0x23615dc size 0xb0 virtual false final false
  inline void add_connectionFailedEvent(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_connectionFailedEvent addr 0x236168c size 0xb0 virtual false final false
  inline void remove_connectionFailedEvent(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method get_connectionState addr 0x236173c size 0x8 virtual false final false
  inline ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState get_connectionState();

  /// @brief Method set_connectionState addr 0x2361744 size 0x8 virtual false final false
  inline void set_connectionState(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState value);

  /// @brief Method get_connectionType addr 0x236174c size 0x8 virtual false final false
  inline ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType get_connectionType();

  /// @brief Method set_connectionType addr 0x2361754 size 0x8 virtual false final false
  inline void set_connectionType(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType value);

  /// @brief Method get_connectionFailedReason addr 0x236175c size 0x8 virtual false final false
  inline ::GlobalNamespace::ConnectionFailedReason get_connectionFailedReason();

  /// @brief Method set_connectionFailedReason addr 0x2361764 size 0x8 virtual false final false
  inline void set_connectionFailedReason(::GlobalNamespace::ConnectionFailedReason value);

  /// @brief Method CreateParty addr 0x236176c size 0x450 virtual false final false
  inline void CreateParty(::GlobalNamespace::CreateServerFormData data);

  /// @brief Method ConnectToParty addr 0x2361e4c size 0x324 virtual false final false
  inline void ConnectToParty(::StringW serverCode);

  /// @brief Method CreateOrConnectToDestinationParty addr 0x2362170 size 0x414 virtual false final false
  inline void CreateOrConnectToDestinationParty(::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination);

  /// @brief Method ConnectToServer addr 0x2362584 size 0x23c virtual false final false
  inline void ConnectToServer(::GlobalNamespace::INetworkPlayer* server, ::StringW password);

  /// @brief Method ConnectToMatchmaking addr 0x23627c0 size 0x334 virtual false final false
  inline void ConnectToMatchmaking(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool allowSongSelection);

  /// @brief Method LeaveLobby addr 0x2362af4 size 0xa8 virtual false final false
  inline void LeaveLobby();

  /// @brief Method ClearCurrentConnection addr 0x2362b9c size 0x8 virtual false final false
  inline void ClearCurrentConnection();

  /// @brief Method HandleMultiplayerSessionManagerConnected addr 0x2362ba4 size 0x274 virtual false final false
  inline void HandleMultiplayerSessionManagerConnected();

  /// @brief Method HandleMultiplayerSessionManagerConnectionFailed addr 0x2361bbc size 0x290 virtual false final false
  inline void HandleMultiplayerSessionManagerConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleMultiplayerSessionManagerConnectionFailedWithRetry addr 0x2362e18 size 0x12c virtual false final false
  inline void HandleMultiplayerSessionManagerConnectionFailedWithRetry(::GlobalNamespace::ConnectionFailedReason reason);

  static inline ::GlobalNamespace::MultiplayerLobbyConnectionController* New_ctor();

  /// @brief Method .ctor addr 0x2362f44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyConnectionController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyConnectionController(MultiplayerLobbyConnectionController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyConnectionController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyConnectionController(MultiplayerLobbyConnectionController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyConnectionController();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field connectionSuccessEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___connectionSuccessEvent;

  /// @brief Field connectionFailedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* ___connectionFailedEvent;

  /// @brief Field <connectionState>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState ____connectionState_k__BackingField;

  /// @brief Field <connectionType>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType ____connectionType_k__BackingField;

  /// @brief Field <connectionFailedReason>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::ConnectionFailedReason ____connectionFailedReason_k__BackingField;

  /// @brief Field _partyConfig, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* ____partyConfig;

  /// @brief Field _retryAttemptsLeft, offset: 0x48, size: 0x4, def value: None
  int32_t ____retryAttemptsLeft;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyConnectionController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState, "", "MultiplayerLobbyConnectionController/LobbyConnectionState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, "", "MultiplayerLobbyConnectionController/LobbyConnectionType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyConnectionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyConnectionController*, "", "MultiplayerLobbyConnectionController");
