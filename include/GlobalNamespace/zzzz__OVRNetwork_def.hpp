#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNetwork)
namespace GlobalNamespace {
struct __OVRNetwork__FrameHeader;
}
namespace GlobalNamespace {
class __OVRNetwork__OVRNetworkTcpClient;
}
namespace GlobalNamespace {
struct __OVRNetwork__OVRNetworkTcpClient__ConnectionState;
}
namespace GlobalNamespace {
class __OVRNetwork__OVRNetworkTcpServer;
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
struct __OVRNetwork__OVRNetworkTcpClient__ConnectionState;
}
namespace GlobalNamespace {
class OVRNetwork;
}
namespace GlobalNamespace {
class __OVRNetwork__OVRNetworkTcpClient;
}
namespace GlobalNamespace {
class __OVRNetwork__OVRNetworkTcpServer;
}
namespace GlobalNamespace {
struct __OVRNetwork__FrameHeader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState);
MARK_REF_PTR_T(::GlobalNamespace::OVRNetwork);
MARK_REF_PTR_T(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient);
MARK_REF_PTR_T(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer);
MARK_VAL_T(::GlobalNamespace::__OVRNetwork__FrameHeader);
// Type: ::FrameHeader
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(1) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8140))
// CS Name: ::OVRNetwork::FrameHeader
#pragma pack(push, 1)
struct CORDL_TYPE __OVRNetwork__FrameHeader {
public:
  // Declarations
  /// @brief Method ToBytes, addr 0x27b47a4, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes();

  /// @brief Method FromBytes, addr 0x27b48c4, size 0x130, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRNetwork__FrameHeader FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> arr);

  // Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRNetwork__FrameHeader(uint32_t protocolIdentifier, int32_t payloadType, int32_t payloadLength) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRNetwork__FrameHeader();

  /// @brief Field protocolIdentifier, offset: 0x0, size: 0x4, def value: None
  uint32_t protocolIdentifier;

  /// @brief Field payloadType, offset: 0x4, size: 0x4, def value: None
  int32_t payloadType;

  /// @brief Field payloadLength, offset: 0x8, size: 0x4, def value: None
  int32_t payloadLength;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field StructSize offset 0xffffffff size 0x4
  static constexpr int32_t StructSize{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRNetwork__FrameHeader, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__FrameHeader, protocolIdentifier) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__FrameHeader, payloadType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__FrameHeader, payloadLength) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRNetworkTcpServer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8141))
// CS Name: ::OVRNetwork::OVRNetworkTcpServer*
class CORDL_TYPE __OVRNetwork__OVRNetworkTcpServer : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcpListener, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcpListener, put = __cordl_internal_set_tcpListener))::System::Net::Sockets::TcpListener* tcpListener;

  /// @brief Field clientsLock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientsLock, put = __cordl_internal_set_clientsLock))::System::Object* clientsLock;

  /// @brief Field clients, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_clients, put = __cordl_internal_set_clients))::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* clients;

  constexpr ::System::Net::Sockets::TcpListener*& __cordl_internal_get_tcpListener();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::TcpListener*> const& __cordl_internal_get_tcpListener() const;

  constexpr void __cordl_internal_set_tcpListener(::System::Net::Sockets::TcpListener* value);

  constexpr ::System::Object*& __cordl_internal_get_clientsLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_clientsLock() const;

  constexpr void __cordl_internal_set_clientsLock(::System::Object* value);

  constexpr ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*& __cordl_internal_get_clients();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*> const& __cordl_internal_get_clients() const;

  constexpr void __cordl_internal_set_clients(::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* value);

  /// @brief Method StartListening, addr 0x27b49f4, size 0x528, virtual false, abstract: false, final false
  inline void StartListening(int32_t listeningPort);

  /// @brief Method StopListening, addr 0x27b4f1c, size 0x1c0, virtual false, abstract: false, final false
  inline void StopListening();

  /// @brief Method DoAcceptTcpClientCallback, addr 0x27b50dc, size 0x54c, virtual false, abstract: false, final false
  inline void DoAcceptTcpClientCallback(::System::IAsyncResult* ar);

  /// @brief Method HasConnectedClient, addr 0x27b5628, size 0x254, virtual false, abstract: false, final false
  inline bool HasConnectedClient();

  /// @brief Method Broadcast, addr 0x27b587c, size 0x5b0, virtual false, abstract: false, final false
  inline void Broadcast(int32_t payloadType, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload);

  /// @brief Method DoWriteDataCallback, addr 0x27b5e2c, size 0xf4, virtual false, abstract: false, final false
  inline void DoWriteDataCallback(::System::IAsyncResult* ar);

  static inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* New_ctor();

  /// @brief Method .ctor, addr 0x27b5f20, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRNetwork__OVRNetworkTcpServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRNetwork__OVRNetworkTcpServer(__OVRNetwork__OVRNetworkTcpServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRNetwork__OVRNetworkTcpServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRNetwork__OVRNetworkTcpServer(__OVRNetwork__OVRNetworkTcpServer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRNetwork__OVRNetworkTcpServer();

