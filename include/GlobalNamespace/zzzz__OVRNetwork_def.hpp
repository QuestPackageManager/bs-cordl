#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNetwork.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNetwork)
namespace GlobalNamespace {
struct OVRNetworkTcpClient_OVRNetwork_ConnectionState;
}
namespace GlobalNamespace {
struct OVRNetwork_FrameHeader;
}
namespace GlobalNamespace {
class OVRNetwork_OVRNetworkTcpClient;
}
namespace GlobalNamespace {
class OVRNetwork_OVRNetworkTcpServer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net::Sockets {
class TcpListener;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
class Action;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRNetworkTcpClient_OVRNetwork_ConnectionState;
}
namespace GlobalNamespace {
class OVRNetwork;
}
namespace GlobalNamespace {
class OVRNetwork_OVRNetworkTcpClient;
}
namespace GlobalNamespace {
class OVRNetwork_OVRNetworkTcpServer;
}
namespace GlobalNamespace {
struct OVRNetwork_FrameHeader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState);
MARK_REF_PTR_T(::GlobalNamespace::OVRNetwork);
MARK_REF_PTR_T(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient);
MARK_REF_PTR_T(::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer);
MARK_VAL_T(::GlobalNamespace::OVRNetwork_FrameHeader);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRNetwork/FrameHeader
#pragma pack(push, 1)
struct CORDL_TYPE OVRNetwork_FrameHeader {
public:
  // Declarations
  /// @brief Method FromBytes, addr 0x403cdd8, size 0x130, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRNetwork_FrameHeader FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> arr);

  /// @brief Method ToBytes, addr 0x403ccb8, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNetwork_FrameHeader();

  // Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRNetwork_FrameHeader(uint32_t protocolIdentifier, int32_t payloadType, int32_t payloadLength) noexcept;

  /// @brief Field StructSize offset 0xffffffff size 0x4
  static constexpr int32_t StructSize{ static_cast<int32_t>(0xc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8454 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field protocolIdentifier, offset: 0x0, size: 0x4, def value: None
  uint32_t protocolIdentifier;

  /// @brief Field payloadType, offset: 0x4, size: 0x4, def value: None
  int32_t payloadType;

  /// @brief Field payloadLength, offset: 0x8, size: 0x4, def value: None
  int32_t payloadLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNetwork_FrameHeader, protocolIdentifier) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_FrameHeader, payloadType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_FrameHeader, payloadLength) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNetwork_FrameHeader, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNetwork/OVRNetworkTcpServer
class CORDL_TYPE OVRNetwork_OVRNetworkTcpServer : public ::System::Object {
public:
  // Declarations
  /// @brief Field clients, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_clients, put = __cordl_internal_set_clients)) ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* clients;

  /// @brief Field clientsLock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientsLock, put = __cordl_internal_set_clientsLock)) ::System::Object* clientsLock;

  /// @brief Field tcpListener, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcpListener, put = __cordl_internal_set_tcpListener)) ::System::Net::Sockets::TcpListener* tcpListener;

  /// @brief Method Broadcast, addr 0x403dd8c, size 0x598, virtual false, abstract: false, final false
  inline void Broadcast(int32_t payloadType, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload);

  /// @brief Method DoAcceptTcpClientCallback, addr 0x403d5e4, size 0x540, virtual false, abstract: false, final false
  inline void DoAcceptTcpClientCallback(::System::IAsyncResult* ar);

  /// @brief Method DoWriteDataCallback, addr 0x403e324, size 0xf4, virtual false, abstract: false, final false
  inline void DoWriteDataCallback(::System::IAsyncResult* ar);

  /// @brief Method HasConnectedClient, addr 0x403db24, size 0x268, virtual false, abstract: false, final false
  inline bool HasConnectedClient();

  static inline ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer* New_ctor();

  /// @brief Method StartListening, addr 0x403cf08, size 0x520, virtual false, abstract: false, final false
  inline void StartListening(int32_t listeningPort);

  /// @brief Method StopListening, addr 0x403d428, size 0x1bc, virtual false, abstract: false, final false
  inline void StopListening();

  constexpr ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* const& __cordl_internal_get_clients() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*& __cordl_internal_get_clients();

  constexpr ::System::Object* const& __cordl_internal_get_clientsLock() const;

