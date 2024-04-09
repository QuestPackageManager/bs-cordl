#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IgnoranceConnectionManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceConnectionManager)
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
class __IgnoranceConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnectionParamsBase;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnection;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___DisposeAsync_d__77;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_0;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_1;
}
namespace IgnoranceCore {
struct IgnoranceChannelTypes;
}
namespace IgnoranceCore {
class IgnoranceClient;
}
namespace IgnoranceCore {
class IgnoranceServer;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Forward declare root types
namespace GlobalNamespace {
struct __IgnoranceConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class IgnoranceConnectionManager;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnection;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnectionParamsBase;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_0;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_1;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___DisposeAsync_d__77;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState);
MARK_REF_PTR_T(::GlobalNamespace::IgnoranceConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1);
MARK_VAL_T(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99);
MARK_VAL_T(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77);
// Type: ::ConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::IgnoranceConnectionManager::ConnectionState
struct CORDL_TYPE __IgnoranceConnectionManager__ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IgnoranceConnectionManager__ConnectionState_Unwrapped
  enum struct ____IgnoranceConnectionManager__ConnectionState_Unwrapped : int32_t {
    __E_Connecting = static_cast<int32_t>(0x0),
    __E_Connected = static_cast<int32_t>(0x1),
    __E_Disconnecting = static_cast<int32_t>(0x2),
    __E_Disconnected = static_cast<int32_t>(0x3),
    __E_Disposed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IgnoranceConnectionManager__ConnectionState_Unwrapped() const noexcept {
    return static_cast<____IgnoranceConnectionManager__ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager__ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IgnoranceConnectionManager__ConnectionState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Connected value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Connected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Connecting;

  /// @brief Field Disconnected value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Disconnected;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Disconnecting;

  /// @brief Field Disposed value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Disposed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IgnoranceConnectionParamsBase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IgnoranceConnectionManager::IgnoranceConnectionParamsBase*
class CORDL_TYPE __IgnoranceConnectionManager__IgnoranceConnectionParamsBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field connectionRequestHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionRequestHandler, put = __cordl_internal_set_connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;

  /// @brief Field enableBackgroundSentry, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_enableBackgroundSentry, put = __cordl_internal_set_enableBackgroundSentry)) bool enableBackgroundSentry;

  /// @brief Field useSsl, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_useSsl, put = __cordl_internal_set_useSsl)) bool useSsl;

  /// @brief Field userId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::StringW userId;

  /// @brief Field userName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>*() noexcept;

  static inline ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase* New_ctor();

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __cordl_internal_get_connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const& __cordl_internal_get_connectionRequestHandler() const;

  constexpr bool const& __cordl_internal_get_enableBackgroundSentry() const;

  constexpr bool& __cordl_internal_get_enableBackgroundSentry();

  constexpr bool const& __cordl_internal_get_useSsl() const;

  constexpr bool& __cordl_internal_get_useSsl();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value);

  constexpr void __cordl_internal_set_enableBackgroundSentry(bool value);