public:
  /// @brief Field tcpListener, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::TcpListener* ___tcpListener;

  /// @brief Field clientsLock, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___clientsLock;

  /// @brief Field clients, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* ___clients;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer, ___tcpListener) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer, ___clientsLock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer, ___clients) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8142))
// CS Name: ::OVRNetwork::OVRNetworkTcpClient::ConnectionState
struct CORDL_TYPE __OVRNetwork__OVRNetworkTcpClient__ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRNetwork__OVRNetworkTcpClient__ConnectionState_Unwrapped
  enum struct ____OVRNetwork__OVRNetworkTcpClient__ConnectionState_Unwrapped : int32_t {
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connected = static_cast<int32_t>(0x1),
    __E_Connecting = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRNetwork__OVRNetworkTcpClient__ConnectionState_Unwrapped() const noexcept {
    return static_cast<____OVRNetwork__OVRNetworkTcpClient__ConnectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRNetwork__OVRNetworkTcpClient__ConnectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRNetwork__OVRNetworkTcpClient__ConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Disconnected value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState const Disconnected;

  /// @brief Field Connected value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState const Connected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState const Connecting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRNetworkTcpClient
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8143))
// CS Name: ::OVRNetwork::OVRNetworkTcpClient*
class CORDL_TYPE __OVRNetwork__OVRNetworkTcpClient : public ::System::Object {
public:
  // Declarations
  using ConnectionState = ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState;

  /// @brief Field connectionStateChangedCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionStateChangedCallback, put = __cordl_internal_set_connectionStateChangedCallback))::System::Action* connectionStateChangedCallback;

