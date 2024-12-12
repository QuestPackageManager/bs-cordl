#pragma once
// IWYU pragma private; include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LiteNetLibConnectionManager)
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_ConnectToServerParams;
}
namespace GlobalNamespace {
struct LiteNetLibConnectionManager_ConnectionState;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_NetPeerConnectionRequest;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_NetPeerConnection;
}
namespace GlobalNamespace {
struct LiteNetLibConnectionManager_NetworkMode;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_StartClientParams;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_StartServerParams;
}
namespace GlobalNamespace {
struct LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126;
}
namespace GlobalNamespace {
struct LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager___c;
}
namespace GlobalNamespace {
class NetworkStatisticsState_NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
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
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct LiteNetLibConnectionManager_ConnectionState;
}
namespace GlobalNamespace {
struct LiteNetLibConnectionManager_NetworkMode;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_ConnectToServerParams;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_NetPeerConnection;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_NetPeerConnectionRequest;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_StartClientParams;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager_StartServerParams;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager___c;
}
namespace GlobalNamespace {
struct LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126;
}
namespace GlobalNamespace {
struct LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState);
MARK_VAL_T(::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager___c);
MARK_VAL_T(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126);
MARK_VAL_T(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LiteNetLibConnectionManager/NetworkMode
struct CORDL_TYPE LiteNetLibConnectionManager_NetworkMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LiteNetLibConnectionManager_NetworkMode_Unwrapped
  enum struct __LiteNetLibConnectionManager_NetworkMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Client = static_cast<int32_t>(0x1),
    __E_Server = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LiteNetLibConnectionManager_NetworkMode_Unwrapped() const noexcept {
    return static_cast<__LiteNetLibConnectionManager_NetworkMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_NetworkMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LiteNetLibConnectionManager_NetworkMode(int32_t value__) noexcept;

  /// @brief Field Client value: I32(1)
  static ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode const Client;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode const None;

  /// @brief Field Server value: I32(2)
  static ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode const Server;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14822 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LiteNetLibConnectionManager/ConnectionState
struct CORDL_TYPE LiteNetLibConnectionManager_ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LiteNetLibConnectionManager_ConnectionState_Unwrapped
  enum struct __LiteNetLibConnectionManager_ConnectionState_Unwrapped : int32_t {
    __E_Unconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LiteNetLibConnectionManager_ConnectionState_Unwrapped() const noexcept {
    return static_cast<__LiteNetLibConnectionManager_ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LiteNetLibConnectionManager_ConnectionState(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(2)
  static ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState const Connected;

  /// @brief Field Connecting value: I32(1)
  static ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState const Connecting;

  /// @brief Field Disconnecting value: I32(3)
  static ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState const Disconnecting;

  /// @brief Field Unconnected value: I32(0)
  static ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState const Unconnected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14823 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IConnectionInitParams`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
class CORDL_TYPE LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field connectionRequestHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionRequestHandler, put = __cordl_internal_set_connectionRequestHandler)) ::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;

  /// @brief Field disconnectTimeoutMs, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectTimeoutMs, put = __cordl_internal_set_disconnectTimeoutMs)) int32_t disconnectTimeoutMs;

  /// @brief Field enableBackgroundSentry, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_enableBackgroundSentry, put = __cordl_internal_set_enableBackgroundSentry)) bool enableBackgroundSentry;

  /// @brief Field enableStatistics, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get_enableStatistics, put = __cordl_internal_set_enableStatistics)) bool enableStatistics;

  /// @brief Field enableUnconnectedMessages, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_enableUnconnectedMessages, put = __cordl_internal_set_enableUnconnectedMessages)) bool enableUnconnectedMessages;

  /// @brief Field filterUnencryptedTraffic, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_filterUnencryptedTraffic, put = __cordl_internal_set_filterUnencryptedTraffic)) bool filterUnencryptedTraffic;

  /// @brief Field port, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*() noexcept;

  static inline ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase* New_ctor();

  constexpr ::GlobalNamespace::IConnectionRequestHandler* const& __cordl_internal_get_connectionRequestHandler() const;

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __cordl_internal_get_connectionRequestHandler();

  constexpr int32_t const& __cordl_internal_get_disconnectTimeoutMs() const;

  constexpr int32_t& __cordl_internal_get_disconnectTimeoutMs();

  constexpr bool const& __cordl_internal_get_enableBackgroundSentry() const;

  constexpr bool& __cordl_internal_get_enableBackgroundSentry();

  constexpr bool const& __cordl_internal_get_enableStatistics() const;

  constexpr bool& __cordl_internal_get_enableStatistics();

  constexpr bool const& __cordl_internal_get_enableUnconnectedMessages() const;

  constexpr bool& __cordl_internal_get_enableUnconnectedMessages();

  constexpr bool const& __cordl_internal_get_filterUnencryptedTraffic() const;

  constexpr bool& __cordl_internal_get_filterUnencryptedTraffic();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr void __cordl_internal_set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value);

  constexpr void __cordl_internal_set_disconnectTimeoutMs(int32_t value);

  constexpr void __cordl_internal_set_enableBackgroundSentry(bool value);

  constexpr void __cordl_internal_set_enableStatistics(bool value);

  constexpr void __cordl_internal_set_enableUnconnectedMessages(bool value);

  constexpr void __cordl_internal_set_filterUnencryptedTraffic(bool value);

  constexpr void __cordl_internal_set_port(int32_t value);

  /// @brief Method .ctor, addr 0x22d0390, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
  constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*
  i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__LiteNetLibConnectionManager__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase(LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase(LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14824 };

  /// @brief Field connectionRequestHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionRequestHandler* ___connectionRequestHandler;

  /// @brief Field port, offset: 0x18, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field filterUnencryptedTraffic, offset: 0x1c, size: 0x1, def value: None
  bool ___filterUnencryptedTraffic;

  /// @brief Field enableUnconnectedMessages, offset: 0x1d, size: 0x1, def value: None
  bool ___enableUnconnectedMessages;

  /// @brief Field enableBackgroundSentry, offset: 0x1e, size: 0x1, def value: None
  bool ___enableBackgroundSentry;

  /// @brief Field enableStatistics, offset: 0x1f, size: 0x1, def value: None
  bool ___enableStatistics;

  /// @brief Field disconnectTimeoutMs, offset: 0x20, size: 0x4, def value: None
  int32_t ___disconnectTimeoutMs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, ___connectionRequestHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, ___port) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, ___filterUnencryptedTraffic) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, ___enableUnconnectedMessages) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, ___enableBackgroundSentry) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, ___enableStatistics) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, ___disconnectTimeoutMs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager/StartServerParams
class CORDL_TYPE LiteNetLibConnectionManager_StartServerParams : public ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase {
public:
  // Declarations
  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Field userName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName)) ::StringW userName;

  static inline ::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_userId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0x22d03a0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_StartServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_StartServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager_StartServerParams(LiteNetLibConnectionManager_StartServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_StartServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager_StartServerParams(LiteNetLibConnectionManager_StartServerParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14825 };

  /// @brief Field userId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___userName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams, ___userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams, ___userName) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager/StartClientParams
class CORDL_TYPE LiteNetLibConnectionManager_StartClientParams : public ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase {
public:
  // Declarations
  static inline ::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams* New_ctor();

  /// @brief Method .ctor, addr 0x22d03b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_StartClientParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_StartClientParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager_StartClientParams(LiteNetLibConnectionManager_StartClientParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_StartClientParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager_StartClientParams(LiteNetLibConnectionManager_StartClientParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14826 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager/ConnectToServerParams
class CORDL_TYPE LiteNetLibConnectionManager_ConnectToServerParams : public ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase {
public:
  // Declarations
  /// @brief Field endPoint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_endPoint, put = __cordl_internal_set_endPoint)) ::System::Net::IPEndPoint* endPoint;

  /// @brief Field serverIsConnectionOwner, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_serverIsConnectionOwner, put = __cordl_internal_set_serverIsConnectionOwner)) bool serverIsConnectionOwner;

  /// @brief Field serverUserId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_serverUserId, put = __cordl_internal_set_serverUserId)) ::StringW serverUserId;

  /// @brief Field serverUserName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_serverUserName, put = __cordl_internal_set_serverUserName)) ::StringW serverUserName;

  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Field userName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName)) ::StringW userName;

  static inline ::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams* New_ctor();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get_endPoint() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_endPoint();

  constexpr bool const& __cordl_internal_get_serverIsConnectionOwner() const;

  constexpr bool& __cordl_internal_get_serverIsConnectionOwner();

  constexpr ::StringW const& __cordl_internal_get_serverUserId() const;

  constexpr ::StringW& __cordl_internal_get_serverUserId();

  constexpr ::StringW const& __cordl_internal_get_serverUserName() const;

  constexpr ::StringW& __cordl_internal_get_serverUserName();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_endPoint(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set_serverIsConnectionOwner(bool value);

  constexpr void __cordl_internal_set_serverUserId(::StringW value);

  constexpr void __cordl_internal_set_serverUserName(::StringW value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0x22d03c0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_ConnectToServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_ConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager_ConnectToServerParams(LiteNetLibConnectionManager_ConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_ConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager_ConnectToServerParams(LiteNetLibConnectionManager_ConnectToServerParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14827 };

  /// @brief Field userId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field endPoint, offset: 0x38, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___endPoint;

  /// @brief Field serverUserId, offset: 0x40, size: 0x8, def value: None
  ::StringW ___serverUserId;

  /// @brief Field serverUserName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___serverUserName;

  /// @brief Field serverIsConnectionOwner, offset: 0x50, size: 0x1, def value: None
  bool ___serverIsConnectionOwner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams, ___userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams, ___userName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams, ___endPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams, ___serverUserId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams, ___serverUserName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams, ___serverIsConnectionOwner) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager/NetPeerConnectionRequest
class CORDL_TYPE LiteNetLibConnectionManager_NetPeerConnectionRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isConnectionOwner, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner, put = __cordl_internal_set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request)) ::LiteNetLib::ConnectionRequest* _request;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName)) ::StringW _userName;

  __declspec(property(get = get_endPoint)) ::System::Net::IPEndPoint* endPoint;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Method Accept, addr 0x22d0450, size 0x1c, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* Accept();

  static inline ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest* New_ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName,
                                                                                                  bool isConnectionOwner);

  constexpr bool const& __cordl_internal_get__isConnectionOwner() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner();

  constexpr ::LiteNetLib::ConnectionRequest* const& __cordl_internal_get__request() const;

  constexpr ::LiteNetLib::ConnectionRequest*& __cordl_internal_get__request();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__isConnectionOwner(bool value);

  constexpr void __cordl_internal_set__request(::LiteNetLib::ConnectionRequest* value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0x22d040c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method get_endPoint, addr 0x22d03f0, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_endPoint();

  /// @brief Method get_isConnectionOwner, addr 0x22d03e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_userId, addr 0x22d03d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x22d03e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_NetPeerConnectionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_NetPeerConnectionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager_NetPeerConnectionRequest(LiteNetLibConnectionManager_NetPeerConnectionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_NetPeerConnectionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager_NetPeerConnectionRequest(LiteNetLibConnectionManager_NetPeerConnectionRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14828 };

  /// @brief Field _userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _isConnectionOwner, offset: 0x20, size: 0x1, def value: None
  bool ____isConnectionOwner;

  /// @brief Field _request, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::ConnectionRequest* ____request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest, ____userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest, ____isConnectionOwner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest, ____request) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IConnection, System.IEquatable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager/NetPeerConnection
class CORDL_TYPE LiteNetLibConnectionManager_NetPeerConnection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isConnectionOwner, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner, put = __cordl_internal_set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName)) ::StringW _userName;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Field netPeer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_netPeer, put = __cordl_internal_set_netPeer)) ::LiteNetLib::NetPeer* netPeer;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnection"
  constexpr operator ::GlobalNamespace::IConnection*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*() noexcept;

  /// @brief Method Disconnect, addr 0x22d06b4, size 0x1c, virtual true, abstract: false, final true
  inline void Disconnect();

  /// @brief Method Equals, addr 0x22d057c, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x22d0550, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* other);

  /// @brief Method GetHashCode, addr 0x22d0694, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* New_ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method Send, addr 0x22d04c8, size 0x88, virtual true, abstract: false, final true
  inline void Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  constexpr bool const& __cordl_internal_get__isConnectionOwner() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr ::LiteNetLib::NetPeer* const& __cordl_internal_get_netPeer() const;

  constexpr ::LiteNetLib::NetPeer*& __cordl_internal_get_netPeer();

  constexpr void __cordl_internal_set__isConnectionOwner(bool value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  constexpr void __cordl_internal_set_netPeer(::LiteNetLib::NetPeer* value);

  /// @brief Method .ctor, addr 0x22d0484, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method get_isConnectionOwner, addr 0x22d047c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_userId, addr 0x22d046c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x22d0474, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnection"
  constexpr ::GlobalNamespace::IConnection* i___GlobalNamespace__IConnection() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*
  i___System__IEquatable_1___GlobalNamespace__LiteNetLibConnectionManager_NetPeerConnection__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager_NetPeerConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_NetPeerConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager_NetPeerConnection(LiteNetLibConnectionManager_NetPeerConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager_NetPeerConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager_NetPeerConnection(LiteNetLibConnectionManager_NetPeerConnection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14829 };

  /// @brief Field _userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _isConnectionOwner, offset: 0x20, size: 0x1, def value: None
  bool ____isConnectionOwner;

  /// @brief Field netPeer, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* ___netPeer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection, ____userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection, ____isConnectionOwner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection, ___netPeer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager/<>c
class CORDL_TYPE LiteNetLibConnectionManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LiteNetLibConnectionManager___c* __9;

  /// @brief Field <>9__70_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__70_0, put = setStaticF___9__70_0)) ::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* __9__70_0;

  static inline ::GlobalNamespace::LiteNetLibConnectionManager___c* New_ctor();

  /// @brief Method .ctor, addr 0x22d072c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_hasConnectionOwner>b__70_0, addr 0x22d0734, size 0x18, virtual false, abstract: false, final false
  inline bool _get_hasConnectionOwner_b__70_0(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* c);

  static inline ::GlobalNamespace::LiteNetLibConnectionManager___c* getStaticF___9();

  static inline ::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* getStaticF___9__70_0();

  static inline void setStaticF___9(::GlobalNamespace::LiteNetLibConnectionManager___c* value);

  static inline void setStaticF___9__70_0(::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager___c(LiteNetLibConnectionManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager___c(LiteNetLibConnectionManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: LiteNetLibConnectionManager/<BackgroundDisconnectSentry>d__126
struct CORDL_TYPE LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22d074c, size 0x428, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22d0b74, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                           ::GlobalNamespace::LiteNetLibConnectionManager* __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14831 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LiteNetLibConnectionManager* __4__this;

  /// @brief Field <cancellationToken>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126, _cancellationToken_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: LiteNetLibConnectionManager/<BackgroundShutdownSentry>d__127
struct CORDL_TYPE LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22d0bdc, size 0x42c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22d1008, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                         ::GlobalNamespace::LiteNetLibConnectionManager* __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14832 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LiteNetLibConnectionManager* __4__this;

  /// @brief Field <cancellationToken>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127, _cancellationToken_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IConnectionManager, IPollable, LiteNetLib.INetEventListener, LiteNetLibConnectionManager::ConnectionState, LiteNetLibConnectionManager::NetworkMode, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiteNetLibConnectionManager
class CORDL_TYPE LiteNetLibConnectionManager : public ::System::Object {
public:
  // Declarations
  using ConnectToServerParams = ::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams;

  using ConnectionState = ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState;

  using LiteNetLibConnectionParamsBase = ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase;

  using NetPeerConnection = ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection;

  using NetPeerConnectionRequest = ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest;

  using NetworkMode = ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode;

  using StartClientParams = ::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams;

  using StartServerParams = ::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams;

  using _BackgroundDisconnectSentry_d__126 = ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126;

  using _BackgroundShutdownSentry_d__127 = ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127;

  using __c = ::GlobalNamespace::LiteNetLibConnectionManager___c;

  /// @brief Field _backgroundSentryDisconnectCts, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundSentryDisconnectCts,
                      put = __cordl_internal_set__backgroundSentryDisconnectCts)) ::System::Threading::CancellationTokenSource* _backgroundSentryDisconnectCts;

  /// @brief Field _backgroundSentryShutdownCts, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundSentryShutdownCts,
                      put = __cordl_internal_set__backgroundSentryShutdownCts)) ::System::Threading::CancellationTokenSource* _backgroundSentryShutdownCts;

  /// @brief Field _connectionRequestHandler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionRequestHandler,
                      put = __cordl_internal_set__connectionRequestHandler)) ::GlobalNamespace::IConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field _connectionState, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionState, put = __cordl_internal_set__connectionState)) ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState _connectionState;

  /// @brief Field _connections, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connections,
                      put = __cordl_internal_set__connections)) ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* _connections;

  /// @brief Field _encryptionLayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionLayer, put = __cordl_internal_set__encryptionLayer)) ::GlobalNamespace::PacketEncryptionLayer* _encryptionLayer;

  /// @brief Field _lastPollUpdateTime, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPollUpdateTime, put = __cordl_internal_set__lastPollUpdateTime)) int64_t _lastPollUpdateTime;

  /// @brief Field _lastStatisticsUpdateTime, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__lastStatisticsUpdateTime, put = __cordl_internal_set__lastStatisticsUpdateTime)) int64_t _lastStatisticsUpdateTime;

  /// @brief Field _mode, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode)) ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode _mode;

  /// @brief Field _netManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__netManager, put = __cordl_internal_set__netManager)) ::LiteNetLib::NetManager* _netManager;

  /// @brief Field _pendingConnections, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingConnections,
                      put = __cordl_internal_set__pendingConnections)) ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* _pendingConnections;

  /// @brief Field _pendingReconnections, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingReconnections,
                      put = __cordl_internal_set__pendingReconnections)) ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* _pendingReconnections;

  /// @brief Field _pendingRequests, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingRequests,
                      put = __cordl_internal_set__pendingRequests)) ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>* _pendingRequests;

  /// @brief Field _sentryDisconnected, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__sentryDisconnected, put = __cordl_internal_set__sentryDisconnected)) bool _sentryDisconnected;

  /// @brief Field _sentryShutdown, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get__sentryShutdown, put = __cordl_internal_set__sentryShutdown)) bool _sentryShutdown;

  /// @brief Field _taskUtility, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility)) ::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _unconnectedPacketHeader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__unconnectedPacketHeader, put = __cordl_internal_set__unconnectedPacketHeader)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _unconnectedPacketHeader;

  /// @brief Field _userId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field _userName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName)) ::StringW _userName;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_connectionRequestHandler)) ::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;

  __declspec(property(get = get_encryptionLayer)) ::GlobalNamespace::PacketEncryptionLayer* encryptionLayer;

  __declspec(property(get = get_hasConnectionOwner)) bool hasConnectionOwner;

  __declspec(property(get = get_isClient)) bool isClient;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  __declspec(property(get = get_isServer)) bool isServer;

  /// @brief Field onConnectedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectedEvent, put = __cordl_internal_set_onConnectedEvent)) ::System::Action* onConnectedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionConnectedEvent,
                      put = __cordl_internal_set_onConnectionConnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0xc0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onConnectionDisconnectedEvent,
      put = __cordl_internal_set_onConnectionDisconnectedEvent)) ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionFailedEvent,
                      put = __cordl_internal_set_onConnectionFailedEvent)) ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onDisconnectedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_onDisconnectedEvent, put = __cordl_internal_set_onDisconnectedEvent)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onInitializedEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_onInitializedEvent, put = __cordl_internal_set_onInitializedEvent)) ::System::Action* onInitializedEvent;

  /// @brief Field onReceiveUnconnectedDataEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceiveUnconnectedDataEvent,
                      put = __cordl_internal_set_onReceiveUnconnectedDataEvent)) ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* onReceiveUnconnectedDataEvent;

  /// @brief Field onReceivedDataEvent, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onReceivedDataEvent,
      put = __cordl_internal_set_onReceivedDataEvent)) ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  /// @brief Field onStatisticsUpdatedEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_onStatisticsUpdatedEvent,
                      put = __cordl_internal_set_onStatisticsUpdatedEvent)) ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* onStatisticsUpdatedEvent;

  __declspec(property(get = get_port)) int32_t port;

  __declspec(property(get = get_unconnectedPacketHeader)) ::ArrayW<uint8_t, ::Array<uint8_t>*> unconnectedPacketHeader;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::INetEventListener"
  constexpr operator ::LiteNetLib::INetEventListener*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AcceptAllPendingRequests, addr 0x22cf9cc, size 0xe8, virtual false, abstract: false, final false
  inline void AcceptAllPendingRequests();

  /// @brief Method BackgroundDisconnectSentry, addr 0x22cfb00, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BackgroundDisconnectSentry();

  /// @brief Method BackgroundShutdownSentry, addr 0x22cfbc4, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BackgroundShutdownSentry();

  /// @brief Method CheckSentryState, addr 0x22ce2f4, size 0x50, virtual false, abstract: false, final false
  inline void CheckSentryState();

  /// @brief Method ConnectToEndPoint, addr 0x22ce600, size 0xf0, virtual false, abstract: false, final false
  inline void ConnectToEndPoint(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner);

  /// @brief Method CreatePendingConnection, addr 0x22ce7e4, size 0x128, virtual false, abstract: false, final false
  inline void CreatePendingConnection(::LiteNetLib::NetPeer* peer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method Disconnect, addr 0x22ceae8, size 0x8, virtual true, abstract: false, final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method DisconnectInternal, addr 0x22ceaf0, size 0xc4, virtual false, abstract: false, final false
  inline void DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method Dispose, addr 0x22ce90c, size 0x24, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0x22ce970, size 0x178, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method DisposeInternal, addr 0x22ce930, size 0x40, virtual false, abstract: false, final false
  inline void DisposeInternal();

  /// @brief Method FromLiteNetDeliveryMethod, addr 0x22cf980, size 0x10, virtual false, abstract: false, final false
  static inline ::BGNet::Core::DeliveryMethod FromLiteNetDeliveryMethod(::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method GetConnection, addr 0x22cee98, size 0x58, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method GetConnection, addr 0x22cf8bc, size 0xc4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* GetConnection(::LiteNetLib::NetPeer* peer);

  /// @brief Method GetConnectionMessage, addr 0x22ce6f0, size 0xf4, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* GetConnectionMessage();

  /// @brief Method GetLogFormatConnection, addr 0x22cfda0, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetLogFormatConnection(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* netPeerConnection);

  /// @brief Method GetLogFormatUserInfo, addr 0x22cfe10, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetLogFormatUserInfo(::StringW userName, ::StringW userId, ::System::Net::IPEndPoint* ipEndPoint);

  /// @brief Method HasConnectionToEndPoint, addr 0x22cef9c, size 0xb4, virtual false, abstract: false, final false
  inline bool HasConnectionToEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method HasPendingConnectionToEndPoint, addr 0x22cf050, size 0xb4, virtual false, abstract: false, final false
  inline bool HasPendingConnectionToEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method IsConnectedToUser, addr 0x22ceef0, size 0xac, virtual false, abstract: false, final false
  inline bool IsConnectedToUser(::StringW userId);

  /// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest, addr 0x22cf340, size 0x150, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkError, addr 0x22cf320, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate, addr 0x22cf33c, size 0x4, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latencyMs);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive, addr 0x22cf7f4, size 0xc8, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected, addr 0x22cf990, size 0x3c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                       ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerConnected, addr 0x22cf104, size 0x21c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected, addr 0x22cf5b0, size 0x58, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  /// @brief Method Log, addr 0x22cfc88, size 0x8c, virtual false, abstract: false, final false
  inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0x22cfd14, size 0x8c, virtual false, abstract: false, final false
  inline void LogError(::StringW msg);

  static inline ::GlobalNamespace::LiteNetLibConnectionManager* New_ctor();

  static inline ::GlobalNamespace::LiteNetLibConnectionManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method NoDomainReloadInit, addr 0x22cdd10, size 0x80, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method PollUpdate, addr 0x22ce258, size 0x9c, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method RemoveConnection, addr 0x22cf608, size 0x1ec, virtual false, abstract: false, final false
  inline void RemoveConnection(::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::DisconnectReason reason);

  /// @brief Method SendToAll, addr 0x22ce0a4, size 0x8c, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll, addr 0x22ce148, size 0xe8, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  /// @brief Method SendUnconnectedMessage, addr 0x22ce230, size 0x28, virtual false, abstract: false, final false
  inline void SendUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method StartBackgroundSentry, addr 0x22cec4c, size 0x24c, virtual false, abstract: false, final false
  inline void StartBackgroundSentry();

  /// @brief Method ToConnectionFailedReason, addr 0x22cfaec, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectionFailedReason ToConnectionFailedReason(::LiteNetLib::DisconnectReason disconnectReason);

  /// @brief Method ToDisconnectedReason, addr 0x22cfab4, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DisconnectedReason ToDisconnectedReason(::LiteNetLib::DisconnectReason disconnectReason);

  /// @brief Method ToLiteNetDeliveryMethod, addr 0x22ce130, size 0x18, virtual false, abstract: false, final false
  static inline ::LiteNetLib::DeliveryMethod ToLiteNetDeliveryMethod(::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method TryAccept, addr 0x22cf490, size 0x54, virtual false, abstract: false, final false
  inline void TryAccept(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method TryDisconnect, addr 0x22cf4e4, size 0xcc, virtual false, abstract: false, final false
  inline void TryDisconnect(::LiteNetLib::DisconnectReason reason);

  /// @brief Method TryStartNetManager, addr 0x22cebb4, size 0x98, virtual false, abstract: false, final false
  inline bool TryStartNetManager(int32_t port, bool enableBackgroundSentry);

  /// @brief Method UpdateStatistics, addr 0x22ce344, size 0x2bc, virtual false, abstract: false, final false
  inline void UpdateStatistics();

  /// @brief Method <DisposeAsync>b__98_0, addr 0x22cfe6c, size 0x524, virtual false, abstract: false, final false
  inline void _DisposeAsync_b__98_0();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__backgroundSentryDisconnectCts() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__backgroundSentryDisconnectCts();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__backgroundSentryShutdownCts() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__backgroundSentryShutdownCts();

  constexpr ::GlobalNamespace::IConnectionRequestHandler* const& __cordl_internal_get__connectionRequestHandler() const;

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __cordl_internal_get__connectionRequestHandler();

  constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState const& __cordl_internal_get__connectionState() const;

  constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState& __cordl_internal_get__connectionState();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* const& __cordl_internal_get__connections() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*& __cordl_internal_get__connections();

  constexpr ::GlobalNamespace::PacketEncryptionLayer* const& __cordl_internal_get__encryptionLayer() const;

  constexpr ::GlobalNamespace::PacketEncryptionLayer*& __cordl_internal_get__encryptionLayer();

  constexpr int64_t const& __cordl_internal_get__lastPollUpdateTime() const;

  constexpr int64_t& __cordl_internal_get__lastPollUpdateTime();

  constexpr int64_t const& __cordl_internal_get__lastStatisticsUpdateTime() const;

  constexpr int64_t& __cordl_internal_get__lastStatisticsUpdateTime();

  constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode const& __cordl_internal_get__mode() const;

  constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode& __cordl_internal_get__mode();

  constexpr ::LiteNetLib::NetManager* const& __cordl_internal_get__netManager() const;

  constexpr ::LiteNetLib::NetManager*& __cordl_internal_get__netManager();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* const& __cordl_internal_get__pendingConnections() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*& __cordl_internal_get__pendingConnections();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* const& __cordl_internal_get__pendingReconnections() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*& __cordl_internal_get__pendingReconnections();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>* const& __cordl_internal_get__pendingRequests() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>*& __cordl_internal_get__pendingRequests();

  constexpr bool const& __cordl_internal_get__sentryDisconnected() const;

  constexpr bool& __cordl_internal_get__sentryDisconnected();

  constexpr bool const& __cordl_internal_get__sentryShutdown() const;

  constexpr bool& __cordl_internal_get__sentryShutdown();

  constexpr ::BGNet::Core::ITaskUtility* const& __cordl_internal_get__taskUtility() const;

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__unconnectedPacketHeader() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__unconnectedPacketHeader();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

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

  constexpr ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* const& __cordl_internal_get_onReceiveUnconnectedDataEvent() const;

  constexpr ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*& __cordl_internal_get_onReceiveUnconnectedDataEvent();

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* const& __cordl_internal_get_onReceivedDataEvent() const;

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __cordl_internal_get_onReceivedDataEvent();

  constexpr ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* const& __cordl_internal_get_onStatisticsUpdatedEvent() const;

  constexpr ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*& __cordl_internal_get_onStatisticsUpdatedEvent();

  constexpr void __cordl_internal_set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__backgroundSentryShutdownCts(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value);

  constexpr void __cordl_internal_set__connectionState(::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState value);

  constexpr void __cordl_internal_set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* value);

  constexpr void __cordl_internal_set__encryptionLayer(::GlobalNamespace::PacketEncryptionLayer* value);

  constexpr void __cordl_internal_set__lastPollUpdateTime(int64_t value);

  constexpr void __cordl_internal_set__lastStatisticsUpdateTime(int64_t value);

  constexpr void __cordl_internal_set__mode(::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode value);

  constexpr void __cordl_internal_set__netManager(::LiteNetLib::NetManager* value);

  constexpr void __cordl_internal_set__pendingConnections(::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* value);

  constexpr void __cordl_internal_set__pendingReconnections(::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* value);

  constexpr void __cordl_internal_set__pendingRequests(::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>* value);

  constexpr void __cordl_internal_set__sentryDisconnected(bool value);

  constexpr void __cordl_internal_set__sentryShutdown(bool value);

  constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr void __cordl_internal_set__unconnectedPacketHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  constexpr void __cordl_internal_set_onConnectedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  constexpr void __cordl_internal_set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onInitializedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  constexpr void __cordl_internal_set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  constexpr void __cordl_internal_set_onStatisticsUpdatedEvent(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* value);

  /// @brief Method .ctor, addr 0x22cde10, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22cdea8, size 0x1fc, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method add_onConnectedEvent, addr 0x22cd05c, size 0x9c, virtual true, abstract: false, final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onConnectionConnectedEvent, addr 0x22cd454, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent, addr 0x22cd5b4, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent, addr 0x22cd2f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onDisconnectedEvent, addr 0x22cd194, size 0xb0, virtual true, abstract: false, final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onInitializedEvent, addr 0x22ccf24, size 0x9c, virtual true, abstract: false, final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onReceiveUnconnectedDataEvent, addr 0x22cd874, size 0xb0, virtual false, abstract: false, final false
  inline void add_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  /// @brief Method add_onReceivedDataEvent, addr 0x22cd714, size 0xb0, virtual true, abstract: false, final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method add_onStatisticsUpdatedEvent, addr 0x22cd9d4, size 0x9c, virtual false, abstract: false, final false
  inline void add_onStatisticsUpdatedEvent(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* value);

  /// @brief Method get_connectionCount, addr 0x22cdc94, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_connectionCount();

  /// @brief Method get_connectionRequestHandler, addr 0x22cdcdc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectionRequestHandler* get_connectionRequestHandler();

  /// @brief Method get_encryptionLayer, addr 0x22cdd08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();

  /// @brief Method get_hasConnectionOwner, addr 0x22cdb5c, size 0x108, virtual false, abstract: false, final false
  inline bool get_hasConnectionOwner();

  /// @brief Method get_isClient, addr 0x22cdc74, size 0x10, virtual false, abstract: false, final false
  inline bool get_isClient();

  /// @brief Method get_isConnected, addr 0x22cdb1c, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x22cdb2c, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0x22cdb4c, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x22cdb3c, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isDisposed, addr 0x22cdc84, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisposed();

  /// @brief Method get_isServer, addr 0x22cdc64, size 0x10, virtual false, abstract: false, final false
  inline bool get_isServer();

  /// @brief Method get_port, addr 0x22cdce4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_port();

  /// @brief Method get_unconnectedPacketHeader, addr 0x22cdd00, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_unconnectedPacketHeader();

  /// @brief Method get_userId, addr 0x22cdb0c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x22cdb14, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectionManager"
  constexpr ::GlobalNamespace::IConnectionManager* i___GlobalNamespace__IConnectionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert to "::LiteNetLib::INetEventListener"
  constexpr ::LiteNetLib::INetEventListener* i___LiteNetLib__INetEventListener() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_onConnectedEvent, addr 0x22cd0f8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectionConnectedEvent, addr 0x22cd504, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent, addr 0x22cd664, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent, addr 0x22cd3a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onDisconnectedEvent, addr 0x22cd244, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onInitializedEvent, addr 0x22ccfc0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onReceiveUnconnectedDataEvent, addr 0x22cd924, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  /// @brief Method remove_onReceivedDataEvent, addr 0x22cd7c4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method remove_onStatisticsUpdatedEvent, addr 0x22cda70, size 0x9c, virtual false, abstract: false, final false
  inline void remove_onStatisticsUpdatedEvent(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager(LiteNetLibConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager(LiteNetLibConnectionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14833 };

  /// @brief Field kBackgroundDisconnectTimeout offset 0xffffffff size 0x8
  static constexpr int64_t kBackgroundDisconnectTimeout{ static_cast<int64_t>(0x47868c00) };

  /// @brief Field kBackgroundShutdownTimeout offset 0xffffffff size 0x8
  static constexpr int64_t kBackgroundShutdownTimeout{ static_cast<int64_t>(0x218711a00) };

  /// @brief Field kStatisticsUpdateInterval offset 0xffffffff size 0x8
  static constexpr int64_t kStatisticsUpdateInterval{ static_cast<int64_t>(0x11e1a300) };

  /// @brief Field _unconnectedPacketHeader, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____unconnectedPacketHeader;

  /// @brief Field _netManager, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::NetManager* ____netManager;

  /// @brief Field _encryptionLayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PacketEncryptionLayer* ____encryptionLayer;

  /// @brief Field _taskUtility, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _connections, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* ____connections;

  /// @brief Field _pendingConnections, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* ____pendingConnections;

  /// @brief Field _pendingRequests, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>* ____pendingRequests;

  /// @brief Field _pendingReconnections, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* ____pendingReconnections;

  /// @brief Field _userId, offset: 0x50, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _connectionRequestHandler, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionRequestHandler* ____connectionRequestHandler;

  /// @brief Field _mode, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode ____mode;

  /// @brief Field _connectionState, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState ____connectionState;

  /// @brief Field _backgroundSentryDisconnectCts, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____backgroundSentryDisconnectCts;

  /// @brief Field _backgroundSentryShutdownCts, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____backgroundSentryShutdownCts;

  /// @brief Field _sentryDisconnected, offset: 0x80, size: 0x1, def value: None
  bool ____sentryDisconnected;

  /// @brief Field _sentryShutdown, offset: 0x81, size: 0x1, def value: None
  bool ____sentryShutdown;

  /// @brief Field _lastPollUpdateTime, offset: 0x88, size: 0x8, def value: None
  int64_t ____lastPollUpdateTime;

  /// @brief Field _lastStatisticsUpdateTime, offset: 0x90, size: 0x8, def value: None
  int64_t ____lastStatisticsUpdateTime;

  /// @brief Field onInitializedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action* ___onInitializedEvent;

  /// @brief Field onConnectedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ___onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnection*>* ___onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* ___onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* ___onReceivedDataEvent;

  /// @brief Field onReceiveUnconnectedDataEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* ___onReceiveUnconnectedDataEvent;

  /// @brief Field onStatisticsUpdatedEvent, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* ___onStatisticsUpdatedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____unconnectedPacketHeader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____netManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____encryptionLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____taskUtility) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____connections) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____pendingConnections) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____pendingRequests) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____pendingReconnections) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____userId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____userName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____connectionRequestHandler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____mode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____connectionState) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____backgroundSentryDisconnectCts) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____backgroundSentryShutdownCts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____sentryDisconnected) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____sentryShutdown) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____lastPollUpdateTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ____lastStatisticsUpdateTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onInitializedEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onConnectedEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onDisconnectedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onConnectionFailedEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onConnectionConnectedEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onConnectionDisconnectedEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onReceivedDataEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onReceiveUnconnectedDataEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiteNetLibConnectionManager, ___onStatisticsUpdatedEvent) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState, "", "LiteNetLibConnectionManager/ConnectionState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode, "", "LiteNetLibConnectionManager/NetworkMode");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager*, "", "LiteNetLibConnectionManager");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams*, "", "LiteNetLibConnectionManager/ConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase*, "", "LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*, "", "LiteNetLibConnectionManager/NetPeerConnection");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*, "", "LiteNetLibConnectionManager/NetPeerConnectionRequest");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams*, "", "LiteNetLibConnectionManager/StartClientParams");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams*, "", "LiteNetLibConnectionManager/StartServerParams");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager___c*, "", "LiteNetLibConnectionManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__126, "", "LiteNetLibConnectionManager/<BackgroundDisconnectSentry>d__126");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__127, "", "LiteNetLibConnectionManager/<BackgroundShutdownSentry>d__127");
