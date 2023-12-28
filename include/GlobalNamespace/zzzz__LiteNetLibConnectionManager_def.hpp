#pragma once
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
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__NetPeerConnection;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager____c;
}
namespace LiteNetLib {
class NetManager;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager__ConnectionState;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace GlobalNamespace {
class __NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace LiteNetLib {
class NetPeer;
}
namespace GlobalNamespace {
struct __LiteNetLibConnectionManager__NetworkMode;
}
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__ConnectToServerParams;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class IConnection;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__StartServerParams;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __LiteNetLibConnectionManager__NetPeerConnectionRequest;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct DisconnectedReason;
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
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12820))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager__NetworkMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__NetworkMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const None;

  /// @brief Field Client value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const Client;

  /// @brief Field Server value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const Server;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12821))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager__ConnectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__ConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unconnected value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Unconnected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Connecting;

  /// @brief Field Connected value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Connected;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const Disconnecting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LiteNetLibConnectionParamsBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12822))
// CS Name: ::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase*
class CORDL_TYPE __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field connectionRequestHandler, offset 0x10, size 0x8
  __declspec(property(get = __get_connectionRequestHandler, put = __set_connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;

  /// @brief Field port, offset 0x18, size 0x4
  __declspec(property(get = __get_port, put = __set_port)) int32_t port;

  /// @brief Field filterUnencryptedTraffic, offset 0x1c, size 0x1
  __declspec(property(get = __get_filterUnencryptedTraffic, put = __set_filterUnencryptedTraffic)) bool filterUnencryptedTraffic;

  /// @brief Field enableUnconnectedMessages, offset 0x1d, size 0x1
  __declspec(property(get = __get_enableUnconnectedMessages, put = __set_enableUnconnectedMessages)) bool enableUnconnectedMessages;

  /// @brief Field enableBackgroundSentry, offset 0x1e, size 0x1
  __declspec(property(get = __get_enableBackgroundSentry, put = __set_enableBackgroundSentry)) bool enableBackgroundSentry;

  /// @brief Field enableStatistics, offset 0x1f, size 0x1
  __declspec(property(get = __get_enableStatistics, put = __set_enableStatistics)) bool enableStatistics;

  /// @brief Field disconnectTimeoutMs, offset 0x20, size 0x4
  __declspec(property(get = __get_disconnectTimeoutMs, put = __set_disconnectTimeoutMs)) int32_t disconnectTimeoutMs;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*() noexcept;

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __get_connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const& __get_connectionRequestHandler() const;

  constexpr void __set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value);

  constexpr int32_t& __get_port();

  constexpr int32_t const& __get_port() const;

  constexpr void __set_port(int32_t value);

  constexpr bool& __get_filterUnencryptedTraffic();

  constexpr bool const& __get_filterUnencryptedTraffic() const;

  constexpr void __set_filterUnencryptedTraffic(bool value);

  constexpr bool& __get_enableUnconnectedMessages();

  constexpr bool const& __get_enableUnconnectedMessages() const;

  constexpr void __set_enableUnconnectedMessages(bool value);

  constexpr bool& __get_enableBackgroundSentry();

  constexpr bool const& __get_enableBackgroundSentry() const;

  constexpr void __set_enableBackgroundSentry(bool value);

  constexpr bool& __get_enableStatistics();

  constexpr bool const& __get_enableStatistics() const;

  constexpr void __set_enableStatistics(bool value);

  constexpr int32_t& __get_disconnectTimeoutMs();

  constexpr int32_t const& __get_disconnectTimeoutMs() const;

  constexpr void __set_disconnectTimeoutMs(int32_t value);

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase* New_ctor();

  /// @brief Method .ctor addr 0xe425d4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase();

public:
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

} // namespace GlobalNamespace
// Type: ::StartServerParams
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12822))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12823))
// CS Name: ::LiteNetLibConnectionManager::StartServerParams*
class CORDL_TYPE __LiteNetLibConnectionManager__StartServerParams : public ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
  // Declarations
  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field userName, offset 0x30, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams* New_ctor();

  /// @brief Method .ctor addr 0xe425e4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__StartServerParams(__LiteNetLibConnectionManager__StartServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__StartServerParams(__LiteNetLibConnectionManager__StartServerParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__StartServerParams();

