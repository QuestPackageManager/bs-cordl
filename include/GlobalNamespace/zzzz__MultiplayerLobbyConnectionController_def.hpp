#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyConnectionController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLobbyConnectionController)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
struct MultiplayerLobbyConnectionController_LobbyConnectionState;
}
namespace GlobalNamespace {
struct MultiplayerLobbyConnectionController_LobbyConnectionType;
}
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerLobbyConnectionController_LobbyConnectionState;
}
namespace GlobalNamespace {
struct MultiplayerLobbyConnectionController_LobbyConnectionType;
}
namespace GlobalNamespace {
class MultiplayerLobbyConnectionController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState);
MARK_VAL_T(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyConnectionController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerLobbyConnectionController/LobbyConnectionState
struct CORDL_TYPE MultiplayerLobbyConnectionController_LobbyConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerLobbyConnectionController_LobbyConnectionState_Unwrapped
  enum struct __MultiplayerLobbyConnectionController_LobbyConnectionState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_ConnectionFailed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerLobbyConnectionController_LobbyConnectionState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerLobbyConnectionController_LobbyConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyConnectionController_LobbyConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerLobbyConnectionController_LobbyConnectionState(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(2)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState const Connected;

  /// @brief Field Connecting value: I32(1)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState const Connecting;

  /// @brief Field ConnectionFailed value: I32(3)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState const ConnectionFailed;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerLobbyConnectionController/LobbyConnectionType
struct CORDL_TYPE MultiplayerLobbyConnectionController_LobbyConnectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerLobbyConnectionController_LobbyConnectionType_Unwrapped
  enum struct __MultiplayerLobbyConnectionController_LobbyConnectionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PartyHost = static_cast<int32_t>(0x1),
    __E_PartyClient = static_cast<int32_t>(0x2),
    __E_QuickPlay = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerLobbyConnectionController_LobbyConnectionType_Unwrapped() const noexcept {
    return static_cast<__MultiplayerLobbyConnectionController_LobbyConnectionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyConnectionController_LobbyConnectionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerLobbyConnectionController_LobbyConnectionType(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType const None;

  /// @brief Field PartyClient value: I32(2)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType const PartyClient;

  /// @brief Field PartyHost value: I32(1)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType const PartyHost;

  /// @brief Field QuickPlay value: I32(3)
  static ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType const QuickPlay;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4587 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConnectionFailedReason, MultiplayerLobbyConnectionController::LobbyConnectionState, MultiplayerLobbyConnectionController::LobbyConnectionType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyConnectionController
class CORDL_TYPE MultiplayerLobbyConnectionController : public ::System::Object {
public:
  // Declarations
  using LobbyConnectionState = ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState;

  using LobbyConnectionType = ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType;

  /// @brief Field <connectionFailedReason>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionFailedReason_k__BackingField,
                      put = __cordl_internal_set__connectionFailedReason_k__BackingField)) ::GlobalNamespace::ConnectionFailedReason _connectionFailedReason_k__BackingField;

  /// @brief Field <connectionState>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionState_k__BackingField,
                      put = __cordl_internal_set__connectionState_k__BackingField)) ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState _connectionState_k__BackingField;

  /// @brief Field <connectionType>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionType_k__BackingField,
                      put = __cordl_internal_set__connectionType_k__BackingField)) ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType _connectionType_k__BackingField;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _partyConfig, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__partyConfig, put = __cordl_internal_set__partyConfig)) ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* _partyConfig;

  /// @brief Field _retryAttemptsLeft, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__retryAttemptsLeft, put = __cordl_internal_set__retryAttemptsLeft)) int32_t _retryAttemptsLeft;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__unifiedNetworkPlayerModel,
                      put = __cordl_internal_set__unifiedNetworkPlayerModel)) ::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Field connectionFailedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionFailedEvent,
                      put = __cordl_internal_set_connectionFailedEvent)) ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType,
                                                                                            ::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  __declspec(property(get = get_connectionFailedReason, put = set_connectionFailedReason)) ::GlobalNamespace::ConnectionFailedReason connectionFailedReason;

  __declspec(property(get = get_connectionState, put = set_connectionState)) ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState connectionState;

  /// @brief Field connectionSuccessEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionSuccessEvent, put = __cordl_internal_set_connectionSuccessEvent)) ::System::Action* connectionSuccessEvent;

  __declspec(property(get = get_connectionType, put = set_connectionType)) ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType connectionType;

  /// @brief Method ClearCurrentConnection, addr 0x3bd711c, size 0x8, virtual false, abstract: false, final false
  inline void ClearCurrentConnection();

  /// @brief Method ConnectToMatchmaking, addr 0x3bd6d48, size 0x32c, virtual false, abstract: false, final false
  inline void ConnectToMatchmaking(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool allowSongSelection);

  /// @brief Method ConnectToParty, addr 0x3bd63dc, size 0x31c, virtual false, abstract: false, final false
  inline void ConnectToParty(::StringW serverCode);

  /// @brief Method ConnectToServer, addr 0x3bd6b0c, size 0x23c, virtual false, abstract: false, final false
  inline void ConnectToServer(::GlobalNamespace::INetworkPlayer* server, ::StringW password);

  /// @brief Method CreateOrConnectToDestinationParty, addr 0x3bd66f8, size 0x414, virtual false, abstract: false, final false
  inline void CreateOrConnectToDestinationParty(::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination);

  /// @brief Method CreateParty, addr 0x3bd5d10, size 0x448, virtual false, abstract: false, final false
  inline void CreateParty(::GlobalNamespace::CreateServerFormData data);

  /// @brief Method HandleMultiplayerSessionManagerConnected, addr 0x3bd7124, size 0x274, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerConnected();

  /// @brief Method HandleMultiplayerSessionManagerConnectionFailed, addr 0x3bd6158, size 0x284, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleMultiplayerSessionManagerConnectionFailedWithRetry, addr 0x3bd7398, size 0x130, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerConnectionFailedWithRetry(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method LeaveLobby, addr 0x3bd7074, size 0xa8, virtual false, abstract: false, final false
  inline void LeaveLobby();

  static inline ::GlobalNamespace::MultiplayerLobbyConnectionController* New_ctor();

  constexpr ::GlobalNamespace::ConnectionFailedReason const& __cordl_internal_get__connectionFailedReason_k__BackingField() const;

  constexpr ::GlobalNamespace::ConnectionFailedReason& __cordl_internal_get__connectionFailedReason_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState const& __cordl_internal_get__connectionState_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState& __cordl_internal_get__connectionState_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType const& __cordl_internal_get__connectionType_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType& __cordl_internal_get__connectionType_k__BackingField();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* const& __cordl_internal_get__partyConfig() const;

  constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*& __cordl_internal_get__partyConfig();

  constexpr int32_t const& __cordl_internal_get__retryAttemptsLeft() const;

  constexpr int32_t& __cordl_internal_get__retryAttemptsLeft();

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* const& __cordl_internal_get__unifiedNetworkPlayerModel() const;

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __cordl_internal_get__unifiedNetworkPlayerModel();

  constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* const&
  __cordl_internal_get_connectionFailedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_connectionFailedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_connectionSuccessEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_connectionSuccessEvent();

  constexpr void __cordl_internal_set__connectionFailedReason_k__BackingField(::GlobalNamespace::ConnectionFailedReason value);

  constexpr void __cordl_internal_set__connectionState_k__BackingField(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState value);

  constexpr void __cordl_internal_set__connectionType_k__BackingField(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__partyConfig(::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* value);

  constexpr void __cordl_internal_set__retryAttemptsLeft(int32_t value);

  constexpr void __cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr void
  __cordl_internal_set_connectionFailedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_connectionSuccessEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bd74c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_connectionFailedEvent, addr 0x3bd5b80, size 0xb0, virtual false, abstract: false, final false
  inline void add_connectionFailedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_connectionSuccessEvent, addr 0x3bd5a48, size 0x9c, virtual false, abstract: false, final false
  inline void add_connectionSuccessEvent(::System::Action* value);

  /// @brief Method get_connectionFailedReason, addr 0x3bd5d00, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectionFailedReason get_connectionFailedReason();

  /// @brief Method get_connectionState, addr 0x3bd5ce0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState get_connectionState();

  /// @brief Method get_connectionType, addr 0x3bd5cf0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType get_connectionType();

  /// @brief Method remove_connectionFailedEvent, addr 0x3bd5c30, size 0xb0, virtual false, abstract: false, final false
  inline void remove_connectionFailedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_connectionSuccessEvent, addr 0x3bd5ae4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_connectionSuccessEvent(::System::Action* value);

  /// @brief Method set_connectionFailedReason, addr 0x3bd5d08, size 0x8, virtual false, abstract: false, final false
  inline void set_connectionFailedReason(::GlobalNamespace::ConnectionFailedReason value);

  /// @brief Method set_connectionState, addr 0x3bd5ce8, size 0x8, virtual false, abstract: false, final false
  inline void set_connectionState(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState value);

  /// @brief Method set_connectionType, addr 0x3bd5cf8, size 0x8, virtual false, abstract: false, final false
  inline void set_connectionType(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyConnectionController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyConnectionController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyConnectionController(MultiplayerLobbyConnectionController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyConnectionController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyConnectionController(MultiplayerLobbyConnectionController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4588 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field connectionSuccessEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___connectionSuccessEvent;

  /// @brief Field connectionFailedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* ___connectionFailedEvent;

  /// @brief Field <connectionState>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState ____connectionState_k__BackingField;

  /// @brief Field <connectionType>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType ____connectionType_k__BackingField;

  /// @brief Field <connectionFailedReason>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::ConnectionFailedReason ____connectionFailedReason_k__BackingField;

  /// @brief Field _partyConfig, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* ____partyConfig;

  /// @brief Field _retryAttemptsLeft, offset: 0x48, size: 0x4, def value: None
  int32_t ____retryAttemptsLeft;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ____unifiedNetworkPlayerModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ___connectionSuccessEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ___connectionFailedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ____connectionState_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ____connectionType_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ____connectionFailedReason_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ____partyConfig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyConnectionController, ____retryAttemptsLeft) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyConnectionController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState, "", "MultiplayerLobbyConnectionController/LobbyConnectionState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, "", "MultiplayerLobbyConnectionController/LobbyConnectionType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyConnectionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyConnectionController*, "", "MultiplayerLobbyConnectionController");
