#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalServerConnectionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalServerConnectionManager)
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
struct LocalServerConnectionManager_ConnectionState;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerParamsBase;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams;
}
namespace GlobalNamespace {
class LocalServerConnectionRequestHandler;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IAsyncDisposable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalServerConnectionManager_ConnectionState;
}
namespace GlobalNamespace {
class LocalServerConnectionManager;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerParamsBase;
}
namespace GlobalNamespace {
class LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalServerConnectionManager_ConnectionState);
MARK_REF_PTR_T(::GlobalNamespace::LocalServerConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase);
MARK_REF_PTR_T(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalServerConnectionManager/ConnectionState
struct CORDL_TYPE LocalServerConnectionManager_ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LocalServerConnectionManager_ConnectionState_Unwrapped
  enum struct __LocalServerConnectionManager_ConnectionState_Unwrapped : int32_t {
    __E_Unconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LocalServerConnectionManager_ConnectionState_Unwrapped() const noexcept {
    return static_cast<__LocalServerConnectionManager_ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerConnectionManager_ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LocalServerConnectionManager_ConnectionState(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(2)
  static ::GlobalNamespace::LocalServerConnectionManager_ConnectionState const Connected;

  /// @brief Field Connecting value: I32(1)
  static ::GlobalNamespace::LocalServerConnectionManager_ConnectionState const Connecting;

  /// @brief Field Disconnecting value: I32(3)
  static ::GlobalNamespace::LocalServerConnectionManager_ConnectionState const Disconnecting;

  /// @brief Field Unconnected value: I32(0)
  static ::GlobalNamespace::LocalServerConnectionManager_ConnectionState const Unconnected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18927 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager_ConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerConnectionManager_ConnectionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalServerConnectionManager/LocalServerConnectionManagerParamsBase
class CORDL_TYPE LocalServerConnectionManager_LocalServerConnectionManagerParamsBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field authenticationTokenProviderTask, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_authenticationTokenProviderTask,
                      put =
                          __cordl_internal_set_authenticationTokenProviderTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* authenticationTokenProviderTask;

  /// @brief Field configuration, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_configuration, put = __cordl_internal_set_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field selectionMask, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_selectionMask, put = __cordl_internal_set_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*() noexcept;

  static inline ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase* New_ctor();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* const& __cordl_internal_get_authenticationTokenProviderTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& __cordl_internal_get_authenticationTokenProviderTask();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get_configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get_configuration();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get_selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get_selectionMask();

  constexpr void __cordl_internal_set_authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value);

  constexpr void __cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method .ctor, addr 0x31a7678, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>"
  constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*
  i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__LocalServerConnectionManager__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerConnectionManager_LocalServerConnectionManagerParamsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager_LocalServerConnectionManagerParamsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalServerConnectionManager_LocalServerConnectionManagerParamsBase(LocalServerConnectionManager_LocalServerConnectionManagerParamsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager_LocalServerConnectionManagerParamsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalServerConnectionManager_LocalServerConnectionManagerParamsBase(LocalServerConnectionManager_LocalServerConnectionManagerParamsBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18928 };

  /// @brief Field selectionMask, offset: 0x10, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  /// @brief Field authenticationTokenProviderTask, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* ___authenticationTokenProviderTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase, ___selectionMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase, ___configuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase, ___authenticationTokenProviderTask) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LocalServerConnectionManager::LocalServerConnectionManagerParamsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalServerConnectionManager/LocalServerConnectionManagerConnectToServerParams
class CORDL_TYPE LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams : public ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase {
public:
  // Declarations
  /// @brief Field code, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_code, put = __cordl_internal_set_code)) ::StringW code;

  /// @brief Field port, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  /// @brief Field secret, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret)) ::StringW secret;

  static inline ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_code() const;

  constexpr ::StringW& __cordl_internal_get_code();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr ::StringW const& __cordl_internal_get_secret() const;

  constexpr ::StringW& __cordl_internal_get_secret();

  constexpr void __cordl_internal_set_code(::StringW value);

  constexpr void __cordl_internal_set_port(int32_t value);

  constexpr void __cordl_internal_set_secret(::StringW value);

  /// @brief Method .ctor, addr 0x31a767c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams(LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams(LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18929 };

  /// @brief Field port, offset: 0x58, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field secret, offset: 0x60, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field code, offset: 0x68, size: 0x8, def value: None
  ::StringW ___code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams, ___port) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams, ___secret) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams, ___code) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LocalServerConnectionManager::LocalServerConnectionManagerParamsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalServerConnectionManager/LocalServerConnectionManagerStartClientParams
class CORDL_TYPE LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams : public ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase {
public:
  // Declarations
  static inline ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams* New_ctor();

  /// @brief Method .ctor, addr 0x31a7680, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams(LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams(LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18930 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, LocalServerConnectionManager::ConnectionState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalServerConnectionManager
class CORDL_TYPE LocalServerConnectionManager : public ::System::Object {
public:
  // Declarations
  using ConnectionState = ::GlobalNamespace::LocalServerConnectionManager_ConnectionState;

  using LocalServerConnectionManagerConnectToServerParams = ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams;

  using LocalServerConnectionManagerParamsBase = ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase;

  using LocalServerConnectionManagerStartClientParams = ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams;

  /// @brief Field _authenticationTokenProviderTask, offset 0xb8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__authenticationTokenProviderTask,
      put = __cordl_internal_set__authenticationTokenProviderTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* _authenticationTokenProviderTask;

  /// @brief Field _code, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code)) ::StringW _code;

  /// @brief Field _configuration, offset 0xa0, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration)) ::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _connectionCancellationTokenSource, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionCancellationTokenSource,
                      put = __cordl_internal_set__connectionCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _connectionCancellationTokenSource;

  /// @brief Field _connectionManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionManager, put = __cordl_internal_set__connectionManager)) ::GlobalNamespace::IConnectionManager* _connectionManager;

  /// @brief Field _connectionRequestHandler, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionRequestHandler,
                      put = __cordl_internal_set__connectionRequestHandler)) ::GlobalNamespace::LocalServerConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field _connectionState, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionState, put = __cordl_internal_set__connectionState)) ::GlobalNamespace::LocalServerConnectionManager_ConnectionState _connectionState;

  /// @brief Field _secret, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__secret, put = __cordl_internal_set__secret)) ::StringW _secret;

  /// @brief Field _selectionMask, offset 0x78, size 0x28
  __declspec(property(get = __cordl_internal_get__selectionMask, put = __cordl_internal_set__selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask;

  __declspec(property(get = get_code)) ::StringW code;

  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  /// @brief Field onConnectedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectedEvent, put = __cordl_internal_set_onConnectedEvent)) ::System::Action* onConnectedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionConnectedEvent,
                      put = __cordl_internal_set_onConnectionConnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onConnectionDisconnectedEvent,
      put = __cordl_internal_set_onConnectionDisconnectedEvent)) ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionFailedEvent,
                      put = __cordl_internal_set_onConnectionFailedEvent)) ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onDisconnectedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onDisconnectedEvent, put = __cordl_internal_set_onDisconnectedEvent)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onInitializedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onInitializedEvent, put = __cordl_internal_set_onInitializedEvent)) ::System::Action* onInitializedEvent;

  /// @brief Field onReceivedDataEvent, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onReceivedDataEvent,
      put = __cordl_internal_set_onReceivedDataEvent)) ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  __declspec(property(get = get_secret)) ::StringW secret;

  __declspec(property(get = get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConnectToLocalServer, addr 0x31a6b38, size 0xdc, virtual false, abstract: false, final false
  inline void ConnectToLocalServer(::StringW secret, ::StringW code, ::GlobalNamespace::GameplayServerConfiguration configuration, ::GlobalNamespace::BeatmapLevelSelectionMask mask, int32_t port);

  /// @brief Method Disconnect, addr 0x31a70c4, size 0x2a4, virtual true, abstract: false, final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Dispose, addr 0x31a6860, size 0xa4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0x31a75b4, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method GetConnection, addr 0x31a74b4, size 0x100, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method GetPlayerSessionInfo, addr 0x31a6ca0, size 0xbc, virtual false, abstract: false, final false
  inline ::BGNet::Core::GameLift::PlayerSessionInfo* GetPlayerSessionInfo();

  /// @brief Method GetPublicServers, addr 0x31a7368, size 0x5c, virtual false, abstract: false, final false
  inline void GetPublicServers(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                               ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                               ::GlobalNamespace::GameplayServerConfiguration configuration, int32_t offset, int32_t count);

  /// @brief Method HandleConnectToServerSuccess, addr 0x31a6d5c, size 0x368, virtual false, abstract: false, final false
  inline void HandleConnectToServerSuccess(::StringW playerSessionId, ::StringW hostName, int32_t port, ::StringW gameSessionId, ::StringW secret, ::StringW code,
                                           ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method HandleConnected, addr 0x31a73c4, size 0x30, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleReceivedData, addr 0x31a7498, size 0x1c, virtual false, abstract: false, final false
  inline void HandleReceivedData(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method HandleServerConnectionConnected, addr 0x31a73f4, size 0x80, virtual false, abstract: false, final false
  inline void HandleServerConnectionConnected(::GlobalNamespace::IConnection* connection);

  /// @brief Method HandleServerConnectionDisconnected, addr 0x31a7474, size 0x1c, virtual false, abstract: false, final false
  inline void HandleServerConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method HandleServerConnectionFailed, addr 0x31a7490, size 0x8, virtual false, abstract: false, final false
  inline void HandleServerConnectionFailed(::GlobalNamespace::ConnectionFailedReason failedReason);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method Log, addr 0x31a6c14, size 0x8c, virtual false, abstract: false, final false
  inline void Log(::StringW log);

  static inline ::GlobalNamespace::LocalServerConnectionManager* New_ctor();

  static inline ::GlobalNamespace::LocalServerConnectionManager* New_ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method PollUpdate, addr 0x31a6904, size 0xa4, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method SendToAll, addr 0x31a69a8, size 0xc0, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll, addr 0x31a6a68, size 0xd0, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* const& __cordl_internal_get__authenticationTokenProviderTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& __cordl_internal_get__authenticationTokenProviderTask();

  constexpr ::StringW const& __cordl_internal_get__code() const;

  constexpr ::StringW& __cordl_internal_get__code();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__connectionCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__connectionCancellationTokenSource();

  constexpr ::GlobalNamespace::IConnectionManager* const& __cordl_internal_get__connectionManager() const;

  constexpr ::GlobalNamespace::IConnectionManager*& __cordl_internal_get__connectionManager();

  constexpr ::GlobalNamespace::LocalServerConnectionRequestHandler* const& __cordl_internal_get__connectionRequestHandler() const;

  constexpr ::GlobalNamespace::LocalServerConnectionRequestHandler*& __cordl_internal_get__connectionRequestHandler();

  constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState const& __cordl_internal_get__connectionState() const;

  constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState& __cordl_internal_get__connectionState();

  constexpr ::StringW const& __cordl_internal_get__secret() const;

  constexpr ::StringW& __cordl_internal_get__secret();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get__selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get__selectionMask();

  constexpr ::System::Action* const& __cordl_internal_get_onConnectedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_onConnectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnection*>* const& __cordl_internal_get_onConnectionConnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& __cordl_internal_get_onConnectionConnectedEvent();

  constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get_onConnectionDisconnectedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_onConnectionDisconnectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const& __cordl_internal_get_onConnectionFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_onConnectionFailedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get_onDisconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_onDisconnectedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_onInitializedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_onInitializedEvent();

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* const& __cordl_internal_get_onReceivedDataEvent() const;

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __cordl_internal_get_onReceivedDataEvent();

  constexpr void __cordl_internal_set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value);

  constexpr void __cordl_internal_set__code(::StringW value);

  constexpr void __cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set__connectionCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value);

  constexpr void __cordl_internal_set__connectionRequestHandler(::GlobalNamespace::LocalServerConnectionRequestHandler* value);

  constexpr void __cordl_internal_set__connectionState(::GlobalNamespace::LocalServerConnectionManager_ConnectionState value);

  constexpr void __cordl_internal_set__secret(::StringW value);

  constexpr void __cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr void __cordl_internal_set_onConnectedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  constexpr void __cordl_internal_set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onInitializedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method .ctor, addr 0x31a6324, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x31a6384, size 0x4d8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method add_onConnectedEvent, addr 0x31a55c0, size 0xac, virtual true, abstract: false, final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onConnectionConnectedEvent, addr 0x31a5a18, size 0xc0, virtual true, abstract: false, final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent, addr 0x31a5b98, size 0xc0, virtual true, abstract: false, final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent, addr 0x31a5898, size 0xc0, virtual true, abstract: false, final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onDisconnectedEvent, addr 0x31a5718, size 0xc0, virtual true, abstract: false, final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onInitializedEvent, addr 0x31a5468, size 0xac, virtual true, abstract: false, final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onReceivedDataEvent, addr 0x31a5d18, size 0xc0, virtual true, abstract: false, final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method get_code, addr 0x31a6314, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_code();

  /// @brief Method get_configuration, addr 0x31a6300, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectionCount, addr 0x31a60f0, size 0xa8, virtual true, abstract: false, final true
  inline int32_t get_connectionCount();

  /// @brief Method get_isConnected, addr 0x31a60c0, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x31a60d0, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0x31a6198, size 0xa8, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x31a60e0, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isDisposed, addr 0x31a6240, size 0xa8, virtual true, abstract: false, final true
  inline bool get_isDisposed();

  /// @brief Method get_secret, addr 0x31a631c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_secret();

  /// @brief Method get_selectionMask, addr 0x31a62e8, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_userId, addr 0x31a5e98, size 0x114, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x31a5fac, size 0x114, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectionManager"
  constexpr ::GlobalNamespace::IConnectionManager* i___GlobalNamespace__IConnectionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert to "::System::IAsyncDisposable"
  constexpr ::System::IAsyncDisposable* i___System__IAsyncDisposable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_onConnectedEvent, addr 0x31a566c, size 0xac, virtual true, abstract: false, final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectionConnectedEvent, addr 0x31a5ad8, size 0xc0, virtual true, abstract: false, final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent, addr 0x31a5c58, size 0xc0, virtual true, abstract: false, final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent, addr 0x31a5958, size 0xc0, virtual true, abstract: false, final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onDisconnectedEvent, addr 0x31a57d8, size 0xc0, virtual true, abstract: false, final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onInitializedEvent, addr 0x31a5514, size 0xac, virtual true, abstract: false, final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onReceivedDataEvent, addr 0x31a5dd8, size 0xc0, virtual true, abstract: false, final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerConnectionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalServerConnectionManager(LocalServerConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalServerConnectionManager(LocalServerConnectionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18931 };

  /// @brief Field onInitializedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___onInitializedEvent;

  /// @brief Field onConnectedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnection*>* ___onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* ___onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* ___onReceivedDataEvent;

  /// @brief Field _connectionState, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::LocalServerConnectionManager_ConnectionState ____connectionState;

  /// @brief Field _connectionRequestHandler, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::LocalServerConnectionRequestHandler* ____connectionRequestHandler;

  /// @brief Field _connectionManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionManager* ____connectionManager;

  /// @brief Field _connectionCancellationTokenSource, offset: 0x60, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____connectionCancellationTokenSource;

  /// @brief Field _code, offset: 0x68, size: 0x8, def value: None
  ::StringW ____code;

  /// @brief Field _secret, offset: 0x70, size: 0x8, def value: None
  ::StringW ____secret;

  /// @brief Field _selectionMask, offset: 0x78, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask;

  /// @brief Field _configuration, offset: 0xa0, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field _authenticationTokenProviderTask, offset: 0xb8, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* ____authenticationTokenProviderTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ___onInitializedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ___onConnectedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ___onDisconnectedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ___onConnectionFailedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ___onConnectionConnectedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ___onConnectionDisconnectedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ___onReceivedDataEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____connectionState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____connectionRequestHandler) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____connectionManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____connectionCancellationTokenSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____code) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____secret) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____selectionMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____configuration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalServerConnectionManager, ____authenticationTokenProviderTask) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerConnectionManager, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerConnectionManager_ConnectionState, "", "LocalServerConnectionManager/ConnectionState");
NEED_NO_BOX(::GlobalNamespace::LocalServerConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerConnectionManager*, "", "LocalServerConnectionManager");
NEED_NO_BOX(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams*, "",
                       "LocalServerConnectionManager/LocalServerConnectionManagerConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase*, "", "LocalServerConnectionManager/LocalServerConnectionManagerParamsBase");
NEED_NO_BOX(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams*, "",
                       "LocalServerConnectionManager/LocalServerConnectionManagerStartClientParams");