public:
  /// @brief Field userId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___userName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::StartClientParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12822))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12824))
// CS Name: ::LiteNetLibConnectionManager::StartClientParams*
class CORDL_TYPE __LiteNetLibConnectionManager__StartClientParams : public ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams* New_ctor();

  /// @brief Method .ctor addr 0xe425f4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartClientParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__StartClientParams(__LiteNetLibConnectionManager__StartClientParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__StartClientParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__StartClientParams(__LiteNetLibConnectionManager__StartClientParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__StartClientParams();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToServerParams
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12822))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12825))
// CS Name: ::LiteNetLibConnectionManager::ConnectToServerParams*
class CORDL_TYPE __LiteNetLibConnectionManager__ConnectToServerParams : public ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
  // Declarations
  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field userName, offset 0x30, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  /// @brief Field endPoint, offset 0x38, size 0x8
  __declspec(property(get = __get_endPoint, put = __set_endPoint))::System::Net::IPEndPoint* endPoint;

  /// @brief Field serverUserId, offset 0x40, size 0x8
  __declspec(property(get = __get_serverUserId, put = __set_serverUserId))::StringW serverUserId;

  /// @brief Field serverUserName, offset 0x48, size 0x8
  __declspec(property(get = __get_serverUserName, put = __set_serverUserName))::StringW serverUserName;

  /// @brief Field serverIsConnectionOwner, offset 0x50, size 0x1
  __declspec(property(get = __get_serverIsConnectionOwner, put = __set_serverIsConnectionOwner)) bool serverIsConnectionOwner;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  constexpr ::System::Net::IPEndPoint*& __get_endPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __get_endPoint() const;

  constexpr void __set_endPoint(::System::Net::IPEndPoint* value);

  constexpr ::StringW& __get_serverUserId();

  constexpr ::StringW const& __get_serverUserId() const;

  constexpr void __set_serverUserId(::StringW value);

  constexpr ::StringW& __get_serverUserName();

  constexpr ::StringW const& __get_serverUserName() const;

  constexpr void __set_serverUserName(::StringW value);

  constexpr bool& __get_serverIsConnectionOwner();

  constexpr bool const& __get_serverIsConnectionOwner() const;

  constexpr void __set_serverIsConnectionOwner(bool value);

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams* New_ctor();

  /// @brief Method .ctor addr 0xe42604 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__ConnectToServerParams(__LiteNetLibConnectionManager__ConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__ConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__ConnectToServerParams(__LiteNetLibConnectionManager__ConnectToServerParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__ConnectToServerParams();