  constexpr ::System::Object*& __cordl_internal_get_clientsLock();

  constexpr ::System::Net::Sockets::TcpListener* const& __cordl_internal_get_tcpListener() const;

  constexpr ::System::Net::Sockets::TcpListener*& __cordl_internal_get_tcpListener();

  constexpr void __cordl_internal_set_clients(::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* value);

  constexpr void __cordl_internal_set_clientsLock(::System::Object* value);

  constexpr void __cordl_internal_set_tcpListener(::System::Net::Sockets::TcpListener* value);

  /// @brief Method .ctor, addr 0x403e418, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNetwork_OVRNetworkTcpServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork_OVRNetworkTcpServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNetwork_OVRNetworkTcpServer(OVRNetwork_OVRNetworkTcpServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork_OVRNetworkTcpServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNetwork_OVRNetworkTcpServer(OVRNetwork_OVRNetworkTcpServer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8455 };

  /// @brief Field tcpListener, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::TcpListener* ___tcpListener;

  /// @brief Field clientsLock, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___clientsLock;

  /// @brief Field clients, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* ___clients;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer, ___tcpListener) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer, ___clientsLock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer, ___clients) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRNetwork/OVRNetworkTcpClient/ConnectionState
struct CORDL_TYPE OVRNetworkTcpClient_OVRNetwork_ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped
  enum struct __OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped : int32_t {
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connected = static_cast<int32_t>(0x1),
    __E_Connecting = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped() const noexcept {
    return static_cast<__OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNetworkTcpClient_OVRNetwork_ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRNetworkTcpClient_OVRNetwork_ConnectionState(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(1)
  static ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState const Connected;

  /// @brief Field Connecting value: I32(2)
  static ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState const Connecting;

  /// @brief Field Disconnected value: I32(0)
  static ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState const Disconnected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8456 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNetwork/OVRNetworkTcpClient
class CORDL_TYPE OVRNetwork_OVRNetworkTcpClient : public ::System::Object {
public:
  // Declarations
  using ConnectionState = ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState;

  __declspec(property(get = get_Connected)) bool Connected;

  __declspec(property(get = get_connectionState)) ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState connectionState;

  /// @brief Field connectionStateChangedCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionStateChangedCallback, put = __cordl_internal_set_connectionStateChangedCallback)) ::System::Action* connectionStateChangedCallback;

  /// @brief Field payloadReceivedCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_payloadReceivedCallback,
                      put = __cordl_internal_set_payloadReceivedCallback)) ::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* payloadReceivedCallback;

  /// @brief Field readyReceiveDataEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_readyReceiveDataEvent, put = __cordl_internal_set_readyReceiveDataEvent)) ::System::Threading::ManualResetEvent* readyReceiveDataEvent;

  /// @brief Field receivedBufferDataSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_receivedBufferDataSize, put = __cordl_internal_set_receivedBufferDataSize)) int32_t receivedBufferDataSize;

  /// @brief Field receivedBufferIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_receivedBufferIndex, put = __cordl_internal_set_receivedBufferIndex)) int32_t receivedBufferIndex;

  /// @brief Field receivedBuffers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_receivedBuffers,
                      put = __cordl_internal_set_receivedBuffers)) ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>
      receivedBuffers;

  /// @brief Field tcpClient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tcpClient, put = __cordl_internal_set_tcpClient)) ::System::Net::Sockets::TcpClient* tcpClient;

  /// @brief Method Connect, addr 0x403e4fc, size 0x178, virtual false, abstract: false, final false
  inline void Connect(int32_t listeningPort);

  /// @brief Method ConnectCallback, addr 0x403e674, size 0x300, virtual false, abstract: false, final false
  inline void ConnectCallback(::System::IAsyncResult* ar);

  /// @brief Method Disconnect, addr 0x403e974, size 0x238, virtual false, abstract: false, final false
  inline void Disconnect();

  static inline ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient* New_ctor();

  /// @brief Method OnReadDataCallback, addr 0x403edc0, size 0x4d4, virtual false, abstract: false, final false
  inline void OnReadDataCallback(::System::IAsyncResult* ar);

  /// @brief Method Tick, addr 0x403ebac, size 0x214, virtual false, abstract: false, final false
  inline void Tick();