  constexpr void __cordl_internal_set_useSsl(bool value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0xfa8cdc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>"
  constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>*
  i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__IgnoranceConnectionManager__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager__IgnoranceConnectionParamsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnectionParamsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IgnoranceConnectionManager__IgnoranceConnectionParamsBase(__IgnoranceConnectionManager__IgnoranceConnectionParamsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnectionParamsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IgnoranceConnectionManager__IgnoranceConnectionParamsBase(__IgnoranceConnectionManager__IgnoranceConnectionParamsBase const&) = delete;

  /// @brief Field connectionRequestHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionRequestHandler* ___connectionRequestHandler;

  /// @brief Field useSsl, offset: 0x18, size: 0x1, def value: None
  bool ___useSsl;

  /// @brief Field userId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field enableBackgroundSentry, offset: 0x30, size: 0x1, def value: None
  bool ___enableBackgroundSentry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, ___connectionRequestHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, ___useSsl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, ___userId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, ___userName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, ___enableBackgroundSentry) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartServerParams
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IgnoranceConnectionManager::StartServerParams*
class CORDL_TYPE __IgnoranceConnectionManager__StartServerParams : public ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase {
public:
  // Declarations
  /// @brief Field certificate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate))::StringW certificate;

  /// @brief Field certificatePath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_certificatePath, put = __cordl_internal_set_certificatePath))::StringW certificatePath;

  /// @brief Field port, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  /// @brief Field privateKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey))::StringW privateKey;

  /// @brief Field privateKeyPath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKeyPath, put = __cordl_internal_set_privateKeyPath))::StringW privateKeyPath;

  static inline ::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_certificate() const;

  constexpr ::StringW& __cordl_internal_get_certificate();

  constexpr ::StringW const& __cordl_internal_get_certificatePath() const;

  constexpr ::StringW& __cordl_internal_get_certificatePath();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr ::StringW const& __cordl_internal_get_privateKey() const;

  constexpr ::StringW& __cordl_internal_get_privateKey();

  constexpr ::StringW const& __cordl_internal_get_privateKeyPath() const;

  constexpr ::StringW& __cordl_internal_get_privateKeyPath();

  constexpr void __cordl_internal_set_certificate(::StringW value);

  constexpr void __cordl_internal_set_certificatePath(::StringW value);

  constexpr void __cordl_internal_set_port(int32_t value);

  constexpr void __cordl_internal_set_privateKey(::StringW value);

  constexpr void __cordl_internal_set_privateKeyPath(::StringW value);

  /// @brief Method .ctor, addr 0xfa8cec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager__StartServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IgnoranceConnectionManager__StartServerParams(__IgnoranceConnectionManager__StartServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__StartServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IgnoranceConnectionManager__StartServerParams(__IgnoranceConnectionManager__StartServerParams const&) = delete;

  /// @brief Field port, offset: 0x34, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field certificatePath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___certificatePath;

  /// @brief Field certificate, offset: 0x40, size: 0x8, def value: None
  ::StringW ___certificate;

  /// @brief Field privateKeyPath, offset: 0x48, size: 0x8, def value: None
  ::StringW ___privateKeyPath;

  /// @brief Field privateKey, offset: 0x50, size: 0x8, def value: None
  ::StringW ___privateKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams, ___port) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams, ___certificatePath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams, ___certificate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams, ___privateKeyPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams, ___privateKey) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToServerParams
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IgnoranceConnectionManager::ConnectToServerParams*
class CORDL_TYPE __IgnoranceConnectionManager__ConnectToServerParams : public ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase {
public:
  // Declarations
  /// @brief Field hostName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_hostName, put = __cordl_internal_set_hostName))::StringW hostName;

  /// @brief Field port, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  /// @brief Field rootCertificate, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_rootCertificate, put = __cordl_internal_set_rootCertificate))::StringW rootCertificate;

  /// @brief Field rootCertificatePath, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_rootCertificatePath, put = __cordl_internal_set_rootCertificatePath))::StringW rootCertificatePath;

  /// @brief Field serverUserId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_serverUserId, put = __cordl_internal_set_serverUserId))::StringW serverUserId;

  /// @brief Field serverUserName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_serverUserName, put = __cordl_internal_set_serverUserName))::StringW serverUserName;

  /// @brief Field validateCertificate, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_validateCertificate, put = __cordl_internal_set_validateCertificate)) bool validateCertificate;

  static inline ::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_hostName() const;

  constexpr ::StringW& __cordl_internal_get_hostName();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr ::StringW const& __cordl_internal_get_rootCertificate() const;

  constexpr ::StringW& __cordl_internal_get_rootCertificate();

  constexpr ::StringW const& __cordl_internal_get_rootCertificatePath() const;

  constexpr ::StringW& __cordl_internal_get_rootCertificatePath();

  constexpr ::StringW const& __cordl_internal_get_serverUserId() const;

  constexpr ::StringW& __cordl_internal_get_serverUserId();

  constexpr ::StringW const& __cordl_internal_get_serverUserName() const;

  constexpr ::StringW& __cordl_internal_get_serverUserName();

  constexpr bool const& __cordl_internal_get_validateCertificate() const;

  constexpr bool& __cordl_internal_get_validateCertificate();

  constexpr void __cordl_internal_set_hostName(::StringW value);

  constexpr void __cordl_internal_set_port(int32_t value);

  constexpr void __cordl_internal_set_rootCertificate(::StringW value);

  constexpr void __cordl_internal_set_rootCertificatePath(::StringW value);

  constexpr void __cordl_internal_set_serverUserId(::StringW value);