public:
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

} // namespace GlobalNamespace
// Type: ::NetPeerConnectionRequest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12826))
// CS Name: ::LiteNetLibConnectionManager::NetPeerConnectionRequest*
class CORDL_TYPE __LiteNetLibConnectionManager__NetPeerConnectionRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _isConnectionOwner, offset 0x20, size 0x1
  __declspec(property(get = __get__isConnectionOwner, put = __set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _request, offset 0x28, size 0x8
  __declspec(property(get = __get__request, put = __set__request))::LiteNetLib::ConnectionRequest* _request;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_endPoint))::System::Net::IPEndPoint* endPoint;

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr bool& __get__isConnectionOwner();

  constexpr bool const& __get__isConnectionOwner() const;

  constexpr void __set__isConnectionOwner(bool value);

  constexpr ::LiteNetLib::ConnectionRequest*& __get__request();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::ConnectionRequest*> const& __get__request() const;

  constexpr void __set__request(::LiteNetLib::ConnectionRequest* value);

  /// @brief Method get_userId addr 0xe4261c size 0x8 virtual false final false
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0xe42624 size 0x8 virtual false final false
  inline ::StringW get_userName();

  /// @brief Method get_isConnectionOwner addr 0xe4262c size 0x8 virtual false final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_endPoint addr 0xe42634 size 0x1c virtual false final false
  inline ::System::Net::IPEndPoint* get_endPoint();

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest* New_ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName,
                                                                                                     bool isConnectionOwner);

  /// @brief Method .ctor addr 0xe42650 size 0x44 virtual false final false
  inline void _ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method Accept addr 0xe42694 size 0x1c virtual false final false
  inline ::LiteNetLib::NetPeer* Accept();

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnectionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__NetPeerConnectionRequest(__LiteNetLibConnectionManager__NetPeerConnectionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnectionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__NetPeerConnectionRequest(__LiteNetLibConnectionManager__NetPeerConnectionRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__NetPeerConnectionRequest();

public:
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

} // namespace GlobalNamespace
// Type: ::NetPeerConnection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12827))
// CS Name: ::LiteNetLibConnectionManager::NetPeerConnection*
class CORDL_TYPE __LiteNetLibConnectionManager__NetPeerConnection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _isConnectionOwner, offset 0x20, size 0x1
  __declspec(property(get = __get__isConnectionOwner, put = __set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field netPeer, offset 0x28, size 0x8
  __declspec(property(get = __get_netPeer, put = __set_netPeer))::LiteNetLib::NetPeer* netPeer;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Convert operator to "::GlobalNamespace::IConnection"
  constexpr operator ::GlobalNamespace::IConnection*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*() noexcept;

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr bool& __get__isConnectionOwner();

  constexpr bool const& __get__isConnectionOwner() const;

  constexpr void __set__isConnectionOwner(bool value);

  constexpr ::LiteNetLib::NetPeer*& __get_netPeer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __get_netPeer() const;

  constexpr void __set_netPeer(::LiteNetLib::NetPeer* value);

  /// @brief Method get_userId addr 0xe426b0 size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0xe426b8 size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_isConnectionOwner addr 0xe426c0 size 0x8 virtual true final true
  inline bool get_isConnectionOwner();

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* New_ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method .ctor addr 0xe426c8 size 0x44 virtual false final false
  inline void _ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method Send addr 0xe4270c size 0x88 virtual true final true
  inline void Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method Equals addr 0xe42794 size 0x2c virtual true final true
  inline bool Equals(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* other);

  /// @brief Method Equals addr 0xe427c0 size 0x118 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0xe428d8 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Disconnect addr 0xe428f8 size 0x1c virtual true final true
  inline void Disconnect();

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager__NetPeerConnection(__LiteNetLibConnectionManager__NetPeerConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager__NetPeerConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager__NetPeerConnection(__LiteNetLibConnectionManager__NetPeerConnection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager__NetPeerConnection();

public:
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

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12828))
// CS Name: ::LiteNetLibConnectionManager::<>c*
class CORDL_TYPE __LiteNetLibConnectionManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LiteNetLibConnectionManager____c* __9;

  /// @brief Field <>9__70_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__70_0, put = setStaticF___9__70_0))::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* __9__70_0;

  static inline void setStaticF___9(::GlobalNamespace::__LiteNetLibConnectionManager____c* value);

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager____c* getStaticF___9();

  static inline void setStaticF___9__70_0(::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value);

  static inline ::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* getStaticF___9__70_0();

  static inline ::GlobalNamespace::__LiteNetLibConnectionManager____c* New_ctor();

  /// @brief Method .ctor addr 0xe42978 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_hasConnectionOwner>b__70_0 addr 0xe42980 size 0x18 virtual false final false
  inline bool _get_hasConnectionOwner_b__70_0(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* c);

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LiteNetLibConnectionManager____c(__LiteNetLibConnectionManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LiteNetLibConnectionManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LiteNetLibConnectionManager____c(__LiteNetLibConnectionManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LiteNetLibConnectionManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<BackgroundDisconnectSentry>d__126
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12829))
// CS Name: ::LiteNetLibConnectionManager::<BackgroundDisconnectSentry>d__126
struct CORDL_TYPE __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe42998 size 0x3a0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe42d38 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                              ::GlobalNamespace::LiteNetLibConnectionManager* __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126();

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

} // namespace GlobalNamespace
// Type: ::<BackgroundShutdownSentry>d__127
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12830))
// CS Name: ::LiteNetLibConnectionManager::<BackgroundShutdownSentry>d__127
struct CORDL_TYPE __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe42d44 size 0x3a4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe430e8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                            ::GlobalNamespace::LiteNetLibConnectionManager* __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127();

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

} // namespace GlobalNamespace
// Type: ::LiteNetLibConnectionManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12821)), TypeDefinitionIndex(TypeDefinitionIndex(12820)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12831))
// CS Name: ::LiteNetLibConnectionManager*
class CORDL_TYPE LiteNetLibConnectionManager : public ::System::Object {
public:
  // Declarations
  using _BackgroundShutdownSentry_d__127 = ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127;

