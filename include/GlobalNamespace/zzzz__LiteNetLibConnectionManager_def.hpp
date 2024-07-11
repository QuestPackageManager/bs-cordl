#pragma once
// IWYU pragma private; include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LiteNetLibConnectionManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IConnectionManager;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__NetPeerConnectionRequest;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__NetPeerConnection;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager__NetworkMode;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager____c;
}
namespace GlobalNamespace {
class __NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
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
class INetEventListener;
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
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
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
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager__NetworkMode;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__NetPeerConnection;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__NetPeerConnectionRequest;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager____c;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState);
MARK_VAL_T(::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode);
MARK_REF_PTR_T(::GlobalNamespace::LiteNetLibConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase);
MARK_REF_PTR_T(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection);
MARK_REF_PTR_T(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest);
MARK_REF_PTR_T(::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams);
MARK_REF_PTR_T(::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__LiteNetLibConnectionManager____c);
MARK_VAL_T(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126);
MARK_VAL_T(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127);
// Type: ::NetworkMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LiteNetLibConnectionManager::NetworkMode
struct CORDL_TYPE __LiteNetLibConnectionManager__NetworkMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LiteNetLibConnectionManager__NetworkMode_Unwrapped
  enum struct ____LiteNetLibConnectionManager__NetworkMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Client = static_cast<int32_t>(0x1),
    __E_Server = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LiteNetLibConnectionManager__NetworkMode_Unwrapped() const noexcept {
    return static_cast<____LiteNetLibConnectionManager__NetworkMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__NetworkMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager__NetworkMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Client value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const Client;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const None;

  /// @brief Field Server value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const Server;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LiteNetLibConnectionManager::ConnectionState
struct CORDL_TYPE __LiteNetLibConnectionManager__ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LiteNetLibConnectionManager__ConnectionState_Unwrapped
  enum struct ____LiteNetLibConnectionManager__ConnectionState_Unwrapped : int32_t {
    __E_Unconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LiteNetLibConnectionManager__ConnectionState_Unwrapped() const noexcept {
    return static_cast<____LiteNetLibConnectionManager__ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager__ConnectionState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Connected value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Connected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Connecting;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Disconnecting;

  /// @brief Field Unconnected value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Unconnected;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LiteNetLibConnectionParamsBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase*
class CORDL_TYPE __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field connectionRequestHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionRequestHandler, put = __cordl_internal_set_connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;

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

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase* New_ctor();

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __cordl_internal_get_connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const& __cordl_internal_get_connectionRequestHandler() const;

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

  /// @brief Method .ctor, addr 0x10b386c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
  constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*
  i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__LiteNetLibConnectionManager__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, ___connectionRequestHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, ___port) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, ___filterUnencryptedTraffic) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, ___enableUnconnectedMessages) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, ___enableBackgroundSentry) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, ___enableStatistics) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, ___disconnectTimeoutMs) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartServerParams
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager::StartServerParams*
class CORDL_TYPE __LiteNetLibConnectionManager__StartServerParams : public ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
  // Declarations
  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::StringW userId;

  /// @brief Field userName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName))::StringW userName;

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_userId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0x10b387c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__StartServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__StartServerParams(__LiteNetLibConnectionManager__StartServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__StartServerParams(__LiteNetLibConnectionManager__StartServerParams const&) = delete;

  /// @brief Field userId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___userName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams, ___userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams, ___userName) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartClientParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager::StartClientParams*
class CORDL_TYPE __LiteNetLibConnectionManager__StartClientParams : public ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams* New_ctor();

  /// @brief Method .ctor, addr 0x10b388c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__StartClientParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartClientParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__StartClientParams(__LiteNetLibConnectionManager__StartClientParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartClientParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__StartClientParams(__LiteNetLibConnectionManager__StartClientParams const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToServerParams
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager::ConnectToServerParams*
class CORDL_TYPE __LiteNetLibConnectionManager__ConnectToServerParams : public ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
  // Declarations
  /// @brief Field endPoint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_endPoint, put = __cordl_internal_set_endPoint))::System::Net::IPEndPoint* endPoint;

  /// @brief Field serverIsConnectionOwner, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_serverIsConnectionOwner, put = __cordl_internal_set_serverIsConnectionOwner)) bool serverIsConnectionOwner;

  /// @brief Field serverUserId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_serverUserId, put = __cordl_internal_set_serverUserId))::StringW serverUserId;

  /// @brief Field serverUserName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_serverUserName, put = __cordl_internal_set_serverUserName))::StringW serverUserName;

  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::StringW userId;

  /// @brief Field userName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName))::StringW userName;

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams* New_ctor();

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_endPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __cordl_internal_get_endPoint() const;

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

  /// @brief Method .ctor, addr 0x10b389c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__ConnectToServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__ConnectToServerParams(__LiteNetLibConnectionManager__ConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__ConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__ConnectToServerParams(__LiteNetLibConnectionManager__ConnectToServerParams const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams, ___userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams, ___userName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams, ___endPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams, ___serverUserId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams, ___serverUserName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams, ___serverIsConnectionOwner) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NetPeerConnectionRequest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager::NetPeerConnectionRequest*
class CORDL_TYPE __LiteNetLibConnectionManager__NetPeerConnectionRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isConnectionOwner, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner, put = __cordl_internal_set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request))::LiteNetLib::ConnectionRequest* _request;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName))::StringW _userName;

  __declspec(property(get = get_endPoint))::System::Net::IPEndPoint* endPoint;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Method Accept, addr 0x10b392c, size 0x1c, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* Accept();

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest* New_ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName,
                                                                                                     bool isConnectionOwner);

  constexpr bool const& __cordl_internal_get__isConnectionOwner() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner();

  constexpr ::LiteNetLib::ConnectionRequest*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::ConnectionRequest*> const& __cordl_internal_get__request() const;

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__isConnectionOwner(bool value);

  constexpr void __cordl_internal_set__request(::LiteNetLib::ConnectionRequest* value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0x10b38e8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method get_endPoint, addr 0x10b38cc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_endPoint();

  /// @brief Method get_isConnectionOwner, addr 0x10b38c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_userId, addr 0x10b38b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x10b38bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__NetPeerConnectionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnectionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__NetPeerConnectionRequest(__LiteNetLibConnectionManager__NetPeerConnectionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnectionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__NetPeerConnectionRequest(__LiteNetLibConnectionManager__NetPeerConnectionRequest const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest, ____userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest, ____isConnectionOwner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest, ____request) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NetPeerConnection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager::NetPeerConnection*
class CORDL_TYPE __LiteNetLibConnectionManager__NetPeerConnection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isConnectionOwner, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner, put = __cordl_internal_set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName))::StringW _userName;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Field netPeer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_netPeer, put = __cordl_internal_set_netPeer))::LiteNetLib::NetPeer* netPeer;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnection"
  constexpr operator ::GlobalNamespace::IConnection*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*() noexcept;

  /// @brief Method Disconnect, addr 0x10b3b90, size 0x1c, virtual true, abstract: false, final true
  inline void Disconnect();

  /// @brief Method Equals, addr 0x10b3a58, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x10b3a2c, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* other);

  /// @brief Method GetHashCode, addr 0x10b3b70, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* New_ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method Send, addr 0x10b39a4, size 0x88, virtual true, abstract: false, final true
  inline void Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  constexpr bool const& __cordl_internal_get__isConnectionOwner() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr ::LiteNetLib::NetPeer*& __cordl_internal_get_netPeer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __cordl_internal_get_netPeer() const;

  constexpr void __cordl_internal_set__isConnectionOwner(bool value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  constexpr void __cordl_internal_set_netPeer(::LiteNetLib::NetPeer* value);

  /// @brief Method .ctor, addr 0x10b3960, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method get_isConnectionOwner, addr 0x10b3958, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_userId, addr 0x10b3948, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x10b3950, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnection"
  constexpr ::GlobalNamespace::IConnection* i___GlobalNamespace__IConnection() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*
  i___System__IEquatable_1___GlobalNamespace____LiteNetLibConnectionManager__NetPeerConnection__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__NetPeerConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__NetPeerConnection(__LiteNetLibConnectionManager__NetPeerConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__NetPeerConnection(__LiteNetLibConnectionManager__NetPeerConnection const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection, ____userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection, ____isConnectionOwner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection, ___netPeer) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager::<>c*
class CORDL_TYPE __LiteNetLibConnectionManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LiteNetLibConnectionManager____c* __9;

  /// @brief Field <>9__70_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__70_0, put = setStaticF___9__70_0))::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* __9__70_0;

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager____c* New_ctor();

  /// @brief Method .ctor, addr 0x10b3c10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_hasConnectionOwner>b__70_0, addr 0x10b3c18, size 0x18, virtual false, abstract: false, final false
  inline bool _get_hasConnectionOwner_b__70_0(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* c);

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager____c* getStaticF___9();

  static inline ::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* getStaticF___9__70_0();

  static inline void setStaticF___9(::GlobalNamespace::__LiteNetLibConnectionManager____c* value);

  static inline void setStaticF___9__70_0(::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager____c(__LiteNetLibConnectionManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager____c(__LiteNetLibConnectionManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<BackgroundDisconnectSentry>d__126
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LiteNetLibConnectionManager::<BackgroundDisconnectSentry>d__126
struct CORDL_TYPE __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x10b3c30, size 0x3a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x10b3fd0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                              ::GlobalNamespace::LiteNetLibConnectionManager* __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, _cancellationToken_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<BackgroundShutdownSentry>d__127
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LiteNetLibConnectionManager::<BackgroundShutdownSentry>d__127
struct CORDL_TYPE __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x10b3fdc, size 0x3a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x10b4380, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                            ::GlobalNamespace::LiteNetLibConnectionManager* __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, _cancellationToken_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LiteNetLibConnectionManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LiteNetLibConnectionManager*
class CORDL_TYPE LiteNetLibConnectionManager : public ::System::Object {
public:
  // Declarations
  using ConnectToServerParams = ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams;

  using ConnectionState = ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState;

  using LiteNetLibConnectionParamsBase = ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase;

  using NetPeerConnection = ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection;

  using NetPeerConnectionRequest = ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest;

  using NetworkMode = ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode;

  using StartClientParams = ::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams;

  using StartServerParams = ::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams;

  using _BackgroundDisconnectSentry_d__126 = ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126;

  using _BackgroundShutdownSentry_d__127 = ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127;

  using __c = ::GlobalNamespace::__LiteNetLibConnectionManager____c;

  /// @brief Field _backgroundSentryDisconnectCts, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundSentryDisconnectCts,
                      put = __cordl_internal_set__backgroundSentryDisconnectCts))::System::Threading::CancellationTokenSource* _backgroundSentryDisconnectCts;

  /// @brief Field _backgroundSentryShutdownCts, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundSentryShutdownCts,
                      put = __cordl_internal_set__backgroundSentryShutdownCts))::System::Threading::CancellationTokenSource* _backgroundSentryShutdownCts;

  /// @brief Field _connectionRequestHandler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionRequestHandler,
                      put = __cordl_internal_set__connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field _connectionState, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionState, put = __cordl_internal_set__connectionState))::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState _connectionState;

  /// @brief Field _connections, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connections,
                      put = __cordl_internal_set__connections))::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* _connections;

  /// @brief Field _encryptionLayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionLayer, put = __cordl_internal_set__encryptionLayer))::GlobalNamespace::PacketEncryptionLayer* _encryptionLayer;

  /// @brief Field _lastPollUpdateTime, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPollUpdateTime, put = __cordl_internal_set__lastPollUpdateTime)) int64_t _lastPollUpdateTime;

  /// @brief Field _lastStatisticsUpdateTime, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__lastStatisticsUpdateTime, put = __cordl_internal_set__lastStatisticsUpdateTime)) int64_t _lastStatisticsUpdateTime;

  /// @brief Field _mode, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode))::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode _mode;

  /// @brief Field _netManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__netManager, put = __cordl_internal_set__netManager))::LiteNetLib::NetManager* _netManager;

  /// @brief Field _pendingConnections, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingConnections,
                      put = __cordl_internal_set__pendingConnections))::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* _pendingConnections;

  /// @brief Field _pendingReconnections, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingReconnections,
                      put = __cordl_internal_set__pendingReconnections))::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* _pendingReconnections;

  /// @brief Field _pendingRequests, offset 0x40, size 0x8
  __declspec(
      property(get = __cordl_internal_get__pendingRequests,
               put = __cordl_internal_set__pendingRequests))::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>* _pendingRequests;

  /// @brief Field _sentryDisconnected, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__sentryDisconnected, put = __cordl_internal_set__sentryDisconnected)) bool _sentryDisconnected;

  /// @brief Field _sentryShutdown, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get__sentryShutdown, put = __cordl_internal_set__sentryShutdown)) bool _sentryShutdown;

  /// @brief Field _taskUtility, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _unconnectedPacketHeader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__unconnectedPacketHeader, put = __cordl_internal_set__unconnectedPacketHeader))::ArrayW<uint8_t, ::Array<uint8_t>*> _unconnectedPacketHeader;

  /// @brief Field _userId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName))::StringW _userName;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;

  __declspec(property(get = get_encryptionLayer))::GlobalNamespace::PacketEncryptionLayer* encryptionLayer;

  __declspec(property(get = get_hasConnectionOwner)) bool hasConnectionOwner;

  __declspec(property(get = get_isClient)) bool isClient;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  __declspec(property(get = get_isServer)) bool isServer;

  /// @brief Field onConnectedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectedEvent, put = __cordl_internal_set_onConnectedEvent))::System::Action* onConnectedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionConnectedEvent,
                      put = __cordl_internal_set_onConnectionConnectedEvent))::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0xc0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onConnectionDisconnectedEvent,
               put = __cordl_internal_set_onConnectionDisconnectedEvent))::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionFailedEvent,
                      put = __cordl_internal_set_onConnectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onDisconnectedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_onDisconnectedEvent, put = __cordl_internal_set_onDisconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onInitializedEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_onInitializedEvent, put = __cordl_internal_set_onInitializedEvent))::System::Action* onInitializedEvent;

  /// @brief Field onReceiveUnconnectedDataEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceiveUnconnectedDataEvent,
                      put = __cordl_internal_set_onReceiveUnconnectedDataEvent))::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* onReceiveUnconnectedDataEvent;

  /// @brief Field onReceivedDataEvent, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onReceivedDataEvent,
      put = __cordl_internal_set_onReceivedDataEvent))::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  /// @brief Field onStatisticsUpdatedEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_onStatisticsUpdatedEvent,
                      put = __cordl_internal_set_onStatisticsUpdatedEvent))::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* onStatisticsUpdatedEvent;

  __declspec(property(get = get_port)) int32_t port;

  __declspec(property(get = get_unconnectedPacketHeader))::ArrayW<uint8_t, ::Array<uint8_t>*> unconnectedPacketHeader;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::INetEventListener"
  constexpr operator ::LiteNetLib::INetEventListener*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AcceptAllPendingRequests, addr 0x10b33a0, size 0xe8, virtual false, abstract: false, final false
  inline void AcceptAllPendingRequests();

  /// @brief Method BackgroundDisconnectSentry, addr 0x10b34d4, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BackgroundDisconnectSentry();

  /// @brief Method BackgroundShutdownSentry, addr 0x10b35a0, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BackgroundShutdownSentry();

  /// @brief Method CheckSentryState, addr 0x10b1c90, size 0x50, virtual false, abstract: false, final false
  inline void CheckSentryState();

  /// @brief Method ConnectToEndPoint, addr 0x10b1f9c, size 0xe8, virtual false, abstract: false, final false
  inline void ConnectToEndPoint(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner);

  /// @brief Method CreatePendingConnection, addr 0x10b217c, size 0x130, virtual false, abstract: false, final false
  inline void CreatePendingConnection(::LiteNetLib::NetPeer* peer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method Disconnect, addr 0x10b248c, size 0x8, virtual true, abstract: false, final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method DisconnectInternal, addr 0x10b2494, size 0xc4, virtual false, abstract: false, final false
  inline void DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method Dispose, addr 0x10b22ac, size 0x24, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0x10b2310, size 0x17c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method DisposeInternal, addr 0x10b22d0, size 0x40, virtual false, abstract: false, final false
  inline void DisposeInternal();

  /// @brief Method FromLiteNetDeliveryMethod, addr 0x10b3354, size 0x10, virtual false, abstract: false, final false
  static inline ::BGNet::Core::DeliveryMethod FromLiteNetDeliveryMethod(::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method GetConnection, addr 0x10b2850, size 0x58, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method GetConnection, addr 0x10b3290, size 0xc4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* GetConnection(::LiteNetLib::NetPeer* peer);

  /// @brief Method GetConnectionMessage, addr 0x10b2084, size 0xf8, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* GetConnectionMessage();

  /// @brief Method GetLogFormatConnection, addr 0x10b3784, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetLogFormatConnection(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* netPeerConnection);

  /// @brief Method GetLogFormatUserInfo, addr 0x10b37f4, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetLogFormatUserInfo(::StringW userName, ::StringW userId, ::System::Net::IPEndPoint* ipEndPoint);

  /// @brief Method HasConnectionToEndPoint, addr 0x10b2958, size 0xb8, virtual false, abstract: false, final false
  inline bool HasConnectionToEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method HasPendingConnectionToEndPoint, addr 0x10b2a10, size 0xb8, virtual false, abstract: false, final false
  inline bool HasPendingConnectionToEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method IsConnectedToUser, addr 0x10b28a8, size 0xb0, virtual false, abstract: false, final false
  inline bool IsConnectedToUser(::StringW userId);

  /// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest, addr 0x10b2d1c, size 0x158, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkError, addr 0x10b2cfc, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate, addr 0x10b2d18, size 0x4, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latencyMs);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive, addr 0x10b31c8, size 0xc8, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected, addr 0x10b3364, size 0x3c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                       ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerConnected, addr 0x10b2ac8, size 0x234, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected, addr 0x10b2f80, size 0x58, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  /// @brief Method Log, addr 0x10b366c, size 0x8c, virtual false, abstract: false, final false
  inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0x10b36f8, size 0x8c, virtual false, abstract: false, final false
  inline void LogError(::StringW msg);

  static inline ::GlobalNamespace::LiteNetLibConnectionManager* New_ctor();

  static inline ::GlobalNamespace::LiteNetLibConnectionManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method NoDomainReloadInit, addr 0x10b1680, size 0x88, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method PollUpdate, addr 0x10b1bf0, size 0xa0, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method RemoveConnection, addr 0x10b2fd8, size 0x1f0, virtual false, abstract: false, final false
  inline void RemoveConnection(::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::DisconnectReason reason);

  /// @brief Method SendToAll, addr 0x10b1a3c, size 0x8c, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll, addr 0x10b1ae0, size 0xe8, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  /// @brief Method SendUnconnectedMessage, addr 0x10b1bc8, size 0x28, virtual false, abstract: false, final false
  inline void SendUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method StartBackgroundSentry, addr 0x10b25f0, size 0x260, virtual false, abstract: false, final false
  inline void StartBackgroundSentry();

  /// @brief Method ToConnectionFailedReason, addr 0x10b34c0, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectionFailedReason ToConnectionFailedReason(::LiteNetLib::DisconnectReason disconnectReason);

  /// @brief Method ToDisconnectedReason, addr 0x10b3488, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DisconnectedReason ToDisconnectedReason(::LiteNetLib::DisconnectReason disconnectReason);

  /// @brief Method ToLiteNetDeliveryMethod, addr 0x10b1ac8, size 0x18, virtual false, abstract: false, final false
  static inline ::LiteNetLib::DeliveryMethod ToLiteNetDeliveryMethod(::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method TryAccept, addr 0x10b2e74, size 0x54, virtual false, abstract: false, final false
  inline void TryAccept(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method TryDisconnect, addr 0x10b2ec8, size 0xb8, virtual false, abstract: false, final false
  inline void TryDisconnect(::LiteNetLib::DisconnectReason reason);

  /// @brief Method TryStartNetManager, addr 0x10b2558, size 0x98, virtual false, abstract: false, final false
  inline bool TryStartNetManager(int32_t port, bool enableBackgroundSentry);

  /// @brief Method UpdateStatistics, addr 0x10b1ce0, size 0x2bc, virtual false, abstract: false, final false
  inline void UpdateStatistics();

  /// @brief Method <DisposeAsync>b__98_0, addr 0x10b3850, size 0x1c, virtual false, abstract: false, final false
  inline void _DisposeAsync_b__98_0();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__backgroundSentryDisconnectCts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__backgroundSentryDisconnectCts() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__backgroundSentryShutdownCts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__backgroundSentryShutdownCts() const;

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __cordl_internal_get__connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const& __cordl_internal_get__connectionRequestHandler() const;

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const& __cordl_internal_get__connectionState() const;

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState& __cordl_internal_get__connectionState();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*& __cordl_internal_get__connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*> const&
  __cordl_internal_get__connections() const;

  constexpr ::GlobalNamespace::PacketEncryptionLayer*& __cordl_internal_get__encryptionLayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PacketEncryptionLayer*> const& __cordl_internal_get__encryptionLayer() const;

  constexpr int64_t const& __cordl_internal_get__lastPollUpdateTime() const;

  constexpr int64_t& __cordl_internal_get__lastPollUpdateTime();

  constexpr int64_t const& __cordl_internal_get__lastStatisticsUpdateTime() const;

  constexpr int64_t& __cordl_internal_get__lastStatisticsUpdateTime();

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const& __cordl_internal_get__mode() const;

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode& __cordl_internal_get__mode();

  constexpr ::LiteNetLib::NetManager*& __cordl_internal_get__netManager();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& __cordl_internal_get__netManager() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*& __cordl_internal_get__pendingConnections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*> const&
  __cordl_internal_get__pendingConnections() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*& __cordl_internal_get__pendingReconnections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*> const& __cordl_internal_get__pendingReconnections() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>*& __cordl_internal_get__pendingRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>*> const&
  __cordl_internal_get__pendingRequests() const;

  constexpr bool const& __cordl_internal_get__sentryDisconnected() const;

  constexpr bool& __cordl_internal_get__sentryDisconnected();

  constexpr bool const& __cordl_internal_get__sentryShutdown() const;

  constexpr bool& __cordl_internal_get__sentryShutdown();

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __cordl_internal_get__taskUtility() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__unconnectedPacketHeader() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__unconnectedPacketHeader();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr ::System::Action*& __cordl_internal_get_onConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onConnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& __cordl_internal_get_onConnectionConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> const& __cordl_internal_get_onConnectionConnectedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_onConnectionDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*> const&
  __cordl_internal_get_onConnectionDisconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_onConnectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __cordl_internal_get_onConnectionFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_onDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __cordl_internal_get_onDisconnectedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_onInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onInitializedEvent() const;

  constexpr ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*& __cordl_internal_get_onReceiveUnconnectedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*> const& __cordl_internal_get_onReceiveUnconnectedDataEvent() const;

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __cordl_internal_get_onReceivedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
  __cordl_internal_get_onReceivedDataEvent() const;

  constexpr ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*& __cordl_internal_get_onStatisticsUpdatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*> const& __cordl_internal_get_onStatisticsUpdatedEvent() const;

  constexpr void __cordl_internal_set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__backgroundSentryShutdownCts(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value);

  constexpr void __cordl_internal_set__connectionState(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState value);

  constexpr void __cordl_internal_set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value);

  constexpr void __cordl_internal_set__encryptionLayer(::GlobalNamespace::PacketEncryptionLayer* value);

  constexpr void __cordl_internal_set__lastPollUpdateTime(int64_t value);

  constexpr void __cordl_internal_set__lastStatisticsUpdateTime(int64_t value);

  constexpr void __cordl_internal_set__mode(::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode value);

  constexpr void __cordl_internal_set__netManager(::LiteNetLib::NetManager* value);

  constexpr void __cordl_internal_set__pendingConnections(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value);

  constexpr void __cordl_internal_set__pendingReconnections(::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* value);

  constexpr void __cordl_internal_set__pendingRequests(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>* value);

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

  constexpr void __cordl_internal_set_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

  /// @brief Method .ctor, addr 0x10b1790, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x10b183c, size 0x200, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method add_onConnectedEvent, addr 0x10b09c8, size 0x9c, virtual true, abstract: false, final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onConnectionConnectedEvent, addr 0x10b0dc0, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent, addr 0x10b0f20, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent, addr 0x10b0c60, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onDisconnectedEvent, addr 0x10b0b00, size 0xb0, virtual true, abstract: false, final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onInitializedEvent, addr 0x10b0890, size 0x9c, virtual true, abstract: false, final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onReceiveUnconnectedDataEvent, addr 0x10b11e0, size 0xb0, virtual false, abstract: false, final false
  inline void add_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  /// @brief Method add_onReceivedDataEvent, addr 0x10b1080, size 0xb0, virtual true, abstract: false, final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method add_onStatisticsUpdatedEvent, addr 0x10b1340, size 0x9c, virtual false, abstract: false, final false
  inline void add_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

  /// @brief Method get_connectionCount, addr 0x10b1604, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_connectionCount();

  /// @brief Method get_connectionRequestHandler, addr 0x10b164c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectionRequestHandler* get_connectionRequestHandler();

  /// @brief Method get_encryptionLayer, addr 0x10b1678, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();

  /// @brief Method get_hasConnectionOwner, addr 0x10b14c8, size 0x10c, virtual false, abstract: false, final false
  inline bool get_hasConnectionOwner();

  /// @brief Method get_isClient, addr 0x10b15e4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isClient();

  /// @brief Method get_isConnected, addr 0x10b1488, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x10b1498, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0x10b14b8, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x10b14a8, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isDisposed, addr 0x10b15f4, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisposed();

  /// @brief Method get_isServer, addr 0x10b15d4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isServer();

  /// @brief Method get_port, addr 0x10b1654, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_port();

  /// @brief Method get_unconnectedPacketHeader, addr 0x10b1670, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_unconnectedPacketHeader();

  /// @brief Method get_userId, addr 0x10b1478, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x10b1480, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectionManager"
  constexpr ::GlobalNamespace::IConnectionManager* i___GlobalNamespace__IConnectionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert to "::LiteNetLib::INetEventListener"
  constexpr ::LiteNetLib::INetEventListener* i___LiteNetLib__INetEventListener() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_onConnectedEvent, addr 0x10b0a64, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectionConnectedEvent, addr 0x10b0e70, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent, addr 0x10b0fd0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent, addr 0x10b0d10, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onDisconnectedEvent, addr 0x10b0bb0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onInitializedEvent, addr 0x10b092c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onReceiveUnconnectedDataEvent, addr 0x10b1290, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  /// @brief Method remove_onReceivedDataEvent, addr 0x10b1130, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method remove_onStatisticsUpdatedEvent, addr 0x10b13dc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

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

  /// @brief Field _unconnectedPacketHeader, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____unconnectedPacketHeader;

  /// @brief Field _netManager, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::NetManager* ____netManager;

  /// @brief Field _encryptionLayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PacketEncryptionLayer* ____encryptionLayer;

  /// @brief Field _taskUtility, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _connections, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* ____connections;

  /// @brief Field _pendingConnections, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* ____pendingConnections;

  /// @brief Field _pendingRequests, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>* ____pendingRequests;

  /// @brief Field _pendingReconnections, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* ____pendingReconnections;

  /// @brief Field _userId, offset: 0x50, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _connectionRequestHandler, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionRequestHandler* ____connectionRequestHandler;

  /// @brief Field _mode, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode ____mode;

  /// @brief Field _connectionState, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState ____connectionState;

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
  ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* ___onStatisticsUpdatedEvent;

  /// @brief Field kBackgroundDisconnectTimeout offset 0xffffffff size 0x8
  static constexpr int64_t kBackgroundDisconnectTimeout{ static_cast<int64_t>(0x47868c00) };

  /// @brief Field kBackgroundShutdownTimeout offset 0xffffffff size 0x8
  static constexpr int64_t kBackgroundShutdownTimeout{ static_cast<int64_t>(0x218711a00) };

  /// @brief Field kStatisticsUpdateInterval offset 0xffffffff size 0x8
  static constexpr int64_t kStatisticsUpdateInterval{ static_cast<int64_t>(0x11e1a300) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LiteNetLibConnectionManager, 0xe0>, "Size mismatch!");

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState, "", "LiteNetLibConnectionManager/ConnectionState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode, "", "LiteNetLibConnectionManager/NetworkMode");
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager*, "", "LiteNetLibConnectionManager");
NEED_NO_BOX(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams*, "", "LiteNetLibConnectionManager/ConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase*, "", "LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase");
NEED_NO_BOX(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*, "", "LiteNetLibConnectionManager/NetPeerConnection");
NEED_NO_BOX(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*, "", "LiteNetLibConnectionManager/NetPeerConnectionRequest");
NEED_NO_BOX(::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams*, "", "LiteNetLibConnectionManager/StartClientParams");
NEED_NO_BOX(::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams*, "", "LiteNetLibConnectionManager/StartServerParams");
NEED_NO_BOX(::GlobalNamespace::__LiteNetLibConnectionManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager____c*, "", "LiteNetLibConnectionManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, "", "LiteNetLibConnectionManager/<BackgroundDisconnectSentry>d__126");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, "", "LiteNetLibConnectionManager/<BackgroundShutdownSentry>d__127");