  constexpr void __cordl_internal_set_serverUserName(::StringW value);

  constexpr void __cordl_internal_set_validateCertificate(bool value);

  /// @brief Method .ctor, addr 0xfa2e04, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager__ConnectToServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IgnoranceConnectionManager__ConnectToServerParams(__IgnoranceConnectionManager__ConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__ConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IgnoranceConnectionManager__ConnectToServerParams(__IgnoranceConnectionManager__ConnectToServerParams const&) = delete;

  /// @brief Field hostName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___hostName;

  /// @brief Field port, offset: 0x40, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field serverUserId, offset: 0x48, size: 0x8, def value: None
  ::StringW ___serverUserId;

  /// @brief Field serverUserName, offset: 0x50, size: 0x8, def value: None
  ::StringW ___serverUserName;

  /// @brief Field validateCertificate, offset: 0x58, size: 0x1, def value: None
  bool ___validateCertificate;

  /// @brief Field rootCertificatePath, offset: 0x60, size: 0x8, def value: None
  ::StringW ___rootCertificatePath;

  /// @brief Field rootCertificate, offset: 0x68, size: 0x8, def value: None
  ::StringW ___rootCertificate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, ___hostName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, ___port) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, ___serverUserId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, ___serverUserName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, ___validateCertificate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, ___rootCertificatePath) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, ___rootCertificate) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IgnoranceConnection
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IgnoranceConnectionManager::IgnoranceConnection*
class CORDL_TYPE __IgnoranceConnectionManager__IgnoranceConnection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connectionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionManager, put = __cordl_internal_set__connectionManager))::GlobalNamespace::IgnoranceConnectionManager* _connectionManager;

  /// @brief Field <isConnectionOwner>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner_k__BackingField, put = __cordl_internal_set__isConnectionOwner_k__BackingField)) bool _isConnectionOwner_k__BackingField;

  /// @brief Field <userId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__userId_k__BackingField, put = __cordl_internal_set__userId_k__BackingField))::StringW _userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__userName_k__BackingField, put = __cordl_internal_set__userName_k__BackingField))::StringW _userName_k__BackingField;

  __declspec(property(get = get_isConnectionOwner, put = set_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Field peerId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_peerId, put = __cordl_internal_set_peerId)) uint32_t peerId;

  __declspec(property(get = get_userId, put = set_userId))::StringW userId;

  __declspec(property(get = get_userName, put = set_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnection"
  constexpr operator ::GlobalNamespace::IConnection*() noexcept;

  /// @brief Method Disconnect, addr 0xfa8d58, size 0x24, virtual true, abstract: false, final true
  inline void Disconnect();

  static inline ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection* New_ctor(::GlobalNamespace::IgnoranceConnectionManager* connectionManager, uint32_t peerId, ::StringW userId,
                                                                                               ::StringW userName, bool isConnectionOwner);

  /// @brief Method Send, addr 0xfa8d30, size 0x28, virtual true, abstract: false, final true
  inline void Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  constexpr ::GlobalNamespace::IgnoranceConnectionManager*& __cordl_internal_get__connectionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IgnoranceConnectionManager*> const& __cordl_internal_get__connectionManager() const;

  constexpr bool const& __cordl_internal_get__isConnectionOwner_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userName_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get_peerId() const;

  constexpr uint32_t& __cordl_internal_get_peerId();

  constexpr void __cordl_internal_set__connectionManager(::GlobalNamespace::IgnoranceConnectionManager* value);

  constexpr void __cordl_internal_set__isConnectionOwner_k__BackingField(bool value);

  constexpr void __cordl_internal_set__userId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__userName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_peerId(uint32_t value);

  /// @brief Method .ctor, addr 0xfa83e0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IgnoranceConnectionManager* connectionManager, uint32_t peerId, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method get_isConnectionOwner, addr 0xfa8d1c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_userId, addr 0xfa8cfc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0xfa8d0c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnection"
  constexpr ::GlobalNamespace::IConnection* i___GlobalNamespace__IConnection() noexcept;

  /// @brief Method set_isConnectionOwner, addr 0xfa8d24, size 0xc, virtual false, abstract: false, final false
  inline void set_isConnectionOwner(bool value);

  /// @brief Method set_userId, addr 0xfa8d04, size 0x8, virtual false, abstract: false, final false
  inline void set_userId(::StringW value);

  /// @brief Method set_userName, addr 0xfa8d14, size 0x8, virtual false, abstract: false, final false
  inline void set_userName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager__IgnoranceConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IgnoranceConnectionManager__IgnoranceConnection(__IgnoranceConnectionManager__IgnoranceConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IgnoranceConnectionManager__IgnoranceConnection(__IgnoranceConnectionManager__IgnoranceConnection const&) = delete;

  /// @brief Field _connectionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IgnoranceConnectionManager* ____connectionManager;

  /// @brief Field peerId, offset: 0x18, size: 0x4, def value: None
  uint32_t ___peerId;

  /// @brief Field <userId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____userName_k__BackingField;

  /// @brief Field <isConnectionOwner>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____isConnectionOwner_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection, ____connectionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection, ___peerId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection, ____userId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection, ____userName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection, ____isConnectionOwner_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass77_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IgnoranceConnectionManager::<>c__DisplayClass77_0*
class CORDL_TYPE __IgnoranceConnectionManager____c__DisplayClass77_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::IgnoranceCore::IgnoranceClient* client;

  static inline ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0* New_ctor();

  /// @brief Method <DisposeAsync>b__0, addr 0xfa8d84, size 0x8, virtual false, abstract: false, final false
  inline void _DisposeAsync_b__0();

  constexpr ::IgnoranceCore::IgnoranceClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceClient*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::IgnoranceCore::IgnoranceClient* value);

  /// @brief Method .ctor, addr 0xfa8d7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager____c__DisplayClass77_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IgnoranceConnectionManager____c__DisplayClass77_0(__IgnoranceConnectionManager____c__DisplayClass77_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IgnoranceConnectionManager____c__DisplayClass77_0(__IgnoranceConnectionManager____c__DisplayClass77_0 const&) = delete;

  /// @brief Field client, offset: 0x10, size: 0x8, def value: None
  ::IgnoranceCore::IgnoranceClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0, ___client) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass77_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IgnoranceConnectionManager::<>c__DisplayClass77_1*
class CORDL_TYPE __IgnoranceConnectionManager____c__DisplayClass77_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field server, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_server, put = __cordl_internal_set_server))::IgnoranceCore::IgnoranceServer* server;

  static inline ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1* New_ctor();

  /// @brief Method <DisposeAsync>b__1, addr 0xfa8d94, size 0x8, virtual false, abstract: false, final false
  inline void _DisposeAsync_b__1();

  constexpr ::IgnoranceCore::IgnoranceServer*& __cordl_internal_get_server();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceServer*> const& __cordl_internal_get_server() const;

  constexpr void __cordl_internal_set_server(::IgnoranceCore::IgnoranceServer* value);

  /// @brief Method .ctor, addr 0xfa8d8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager____c__DisplayClass77_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IgnoranceConnectionManager____c__DisplayClass77_1(__IgnoranceConnectionManager____c__DisplayClass77_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IgnoranceConnectionManager____c__DisplayClass77_1(__IgnoranceConnectionManager____c__DisplayClass77_1 const&) = delete;

  /// @brief Field server, offset: 0x10, size: 0x8, def value: None
  ::IgnoranceCore::IgnoranceServer* ___server;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1, ___server) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DisposeAsync>d__77
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::IgnoranceConnectionManager::<DisposeAsync>d__77
struct CORDL_TYPE __IgnoranceConnectionManager___DisposeAsync_d__77 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xfa8d9c, size 0x3dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xfa9178, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager___DisposeAsync_d__77();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::IgnoranceConnectionManager*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __IgnoranceConnectionManager___DisposeAsync_d__77(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::GlobalNamespace::IgnoranceConnectionManager* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IgnoranceConnectionManager* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<BackgroundDisconnectSentry>d__99
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::IgnoranceConnectionManager::<BackgroundDisconnectSentry>d__99
struct CORDL_TYPE __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xfa9184, size 0x3e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xfa9564, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::IgnoranceConnectionManager*", modifiers: "",
  // def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                            ::GlobalNamespace::IgnoranceConnectionManager* __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IgnoranceConnectionManager* __4__this;

  /// @brief Field <cancellationToken>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, _cancellationToken_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IgnoranceConnectionManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IgnoranceConnectionManager*
class CORDL_TYPE IgnoranceConnectionManager : public ::System::Object {
public:
  // Declarations
  using ConnectToServerParams = ::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams;

  using ConnectionState = ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState;

  using IgnoranceConnection = ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection;

  using IgnoranceConnectionParamsBase = ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase;

  using StartServerParams = ::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams;

  using _BackgroundDisconnectSentry_d__99 = ::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;

  using _DisposeAsync_d__77 = ::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77;

  using __c__DisplayClass77_0 = ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0;

  using __c__DisplayClass77_1 = ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1;

  /// @brief Field _backgroundSentryDisconnectCts, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundSentryDisconnectCts,
                      put = __cordl_internal_set__backgroundSentryDisconnectCts))::System::Threading::CancellationTokenSource* _backgroundSentryDisconnectCts;

  /// @brief Field _channels, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__channels,
                      put = __cordl_internal_set__channels))::ArrayW<::IgnoranceCore::IgnoranceChannelTypes, ::Array<::IgnoranceCore::IgnoranceChannelTypes>*> _channels;

  /// @brief Field _client, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::IgnoranceCore::IgnoranceClient* _client;

  /// @brief Field _connectionRequestHandler, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionRequestHandler,
                      put = __cordl_internal_set__connectionRequestHandler))::GlobalNamespace::IConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field _connectionRequestWriter, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionRequestWriter, put = __cordl_internal_set__connectionRequestWriter))::LiteNetLib::Utils::NetDataWriter* _connectionRequestWriter;

  /// @brief Field _connections, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__connections,
                      put = __cordl_internal_set__connections))::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>* _connections;

  /// @brief Field _incomingDataReader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__incomingDataReader, put = __cordl_internal_set__incomingDataReader))::LiteNetLib::Utils::NetDataReader* _incomingDataReader;

  /// @brief Field _incomingDataWriter, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__incomingDataWriter, put = __cordl_internal_set__incomingDataWriter))::LiteNetLib::Utils::NetDataWriter* _incomingDataWriter;

  /// @brief Field _lastPollUpdateTime, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPollUpdateTime, put = __cordl_internal_set__lastPollUpdateTime)) int64_t _lastPollUpdateTime;

  /// @brief Field _pendingConnections, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingConnections, put = __cordl_internal_set__pendingConnections))::System::Collections::Generic::List_1<uint32_t>* _pendingConnections;

  /// @brief Field _sentryDisconnected, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__sentryDisconnected, put = __cordl_internal_set__sentryDisconnected)) bool _sentryDisconnected;

  /// @brief Field _server, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__server, put = __cordl_internal_set__server))::IgnoranceCore::IgnoranceServer* _server;

  /// @brief Field <serverUserId>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__serverUserId_k__BackingField, put = __cordl_internal_set__serverUserId_k__BackingField))::StringW _serverUserId_k__BackingField;

  /// @brief Field <serverUserName>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__serverUserName_k__BackingField, put = __cordl_internal_set__serverUserName_k__BackingField))::StringW _serverUserName_k__BackingField;

  /// @brief Field _state, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState _state;

  /// @brief Field _taskUtility, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _timeProvider, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field <userId>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__userId_k__BackingField, put = __cordl_internal_set__userId_k__BackingField))::StringW _userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__userName_k__BackingField, put = __cordl_internal_set__userName_k__BackingField))::StringW _userName_k__BackingField;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  /// @brief Field onConnectedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectedEvent, put = __cordl_internal_set_onConnectedEvent))::System::Action* onConnectedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionConnectedEvent,
                      put = __cordl_internal_set_onConnectionConnectedEvent))::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onConnectionDisconnectedEvent,
               put = __cordl_internal_set_onConnectionDisconnectedEvent))::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionFailedEvent,
                      put = __cordl_internal_set_onConnectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onDisconnectedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onDisconnectedEvent, put = __cordl_internal_set_onDisconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onInitializedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onInitializedEvent, put = __cordl_internal_set_onInitializedEvent))::System::Action* onInitializedEvent;

  /// @brief Field onReceivedDataEvent, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onReceivedDataEvent,
      put = __cordl_internal_set_onReceivedDataEvent))::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  __declspec(property(get = get_serverUserId, put = set_serverUserId))::StringW serverUserId;

  __declspec(property(get = get_serverUserName, put = set_serverUserName))::StringW serverUserName;

  __declspec(property(get = get_userId, put = set_userId))::StringW userId;

  __declspec(property(get = get_userName, put = set_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BackgroundDisconnectSentry, addr 0xfa8c10, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BackgroundDisconnectSentry();

  /// @brief Method CheckSentryState, addr 0xfa7798, size 0x24, virtual false, abstract: false, final false
  inline void CheckSentryState();

  /// @brief Method Disconnect, addr 0xfa7ecc, size 0x1b4, virtual true, abstract: false, final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method DisconnectPeer, addr 0xfa856c, size 0xf0, virtual false, abstract: false, final false
  inline void DisconnectPeer(uint32_t peerId, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Dispose, addr 0xfa7e98, size 0x34, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0xfa7dd0, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method GetConnection, addr 0xfa88ec, size 0x58, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method GetConnectionMessage, addr 0xfa81e8, size 0x110, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* GetConnectionMessage();

  /// @brief Method HandleConnectionEvents, addr 0xfa77bc, size 0x278, virtual false, abstract: false, final false
  inline void HandleConnectionEvents();

  /// @brief Method HandleDisconnectionEvents, addr 0xfa7d0c, size 0xc4, virtual false, abstract: false, final false
  inline void HandleDisconnectionEvents();

  /// @brief Method HandleIncomingEvents, addr 0xfa7a34, size 0x2d8, virtual false, abstract: false, final false
  inline void HandleIncomingEvents();

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method Log, addr 0xfa89d0, size 0x8c, virtual false, abstract: false, final false
  static inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0xfa8944, size 0x8c, virtual false, abstract: false, final false
  static inline void LogError(::StringW msg);

  static inline ::GlobalNamespace::IgnoranceConnectionManager* New_ctor();

  static inline ::GlobalNamespace::IgnoranceConnectionManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method PollUpdate, addr 0xfa76a8, size 0xf0, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method Send, addr 0xfa82f8, size 0xe8, virtual false, abstract: false, final false
  inline void Send(uint32_t peerId, ::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll, addr 0xfa8754, size 0xb8, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll, addr 0xfa880c, size 0xe0, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  /// @brief Method StartBackgroundSentry, addr 0xfa8a5c, size 0x1b4, virtual false, abstract: false, final false
  inline void StartBackgroundSentry();

  /// @brief Method ToChannel, addr 0xfa8744, size 0x10, virtual false, abstract: false, final false
  static inline uint8_t ToChannel(::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method ToDeliveryMethod, addr 0xfa8738, size 0xc, virtual false, abstract: false, final false
  static inline ::BGNet::Core::DeliveryMethod ToDeliveryMethod(uint8_t channel);

  /// @brief Method TryGetConnection, addr 0xfa865c, size 0xdc, virtual false, abstract: false, final false
  inline bool TryGetConnection(uint32_t peerId, ByRef<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*> connection);

  /// @brief Method TryParseConnectionMessage, addr 0xfa8438, size 0x134, virtual false, abstract: false, final false
  inline bool TryParseConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner);

  /// @brief Method WaitForClientShutdown, addr 0xfa8080, size 0xb4, virtual false, abstract: false, final false
  static inline void WaitForClientShutdown(::IgnoranceCore::IgnoranceClient* client);

  /// @brief Method WaitForServerShutdown, addr 0xfa8134, size 0xb4, virtual false, abstract: false, final false
  static inline void WaitForServerShutdown(::IgnoranceCore::IgnoranceServer* server);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__backgroundSentryDisconnectCts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__backgroundSentryDisconnectCts() const;

  constexpr ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes, ::Array<::IgnoranceCore::IgnoranceChannelTypes>*> const& __cordl_internal_get__channels() const;

  constexpr ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes, ::Array<::IgnoranceCore::IgnoranceChannelTypes>*>& __cordl_internal_get__channels();

  constexpr ::IgnoranceCore::IgnoranceClient*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceClient*> const& __cordl_internal_get__client() const;

  constexpr ::GlobalNamespace::IConnectionRequestHandler*& __cordl_internal_get__connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const& __cordl_internal_get__connectionRequestHandler() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__connectionRequestWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __cordl_internal_get__connectionRequestWriter() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*& __cordl_internal_get__connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*> const&
  __cordl_internal_get__connections() const;

  constexpr ::LiteNetLib::Utils::NetDataReader*& __cordl_internal_get__incomingDataReader();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& __cordl_internal_get__incomingDataReader() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__incomingDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __cordl_internal_get__incomingDataWriter() const;

  constexpr int64_t const& __cordl_internal_get__lastPollUpdateTime() const;

  constexpr int64_t& __cordl_internal_get__lastPollUpdateTime();

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get__pendingConnections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& __cordl_internal_get__pendingConnections() const;

  constexpr bool const& __cordl_internal_get__sentryDisconnected() const;

  constexpr bool& __cordl_internal_get__sentryDisconnected();

  constexpr ::IgnoranceCore::IgnoranceServer*& __cordl_internal_get__server();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceServer*> const& __cordl_internal_get__server() const;

  constexpr ::StringW const& __cordl_internal_get__serverUserId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__serverUserId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__serverUserName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__serverUserName_k__BackingField();

  constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState& __cordl_internal_get__state();

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __cordl_internal_get__taskUtility() const;

  constexpr ::BGNet::Core::ITimeProvider*& __cordl_internal_get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __cordl_internal_get__timeProvider() const;

  constexpr ::StringW const& __cordl_internal_get__userId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userName_k__BackingField();

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

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __cordl_internal_get_onReceivedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
  __cordl_internal_get_onReceivedDataEvent() const;

  constexpr void __cordl_internal_set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__channels(::ArrayW<::IgnoranceCore::IgnoranceChannelTypes, ::Array<::IgnoranceCore::IgnoranceChannelTypes>*> value);

  constexpr void __cordl_internal_set__client(::IgnoranceCore::IgnoranceClient* value);

  constexpr void __cordl_internal_set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value);

  constexpr void __cordl_internal_set__connectionRequestWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>* value);

  constexpr void __cordl_internal_set__incomingDataReader(::LiteNetLib::Utils::NetDataReader* value);

  constexpr void __cordl_internal_set__incomingDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__lastPollUpdateTime(int64_t value);

  constexpr void __cordl_internal_set__pendingConnections(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set__sentryDisconnected(bool value);

  constexpr void __cordl_internal_set__server(::IgnoranceCore::IgnoranceServer* value);

  constexpr void __cordl_internal_set__serverUserId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__serverUserName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState value);

  constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr void __cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr void __cordl_internal_set__userId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__userName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_onConnectedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  constexpr void __cordl_internal_set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onInitializedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method .ctor, addr 0xfa1f34, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0xfa74f8, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method add_onConnectedEvent, addr 0xfa6c08, size 0x9c, virtual true, abstract: false, final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onConnectionConnectedEvent, addr 0xfa7000, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent, addr 0xfa7160, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent, addr 0xfa6ea0, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onDisconnectedEvent, addr 0xfa6d40, size 0xb0, virtual true, abstract: false, final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onInitializedEvent, addr 0xfa6ad0, size 0x9c, virtual true, abstract: false, final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onReceivedDataEvent, addr 0xfa72c0, size 0xb0, virtual true, abstract: false, final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method get_connectionCount, addr 0xfa7470, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_connectionCount();

  /// @brief Method get_isConnected, addr 0xfa7440, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0xfa7450, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0xfa74b8, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0xfa7460, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isDisposed, addr 0xfa74c8, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisposed();

  /// @brief Method get_serverUserId, addr 0xfa74d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_serverUserId();

  /// @brief Method get_serverUserName, addr 0xfa74e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_serverUserName();

  /// @brief Method get_userId, addr 0xfa7420, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0xfa7430, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectionManager"
  constexpr ::GlobalNamespace::IConnectionManager* i___GlobalNamespace__IConnectionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_onConnectedEvent, addr 0xfa6ca4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectionConnectedEvent, addr 0xfa70b0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent, addr 0xfa7210, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent, addr 0xfa6f50, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onDisconnectedEvent, addr 0xfa6df0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onInitializedEvent, addr 0xfa6b6c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onReceivedDataEvent, addr 0xfa7370, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method set_serverUserId, addr 0xfa74e0, size 0x8, virtual false, abstract: false, final false
  inline void set_serverUserId(::StringW value);

  /// @brief Method set_serverUserName, addr 0xfa74f0, size 0x8, virtual false, abstract: false, final false
  inline void set_serverUserName(::StringW value);

  /// @brief Method set_userId, addr 0xfa7428, size 0x8, virtual false, abstract: false, final false
  inline void set_userId(::StringW value);

  /// @brief Method set_userName, addr 0xfa7438, size 0x8, virtual false, abstract: false, final false
  inline void set_userName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceConnectionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoranceConnectionManager(IgnoranceConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoranceConnectionManager(IgnoranceConnectionManager const&) = delete;

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

  /// @brief Field <userId>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____userName_k__BackingField;

  /// @brief Field _channels, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes, ::Array<::IgnoranceCore::IgnoranceChannelTypes>*> ____channels;

  /// @brief Field _state, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState ____state;

  /// @brief Field _client, offset: 0x68, size: 0x8, def value: None
  ::IgnoranceCore::IgnoranceClient* ____client;

  /// @brief Field _server, offset: 0x70, size: 0x8, def value: None
  ::IgnoranceCore::IgnoranceServer* ____server;

  /// @brief Field _connectionRequestHandler, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionRequestHandler* ____connectionRequestHandler;

  /// @brief Field _pendingConnections, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ____pendingConnections;

  /// @brief Field _connections, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>* ____connections;

  /// @brief Field _incomingDataWriter, offset: 0x90, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____incomingDataWriter;

  /// @brief Field _incomingDataReader, offset: 0x98, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ____incomingDataReader;

  /// @brief Field _connectionRequestWriter, offset: 0xa0, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____connectionRequestWriter;

  /// @brief Field _backgroundSentryDisconnectCts, offset: 0xa8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____backgroundSentryDisconnectCts;

  /// @brief Field _sentryDisconnected, offset: 0xb0, size: 0x1, def value: None
  bool ____sentryDisconnected;

  /// @brief Field _lastPollUpdateTime, offset: 0xb8, size: 0x8, def value: None
  int64_t ____lastPollUpdateTime;

  /// @brief Field _timeProvider, offset: 0xc0, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _taskUtility, offset: 0xc8, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field <serverUserId>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::StringW ____serverUserId_k__BackingField;

  /// @brief Field <serverUserName>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::StringW ____serverUserName_k__BackingField;

  /// @brief Field kBackgroundDisconnectTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kBackgroundDisconnectTimeoutMs{ static_cast<int64_t>(0x1d4c0) };

  /// @brief Field kIgnoranceConnectHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString kIgnoranceConnectHeader{ u"IgnCon" };

  /// @brief Field kMaxClientShutdownTimeMs offset 0xffffffff size 0x4
  static constexpr int32_t kMaxClientShutdownTimeMs{ static_cast<int32_t>(0x1e) };

  /// @brief Field kMaxServerShutdownTimeMs offset 0xffffffff size 0x4
  static constexpr int32_t kMaxServerShutdownTimeMs{ static_cast<int32_t>(0x12c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IgnoranceConnectionManager, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ___onInitializedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ___onConnectedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ___onDisconnectedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ___onConnectionFailedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ___onConnectionConnectedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ___onConnectionDisconnectedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ___onReceivedDataEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____userId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____userName_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____channels) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____state) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____client) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____server) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____connectionRequestHandler) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____pendingConnections) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____connections) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____incomingDataWriter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____incomingDataReader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____connectionRequestWriter) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____backgroundSentryDisconnectCts) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____sentryDisconnected) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____lastPollUpdateTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____timeProvider) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____taskUtility) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____serverUserId_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IgnoranceConnectionManager, ____serverUserName_k__BackingField) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, "", "IgnoranceConnectionManager/ConnectionState");
NEED_NO_BOX(::GlobalNamespace::IgnoranceConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IgnoranceConnectionManager*, "", "IgnoranceConnectionManager");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams*, "", "IgnoranceConnectionManager/ConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*, "", "IgnoranceConnectionManager/IgnoranceConnection");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase*, "", "IgnoranceConnectionManager/IgnoranceConnectionParamsBase");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams*, "", "IgnoranceConnectionManager/StartServerParams");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0*, "", "IgnoranceConnectionManager/<>c__DisplayClass77_0");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1*, "", "IgnoranceConnectionManager/<>c__DisplayClass77_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, "", "IgnoranceConnectionManager/<BackgroundDisconnectSentry>d__99");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, "", "IgnoranceConnectionManager/<DisposeAsync>d__77");