  using _BackgroundDisconnectSentry_d__126 = ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126;

  using __c = ::GlobalNamespace::__LiteNetLibConnectionManager____c;

  using NetPeerConnection = ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection;

  using NetPeerConnectionRequest = ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest;

  using ConnectToServerParams = ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams;

  using StartClientParams = ::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams;

  using StartServerParams = ::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams;

  using LiteNetLibConnectionParamsBase = ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase;

  using ConnectionState = ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState;

  using NetworkMode = ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode;

  /// @brief Field _unconnectedPacketHeader, offset 0x10, size 0x8
  __declspec(property(get = __get__unconnectedPacketHeader, put = __set__unconnectedPacketHeader))::ArrayW<uint8_t, ::Array<uint8_t>*> _unconnectedPacketHeader;

  /// @brief Field _netManager, offset 0x18, size 0x8
  __declspec(property(get = __get__netManager, put = __set__netManager))::LiteNetLib::NetManager* _netManager;

  /// @brief Field _encryptionLayer, offset 0x20, size 0x8
  __declspec(property(get = __get__encryptionLayer, put = __set__encryptionLayer))::GlobalNamespace::PacketEncryptionLayer* _encryptionLayer;

  /// @brief Field _taskUtility, offset 0x28, size 0x8
  __declspec(property(get = __get__taskUtility, put = __set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _connections, offset 0x30, size 0x8
  __declspec(property(get = __get__connections, put = __set__connections))::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* _connections;

  /// @brief Field _pendingConnections, offset 0x38, size 0x8
  __declspec(property(get = __get__pendingConnections,
                      put = __set__pendingConnections))::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* _pendingConnections;

  /// @brief Field _pendingRequests, offset 0x40, size 0x8
  __declspec(property(get = __get__pendingRequests,
                      put = __set__pendingRequests))::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>* _pendingRequests;

  /// @brief Field _pendingReconnections, offset 0x48, size 0x8
  __declspec(property(get = __get__pendingReconnections, put = __set__pendingReconnections))::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* _pendingReconnections;

  /// @brief Field _userId, offset 0x50, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x58, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _connectionRequestHandler, offset 0x60, size 0x8
  __declspec(property(get = __get__connectionRequestHandler, put = __set__connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field _mode, offset 0x68, size 0x4
  __declspec(property(get = __get__mode, put = __set__mode))::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode _mode;

  /// @brief Field _connectionState, offset 0x6c, size 0x4
  __declspec(property(get = __get__connectionState, put = __set__connectionState))::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState _connectionState;

  /// @brief Field _backgroundSentryDisconnectCts, offset 0x70, size 0x8
  __declspec(property(get = __get__backgroundSentryDisconnectCts, put = __set__backgroundSentryDisconnectCts))::System::Threading::CancellationTokenSource* _backgroundSentryDisconnectCts;

  /// @brief Field _backgroundSentryShutdownCts, offset 0x78, size 0x8
  __declspec(property(get = __get__backgroundSentryShutdownCts, put = __set__backgroundSentryShutdownCts))::System::Threading::CancellationTokenSource* _backgroundSentryShutdownCts;

  /// @brief Field _sentryDisconnected, offset 0x80, size 0x1
  __declspec(property(get = __get__sentryDisconnected, put = __set__sentryDisconnected)) bool _sentryDisconnected;

  /// @brief Field _sentryShutdown, offset 0x81, size 0x1
  __declspec(property(get = __get__sentryShutdown, put = __set__sentryShutdown)) bool _sentryShutdown;

  /// @brief Field _lastPollUpdateTime, offset 0x88, size 0x8
  __declspec(property(get = __get__lastPollUpdateTime, put = __set__lastPollUpdateTime)) int64_t _lastPollUpdateTime;

  /// @brief Field _lastStatisticsUpdateTime, offset 0x90, size 0x8
  __declspec(property(get = __get__lastStatisticsUpdateTime, put = __set__lastStatisticsUpdateTime)) int64_t _lastStatisticsUpdateTime;

  /// @brief Field onInitializedEvent, offset 0x98, size 0x8
  __declspec(property(get = __get_onInitializedEvent, put = __set_onInitializedEvent))::System::Action* onInitializedEvent;

  /// @brief Field onConnectedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_onConnectedEvent, put = __set_onConnectedEvent))::System::Action* onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __get_onDisconnectedEvent, put = __set_onDisconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0xb0, size 0x8
  __declspec(property(get = __get_onConnectionFailedEvent, put = __set_onConnectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __get_onConnectionConnectedEvent, put = __set_onConnectionConnectedEvent))::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get_onConnectionDisconnectedEvent,
                      put = __set_onConnectionDisconnectedEvent))::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_onReceivedDataEvent,
                      put = __set_onReceivedDataEvent))::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  /// @brief Field onReceiveUnconnectedDataEvent, offset 0xd0, size 0x8
  __declspec(property(get = __get_onReceiveUnconnectedDataEvent,
                      put = __set_onReceiveUnconnectedDataEvent))::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* onReceiveUnconnectedDataEvent;