  /// @brief Field payloadReceivedCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_payloadReceivedCallback,
                      put = __cordl_internal_set_payloadReceivedCallback))::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* payloadReceivedCallback;

  /// @brief Field tcpClient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tcpClient, put = __cordl_internal_set_tcpClient))::System::Net::Sockets::TcpClient* tcpClient;

  /// @brief Field receivedBuffers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_receivedBuffers,
                      put = __cordl_internal_set_receivedBuffers))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> receivedBuffers;

  /// @brief Field receivedBufferIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_receivedBufferIndex, put = __cordl_internal_set_receivedBufferIndex)) int32_t receivedBufferIndex;

  /// @brief Field receivedBufferDataSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_receivedBufferDataSize, put = __cordl_internal_set_receivedBufferDataSize)) int32_t receivedBufferDataSize;

  /// @brief Field readyReceiveDataEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_readyReceiveDataEvent, put = __cordl_internal_set_readyReceiveDataEvent))::System::Threading::ManualResetEvent* readyReceiveDataEvent;

  __declspec(property(get = get_connectionState))::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState connectionState;

  __declspec(property(get = get_Connected)) bool Connected;

  constexpr ::System::Action*& __cordl_internal_get_connectionStateChangedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_connectionStateChangedCallback() const;

  constexpr void __cordl_internal_set_connectionStateChangedCallback(::System::Action* value);

  constexpr ::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>*& __cordl_internal_get_payloadReceivedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>*> const& __cordl_internal_get_payloadReceivedCallback() const;

  constexpr void __cordl_internal_set_payloadReceivedCallback(::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* value);

  constexpr ::System::Net::Sockets::TcpClient*& __cordl_internal_get_tcpClient();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::TcpClient*> const& __cordl_internal_get_tcpClient() const;

  constexpr void __cordl_internal_set_tcpClient(::System::Net::Sockets::TcpClient* value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __cordl_internal_get_receivedBuffers();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get_receivedBuffers() const;

  constexpr void __cordl_internal_set_receivedBuffers(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr int32_t& __cordl_internal_get_receivedBufferIndex();

  constexpr int32_t const& __cordl_internal_get_receivedBufferIndex() const;

  constexpr void __cordl_internal_set_receivedBufferIndex(int32_t value);

  constexpr int32_t& __cordl_internal_get_receivedBufferDataSize();

  constexpr int32_t const& __cordl_internal_get_receivedBufferDataSize() const;

  constexpr void __cordl_internal_set_receivedBufferDataSize(int32_t value);

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_readyReceiveDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __cordl_internal_get_readyReceiveDataEvent() const;

  constexpr void __cordl_internal_set_readyReceiveDataEvent(::System::Threading::ManualResetEvent* value);

  /// @brief Method get_connectionState, addr 0x27b5fcc, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState get_connectionState();

  /// @brief Method get_Connected, addr 0x27b5ff4, size 0x14, virtual false, abstract: false, final false
  inline bool get_Connected();

  /// @brief Method Connect, addr 0x27b6008, size 0x17c, virtual false, abstract: false, final false
  inline void Connect(int32_t listeningPort);

  /// @brief Method ConnectCallback, addr 0x27b6184, size 0x300, virtual false, abstract: false, final false
  inline void ConnectCallback(::System::IAsyncResult* ar);

  /// @brief Method Disconnect, addr 0x27b6484, size 0x238, virtual false, abstract: false, final false
  inline void Disconnect();

  /// @brief Method Tick, addr 0x27b66bc, size 0x218, virtual false, abstract: false, final false
  inline void Tick();

  /// @brief Method OnReadDataCallback, addr 0x27b68d4, size 0x4dc, virtual false, abstract: false, final false
  inline void OnReadDataCallback(::System::IAsyncResult* ar);

  static inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient* New_ctor();

  /// @brief Method .ctor, addr 0x27b6db0, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRNetwork__OVRNetworkTcpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRNetwork__OVRNetworkTcpClient(__OVRNetwork__OVRNetworkTcpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRNetwork__OVRNetworkTcpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRNetwork__OVRNetworkTcpClient(__OVRNetwork__OVRNetworkTcpClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRNetwork__OVRNetworkTcpClient();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, ___connectionStateChangedCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, ___payloadReceivedCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, ___tcpClient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, ___receivedBuffers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, ___receivedBufferIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, ___receivedBufferDataSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient, ___readyReceiveDataEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRNetwork
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8144))
// CS Name: ::OVRNetwork*
class CORDL_TYPE OVRNetwork : public ::System::Object {
public:
  // Declarations
  using OVRNetworkTcpClient = ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient;

  using OVRNetworkTcpServer = ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer;

  using FrameHeader = ::GlobalNamespace::__OVRNetwork__FrameHeader;

  static inline ::GlobalNamespace::OVRNetwork* New_ctor();

  /// @brief Method .ctor, addr 0x27b479c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNetwork(OVRNetwork&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNetwork", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNetwork(OVRNetwork const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNetwork();

public:
  /// @brief Field MaxBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxBufferLength{ static_cast<int32_t>(0x10000) };

  /// @brief Field MaxPayloadLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxPayloadLength{ static_cast<int32_t>(0xfff4) };

  /// @brief Field FrameHeaderMagicIdentifier offset 0xffffffff size 0x4
  static constexpr uint32_t FrameHeaderMagicIdentifier{ static_cast<uint32_t>(0x83a76bf0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNetwork, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState, "", "OVRNetwork/OVRNetworkTcpClient/ConnectionState");
NEED_NO_BOX(::GlobalNamespace::OVRNetwork);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork*, "", "OVRNetwork");
NEED_NO_BOX(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*, "", "OVRNetwork/OVRNetworkTcpClient");
NEED_NO_BOX(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*, "", "OVRNetwork/OVRNetworkTcpServer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRNetwork__FrameHeader, "", "OVRNetwork/FrameHeader");