  constexpr ::System::Action* const& __cordl_internal_get_connectionStateChangedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_connectionStateChangedCallback();

  constexpr ::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* const& __cordl_internal_get_payloadReceivedCallback() const;

  constexpr ::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>*& __cordl_internal_get_payloadReceivedCallback();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_readyReceiveDataEvent() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_readyReceiveDataEvent();

  constexpr int32_t const& __cordl_internal_get_receivedBufferDataSize() const;

  constexpr int32_t& __cordl_internal_get_receivedBufferDataSize();

  constexpr int32_t const& __cordl_internal_get_receivedBufferIndex() const;

  constexpr int32_t& __cordl_internal_get_receivedBufferIndex();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get_receivedBuffers() const;

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __cordl_internal_get_receivedBuffers();

  constexpr ::System::Net::Sockets::TcpClient* const& __cordl_internal_get_tcpClient() const;

  constexpr ::System::Net::Sockets::TcpClient*& __cordl_internal_get_tcpClient();

  constexpr void __cordl_internal_set_connectionStateChangedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_payloadReceivedCallback(::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_readyReceiveDataEvent(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set_receivedBufferDataSize(int32_t value);

  constexpr void __cordl_internal_set_receivedBufferIndex(int32_t value);

  constexpr void __cordl_internal_set_receivedBuffers(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr void __cordl_internal_set_tcpClient(::System::Net::Sockets::TcpClient* value);

  /// @brief Method .ctor, addr 0x403f294, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Connected, addr 0x403e4e8, size 0x14, virtual false, abstract: false, final false
  inline bool get_Connected();

  /// @brief Method get_connectionState, addr 0x403e4c0, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState get_connectionState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNetwork_OVRNetworkTcpClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork_OVRNetworkTcpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNetwork_OVRNetworkTcpClient(OVRNetwork_OVRNetworkTcpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork_OVRNetworkTcpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNetwork_OVRNetworkTcpClient(OVRNetwork_OVRNetworkTcpClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8457 };

  /// @brief Field connectionStateChangedCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___connectionStateChangedCallback;

  /// @brief Field payloadReceivedCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* ___payloadReceivedCallback;

  /// @brief Field tcpClient, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Sockets::TcpClient* ___tcpClient;

  /// @brief Field receivedBuffers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___receivedBuffers;

  /// @brief Field receivedBufferIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___receivedBufferIndex;

  /// @brief Field receivedBufferDataSize, offset: 0x34, size: 0x4, def value: None
  int32_t ___receivedBufferDataSize;

  /// @brief Field readyReceiveDataEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___readyReceiveDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, ___connectionStateChangedCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, ___payloadReceivedCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, ___tcpClient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, ___receivedBuffers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, ___receivedBufferIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, ___receivedBufferDataSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, ___readyReceiveDataEvent) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNetwork
class CORDL_TYPE OVRNetwork : public ::System::Object {
public:
  // Declarations
  using FrameHeader = ::GlobalNamespace::OVRNetwork_FrameHeader;

  using OVRNetworkTcpClient = ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient;

  using OVRNetworkTcpServer = ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer;

  static inline ::GlobalNamespace::OVRNetwork* New_ctor();

  /// @brief Method .ctor, addr 0x403ccb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNetwork();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNetwork(OVRNetwork&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNetwork(OVRNetwork const&) = delete;

  /// @brief Field FrameHeaderMagicIdentifier offset 0xffffffff size 0x4
  static constexpr uint32_t FrameHeaderMagicIdentifier{ static_cast<uint32_t>(0x5283a76bu) };

  /// @brief Field MaxBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxBufferLength{ static_cast<int32_t>(0x10000) };

  /// @brief Field MaxPayloadLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxPayloadLength{ static_cast<int32_t>(0xfff4) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNetwork, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState, "", "OVRNetwork/OVRNetworkTcpClient/ConnectionState");
NEED_NO_BOX(::GlobalNamespace::OVRNetwork);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork*, "", "OVRNetwork");
NEED_NO_BOX(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*, "", "OVRNetwork/OVRNetworkTcpClient");
NEED_NO_BOX(::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*, "", "OVRNetwork/OVRNetworkTcpServer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork_FrameHeader, "", "OVRNetwork/FrameHeader");