  /// @brief Field onStatisticsUpdatedEvent, offset 0xd8, size 0x8
  __declspec(property(get = __get_onStatisticsUpdatedEvent,
                      put = __set_onStatisticsUpdatedEvent))::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* onStatisticsUpdatedEvent;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_hasConnectionOwner)) bool hasConnectionOwner;

  __declspec(property(get = get_isServer)) bool isServer;

  __declspec(property(get = get_isClient)) bool isClient;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;

  __declspec(property(get = get_port)) int32_t port;

  __declspec(property(get = get_unconnectedPacketHeader))::ArrayW<uint8_t, ::Array<uint8_t>*> unconnectedPacketHeader;

  __declspec(property(get = get_encryptionLayer))::GlobalNamespace::PacketEncryptionLayer* encryptionLayer;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::INetEventListener"
  constexpr operator ::LiteNetLib::INetEventListener*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__unconnectedPacketHeader();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__unconnectedPacketHeader() const;

  constexpr void __set__unconnectedPacketHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::LiteNetLib::NetManager*& __get__netManager();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& __get__netManager() const;

  constexpr void __set__netManager(::LiteNetLib::NetManager* value);

  constexpr ::GlobalNamespace::PacketEncryptionLayer*& __get__encryptionLayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PacketEncryptionLayer*> const& __get__encryptionLayer() const;

  constexpr void __set__encryptionLayer(::GlobalNamespace::PacketEncryptionLayer* value);

  constexpr ::BGNet::Core::ITaskUtility*& __get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __get__taskUtility() const;

  constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*& __get__connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*> const& __get__connections() const;

  constexpr void __set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*& __get__pendingConnections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*> const& __get__pendingConnections() const;

  constexpr void __set__pendingConnections(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>*& __get__pendingRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>*> const&
  __get__pendingRequests() const;

  constexpr void __set__pendingRequests(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*& __get__pendingReconnections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*> const& __get__pendingReconnections() const;

  constexpr void __set__pendingReconnections(::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* value);

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __get__connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const& __get__connectionRequestHandler() const;

  constexpr void __set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value);

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode& __get__mode();

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const& __get__mode() const;

  constexpr void __set__mode(::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode value);

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState& __get__connectionState();

  constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const& __get__connectionState() const;

  constexpr void __set__connectionState(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__backgroundSentryDisconnectCts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__backgroundSentryDisconnectCts() const;

  constexpr void __set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__backgroundSentryShutdownCts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__backgroundSentryShutdownCts() const;

  constexpr void __set__backgroundSentryShutdownCts(::System::Threading::CancellationTokenSource* value);

  constexpr bool& __get__sentryDisconnected();

  constexpr bool const& __get__sentryDisconnected() const;

  constexpr void __set__sentryDisconnected(bool value);

  constexpr bool& __get__sentryShutdown();

  constexpr bool const& __get__sentryShutdown() const;

  constexpr void __set__sentryShutdown(bool value);

  constexpr int64_t& __get__lastPollUpdateTime();

  constexpr int64_t const& __get__lastPollUpdateTime() const;

  constexpr void __set__lastPollUpdateTime(int64_t value);

  constexpr int64_t& __get__lastStatisticsUpdateTime();

  constexpr int64_t const& __get__lastStatisticsUpdateTime() const;

  constexpr void __set__lastStatisticsUpdateTime(int64_t value);

  constexpr ::System::Action*& __get_onInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onInitializedEvent() const;

  constexpr void __set_onInitializedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_onConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onConnectedEvent() const;

  constexpr void __set_onConnectedEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __get_onDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __get_onDisconnectedEvent() const;

  constexpr void __set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __get_onConnectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __get_onConnectionFailedEvent() const;

  constexpr void __set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& __get_onConnectionConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> const& __get_onConnectionConnectedEvent() const;

  constexpr void __set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& __get_onConnectionDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*> const& __get_onConnectionDisconnectedEvent() const;

  constexpr void __set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __get_onReceivedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
  __get_onReceivedDataEvent() const;

  constexpr void __set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  constexpr ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*& __get_onReceiveUnconnectedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*> const& __get_onReceiveUnconnectedDataEvent() const;

  constexpr void __set_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  constexpr ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*& __get_onStatisticsUpdatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*> const& __get_onStatisticsUpdatedEvent() const;

  constexpr void __set_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

  /// @brief Method add_onInitializedEvent addr 0xe3f5f8 size 0x9c virtual true final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onInitializedEvent addr 0xe3f694 size 0x9c virtual true final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onConnectedEvent addr 0xe3f730 size 0x9c virtual true final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectedEvent addr 0xe3f7cc size 0x9c virtual true final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onDisconnectedEvent addr 0xe3f868 size 0xb0 virtual true final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onDisconnectedEvent addr 0xe3f918 size 0xb0 virtual true final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent addr 0xe3f9c8 size 0xb0 virtual true final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent addr 0xe3fa78 size 0xb0 virtual true final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onConnectionConnectedEvent addr 0xe3fb28 size 0xb0 virtual true final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionConnectedEvent addr 0xe3fbd8 size 0xb0 virtual true final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent addr 0xe3fc88 size 0xb0 virtual true final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent addr 0xe3fd38 size 0xb0 virtual true final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onReceivedDataEvent addr 0xe3fde8 size 0xb0 virtual true final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method remove_onReceivedDataEvent addr 0xe3fe98 size 0xb0 virtual true final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method add_onReceiveUnconnectedDataEvent addr 0xe3ff48 size 0xb0 virtual false final false
  inline void add_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  /// @brief Method remove_onReceiveUnconnectedDataEvent addr 0xe3fff8 size 0xb0 virtual false final false
  inline void remove_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value);

  /// @brief Method add_onStatisticsUpdatedEvent addr 0xe400a8 size 0x9c virtual false final false
  inline void add_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

  /// @brief Method remove_onStatisticsUpdatedEvent addr 0xe40144 size 0x9c virtual false final false
  inline void remove_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

  /// @brief Method get_userId addr 0xe401e0 size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0xe401e8 size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_isConnected addr 0xe401f0 size 0x10 virtual true final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting addr 0xe40200 size 0x10 virtual true final true
  inline bool get_isConnecting();

  /// @brief Method get_isDisconnecting addr 0xe40210 size 0x10 virtual true final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isConnectionOwner addr 0xe40220 size 0x10 virtual true final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_hasConnectionOwner addr 0xe40230 size 0x10c virtual false final false
  inline bool get_hasConnectionOwner();

  /// @brief Method get_isServer addr 0xe4033c size 0x10 virtual false final false
  inline bool get_isServer();

  /// @brief Method get_isClient addr 0xe4034c size 0x10 virtual false final false
  inline bool get_isClient();

  /// @brief Method get_isDisposed addr 0xe4035c size 0x10 virtual true final true
  inline bool get_isDisposed();

  /// @brief Method get_connectionCount addr 0xe4036c size 0x48 virtual true final true
  inline int32_t get_connectionCount();

  /// @brief Method get_connectionRequestHandler addr 0xe403b4 size 0x8 virtual false final false
  inline ::GlobalNamespace::IConnectionRequestHandler* get_connectionRequestHandler();

  /// @brief Method get_port addr 0xe403bc size 0x1c virtual false final false
  inline int32_t get_port();

  /// @brief Method get_unconnectedPacketHeader addr 0xe403d8 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_unconnectedPacketHeader();

  /// @brief Method get_encryptionLayer addr 0xe403e0 size 0x8 virtual false final false
  inline ::GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();

  /// @brief Method NoDomainReloadInit addr 0xe403e8 size 0x88 virtual false final false
  static inline void NoDomainReloadInit();

  static inline ::GlobalNamespace::LiteNetLibConnectionManager* New_ctor();

  /// @brief Method .ctor addr 0xe404f8 size 0xac virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::LiteNetLibConnectionManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method .ctor addr 0xe405a4 size 0x200 virtual false final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method SendToAll addr 0xe407a4 size 0x8c virtual true final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll addr 0xe40848 size 0xe8 virtual true final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  /// @brief Method SendUnconnectedMessage addr 0xe40930 size 0x28 virtual false final false
  inline void SendUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method PollUpdate addr 0xe40958 size 0xa0 virtual true final true
  inline void PollUpdate();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method ConnectToEndPoint addr 0xe40d04 size 0xe8 virtual false final false
  inline void ConnectToEndPoint(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner);

  /// @brief Method Dispose addr 0xe41014 size 0x24 virtual true final true
  inline void Dispose();

  /// @brief Method DisposeAsync addr 0xe41078 size 0x17c virtual true final true
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method DisposeInternal addr 0xe41038 size 0x40 virtual false final false
  inline void DisposeInternal();

  /// @brief Method Disconnect addr 0xe411f4 size 0x8 virtual true final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method DisconnectInternal addr 0xe411fc size 0xc4 virtual false final false
  inline void DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method TryStartNetManager addr 0xe412c0 size 0x98 virtual false final false
  inline bool TryStartNetManager(int32_t port, bool enableBackgroundSentry);

  /// @brief Method StartBackgroundSentry addr 0xe41358 size 0x260 virtual false final false
  inline void StartBackgroundSentry();

  /// @brief Method CheckSentryState addr 0xe409f8 size 0x50 virtual false final false
  inline void CheckSentryState();

  /// @brief Method UpdateStatistics addr 0xe40a48 size 0x2bc virtual false final false
  inline void UpdateStatistics();

  /// @brief Method GetConnection addr 0xe415b8 size 0x58 virtual true final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method IsConnectedToUser addr 0xe41610 size 0xb0 virtual false final false
  inline bool IsConnectedToUser(::StringW userId);

  /// @brief Method HasConnectionToEndPoint addr 0xe416c0 size 0xb8 virtual false final false
  inline bool HasConnectionToEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method HasPendingConnectionToEndPoint addr 0xe41778 size 0xb8 virtual false final false
  inline bool HasPendingConnectionToEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerConnected addr 0xe41830 size 0x234 virtual true final true
  inline void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkError addr 0xe41a64 size 0x1c virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate addr 0xe41a80 size 0x4 virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latencyMs);

  /// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest addr 0xe41a84 size 0x158 virtual true final true
  inline void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected addr 0xe41ce8 size 0x58 virtual true final true
  inline void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive addr 0xe41f30 size 0xc8 virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected addr 0xe420cc size 0x3c virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                       ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method GetConnection addr 0xe41ff8 size 0xc4 virtual false final false
  inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* GetConnection(::LiteNetLib::NetPeer* peer);

  /// @brief Method AcceptAllPendingRequests addr 0xe42108 size 0xe8 virtual false final false
  inline void AcceptAllPendingRequests();

  /// @brief Method TryAccept addr 0xe41bdc size 0x54 virtual false final false
  inline void TryAccept(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method CreatePendingConnection addr 0xe40ee4 size 0x130 virtual false final false
  inline void CreatePendingConnection(::LiteNetLib::NetPeer* peer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method RemoveConnection addr 0xe41d40 size 0x1f0 virtual false final false
  inline void RemoveConnection(::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::DisconnectReason reason);

  /// @brief Method TryDisconnect addr 0xe41c30 size 0xb8 virtual false final false
  inline void TryDisconnect(::LiteNetLib::DisconnectReason reason);

  /// @brief Method ToDisconnectedReason addr 0xe421f0 size 0x38 virtual false final false
  inline ::GlobalNamespace::DisconnectedReason ToDisconnectedReason(::LiteNetLib::DisconnectReason disconnectReason);

  /// @brief Method ToConnectionFailedReason addr 0xe42228 size 0x14 virtual false final false
  inline ::GlobalNamespace::ConnectionFailedReason ToConnectionFailedReason(::LiteNetLib::DisconnectReason disconnectReason);

  /// @brief Method GetConnectionMessage addr 0xe40dec size 0xf8 virtual false final false
  inline ::LiteNetLib::Utils::NetDataWriter* GetConnectionMessage();

  /// @brief Method BackgroundDisconnectSentry addr 0xe4223c size 0xcc virtual false final false
  inline ::System::Threading::Tasks::Task* BackgroundDisconnectSentry();

  /// @brief Method BackgroundShutdownSentry addr 0xe42308 size 0xcc virtual false final false
  inline ::System::Threading::Tasks::Task* BackgroundShutdownSentry();

  /// @brief Method ToLiteNetDeliveryMethod addr 0xe40830 size 0x18 virtual false final false
  static inline ::LiteNetLib::DeliveryMethod ToLiteNetDeliveryMethod(::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method FromLiteNetDeliveryMethod addr 0xe420bc size 0x10 virtual false final false
  static inline ::BGNet::Core::DeliveryMethod FromLiteNetDeliveryMethod(::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Log addr 0xe423d4 size 0x8c virtual false final false
  inline void Log(::StringW msg);

  /// @brief Method LogError addr 0xe42460 size 0x8c virtual false final false
  inline void LogError(::StringW msg);

  /// @brief Method GetLogFormatConnection addr 0xe424ec size 0x70 virtual false final false
  static inline ::StringW GetLogFormatConnection(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* netPeerConnection);

  /// @brief Method GetLogFormatUserInfo addr 0xe4255c size 0x5c virtual false final false
  static inline ::StringW GetLogFormatUserInfo(::StringW userName, ::StringW userId, ::System::Net::IPEndPoint* ipEndPoint);

  /// @brief Method <DisposeAsync>b__98_0 addr 0xe425b8 size 0x1c virtual false final false
  inline void _DisposeAsync_b__98_0();

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteNetLibConnectionManager(LiteNetLibConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteNetLibConnectionManager(LiteNetLibConnectionManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteNetLibConnectionManager();

public:
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
