#pragma once
// IWYU pragma private; include "LiteNetLib/NetManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetManager)
namespace LiteNetLib::Layers {
class PacketLayerBase;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
struct ConnectionState;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace LiteNetLib {
class IDeliveryEventListener;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace LiteNetLib {
class INetSocketListener;
}
namespace LiteNetLib {
class NatPunchModule;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace LiteNetLib {
class NetEvent;
}
namespace LiteNetLib {
class NetPacketPool;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class NetSocket;
}
namespace LiteNetLib {
class NetStatistics;
}
namespace LiteNetLib {
struct __NetEvent__EType;
}
namespace LiteNetLib {
class __NetManager__IPEndPointComparer;
}
namespace LiteNetLib {
struct __NetManager__NetPeerEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System::Threading {
class Thread;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class __NetManager__IPEndPointComparer;
}
namespace LiteNetLib {
struct __NetManager__NetPeerEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetManager);
MARK_REF_PTR_T(::LiteNetLib::__NetManager__IPEndPointComparer);
MARK_VAL_T(::LiteNetLib::__NetManager__NetPeerEnumerator);
// Type: ::IPEndPointComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::NetManager::IPEndPointComparer*
class CORDL_TYPE __NetManager__IPEndPointComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>*() noexcept;

  /// @brief Method Equals, addr 0x3a5fa88, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::System::Net::IPEndPoint* x, ::System::Net::IPEndPoint* y);

  /// @brief Method GetHashCode, addr 0x3a5fae4, size 0x24, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Net::IPEndPoint* obj);

  static inline ::LiteNetLib::__NetManager__IPEndPointComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3a5a460, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>* i___System__Collections__Generic__IEqualityComparer_1___System__Net__IPEndPoint__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetManager__IPEndPointComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetManager__IPEndPointComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetManager__IPEndPointComparer(__NetManager__IPEndPointComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetManager__IPEndPointComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetManager__IPEndPointComparer(__NetManager__IPEndPointComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16504 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NetManager__IPEndPointComparer, 0x10>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::NetPeerEnumerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// CS Name: ::NetManager::NetPeerEnumerator
struct CORDL_TYPE __NetManager__NetPeerEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::LiteNetLib::NetPeer* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3a5fb08, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x3a5fb0c, size 0x3c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x3a5fb48, size 0x38, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3a5fb88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x3a5f9c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetPeer* p);

  /// @brief Method get_Current, addr 0x3a5fb80, size 0x8, virtual true, abstract: false, final true
  inline ::LiteNetLib::NetPeer* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>* i___System__Collections__Generic__IEnumerator_1___LiteNetLib__NetPeer__();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetManager__NetPeerEnumerator();

  // Ctor Parameters [CppParam { name: "_initialPeer", ty: "::LiteNetLib::NetPeer*", modifiers: "", def_value: None }, CppParam { name: "_p", ty: "::LiteNetLib::NetPeer*", modifiers: "", def_value:
  // None }]
  constexpr __NetManager__NetPeerEnumerator(::LiteNetLib::NetPeer* _initialPeer, ::LiteNetLib::NetPeer* _p) noexcept;

  /// @brief Field _initialPeer, offset: 0x0, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* _initialPeer;

  /// @brief Field _p, offset: 0x8, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* _p;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16505 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NetManager__NetPeerEnumerator, 0x10>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NetManager__NetPeerEnumerator, _initialPeer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NetManager__NetPeerEnumerator, _p) == 0x8, "Offset mismatch!");

} // namespace LiteNetLib
// Type: LiteNetLib::NetManager
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::LiteNetLib::NetManager*
class CORDL_TYPE NetManager : public ::System::Object {
public:
  // Declarations
  using IPEndPointComparer = ::LiteNetLib::__NetManager__IPEndPointComparer;

  using NetPeerEnumerator = ::LiteNetLib::__NetManager__NetPeerEnumerator;

  /// @brief Field AutoRecycle, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_AutoRecycle, put = __cordl_internal_set_AutoRecycle)) bool AutoRecycle;

  /// @brief Field BroadcastReceiveEnabled, offset 0xc2, size 0x1
  __declspec(property(get = __cordl_internal_get_BroadcastReceiveEnabled, put = __cordl_internal_set_BroadcastReceiveEnabled)) bool BroadcastReceiveEnabled;

  __declspec(property(get = get_ChannelsCount, put = set_ChannelsCount)) uint8_t ChannelsCount;

  __declspec(property(get = get_ConnectedPeerList)) ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* ConnectedPeerList;

  __declspec(property(get = get_ConnectedPeersCount)) int32_t ConnectedPeersCount;

  /// @brief Field DisconnectTimeout, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_DisconnectTimeout, put = __cordl_internal_set_DisconnectTimeout)) int32_t DisconnectTimeout;

  /// @brief Field EnableStatistics, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableStatistics, put = __cordl_internal_set_EnableStatistics)) bool EnableStatistics;

  __declspec(property(get = get_FirstPeer)) ::LiteNetLib::NetPeer* FirstPeer;

  /// @brief Field IPv6Enabled, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get_IPv6Enabled, put = __cordl_internal_set_IPv6Enabled)) bool IPv6Enabled;

  __declspec(property(get = get_IsRunning)) bool IsRunning;

  __declspec(property(get = get_LocalPort)) int32_t LocalPort;

  /// @brief Field MaxConnectAttempts, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxConnectAttempts, put = __cordl_internal_set_MaxConnectAttempts)) int32_t MaxConnectAttempts;

  /// @brief Field NatPunchEnabled, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_NatPunchEnabled, put = __cordl_internal_set_NatPunchEnabled)) bool NatPunchEnabled;

  /// @brief Field NatPunchModule, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_NatPunchModule, put = __cordl_internal_set_NatPunchModule)) ::LiteNetLib::NatPunchModule* NatPunchModule;

  /// @brief Field NetPacketPool, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_NetPacketPool, put = __cordl_internal_set_NetPacketPool)) ::LiteNetLib::NetPacketPool* NetPacketPool;

  /// @brief Field PingInterval, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_PingInterval, put = __cordl_internal_set_PingInterval)) int32_t PingInterval;

  /// @brief Field ReconnectDelay, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_ReconnectDelay, put = __cordl_internal_set_ReconnectDelay)) int32_t ReconnectDelay;

  /// @brief Field ReuseAddress, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_ReuseAddress, put = __cordl_internal_set_ReuseAddress)) bool ReuseAddress;

  /// @brief Field SimulateLatency, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get_SimulateLatency, put = __cordl_internal_set_SimulateLatency)) bool SimulateLatency;

  /// @brief Field SimulatePacketLoss, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_SimulatePacketLoss, put = __cordl_internal_set_SimulatePacketLoss)) bool SimulatePacketLoss;

  /// @brief Field SimulationMaxLatency, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_SimulationMaxLatency, put = __cordl_internal_set_SimulationMaxLatency)) int32_t SimulationMaxLatency;

  /// @brief Field SimulationMinLatency, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_SimulationMinLatency, put = __cordl_internal_set_SimulationMinLatency)) int32_t SimulationMinLatency;

  /// @brief Field SimulationPacketLossChance, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_SimulationPacketLossChance, put = __cordl_internal_set_SimulationPacketLossChance)) int32_t SimulationPacketLossChance;

  /// @brief Field Statistics, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_Statistics, put = __cordl_internal_set_Statistics)) ::LiteNetLib::NetStatistics* Statistics;

  /// @brief Field ThreadPriority, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_ThreadPriority, put = __cordl_internal_set_ThreadPriority)) ::System::Threading::ThreadPriority ThreadPriority;

  /// @brief Field UnconnectedMessagesEnabled, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_UnconnectedMessagesEnabled, put = __cordl_internal_set_UnconnectedMessagesEnabled)) bool UnconnectedMessagesEnabled;

  /// @brief Field UnsyncedDeliveryEvent, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get_UnsyncedDeliveryEvent, put = __cordl_internal_set_UnsyncedDeliveryEvent)) bool UnsyncedDeliveryEvent;

  /// @brief Field UnsyncedEvents, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_UnsyncedEvents, put = __cordl_internal_set_UnsyncedEvents)) bool UnsyncedEvents;

  /// @brief Field UpdateTime, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_UpdateTime, put = __cordl_internal_set_UpdateTime)) int32_t UpdateTime;

  /// @brief Field _channelsCount, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__channelsCount, put = __cordl_internal_set__channelsCount)) uint8_t _channelsCount;

  /// @brief Field _connectedPeerListCache, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPeerListCache,
                      put = __cordl_internal_set__connectedPeerListCache)) ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* _connectedPeerListCache;

  /// @brief Field _connectedPeersCount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__connectedPeersCount, put = __cordl_internal_set__connectedPeersCount)) int32_t _connectedPeersCount;

  /// @brief Field _deliveryEventListener, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__deliveryEventListener, put = __cordl_internal_set__deliveryEventListener)) ::LiteNetLib::IDeliveryEventListener* _deliveryEventListener;

  /// @brief Field _extraPacketLayer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__extraPacketLayer, put = __cordl_internal_set__extraPacketLayer)) ::LiteNetLib::Layers::PacketLayerBase* _extraPacketLayer;

  /// @brief Field _headPeer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__headPeer, put = __cordl_internal_set__headPeer)) ::LiteNetLib::NetPeer* _headPeer;

  /// @brief Field _lastPeerId, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__lastPeerId, put = __cordl_internal_set__lastPeerId)) int32_t _lastPeerId;

  /// @brief Field _logicThread, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logicThread, put = __cordl_internal_set__logicThread)) ::System::Threading::Thread* _logicThread;

  /// @brief Field _netEventListener, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__netEventListener, put = __cordl_internal_set__netEventListener)) ::LiteNetLib::INetEventListener* _netEventListener;

  /// @brief Field _netEventsPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__netEventsPool, put = __cordl_internal_set__netEventsPool)) ::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>* _netEventsPool;

  /// @brief Field _netEventsQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__netEventsQueue, put = __cordl_internal_set__netEventsQueue)) ::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>* _netEventsQueue;

  /// @brief Field _peerIds, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__peerIds, put = __cordl_internal_set__peerIds)) ::System::Collections::Generic::Queue_1<int32_t>* _peerIds;

  /// @brief Field _peersArray, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__peersArray, put = __cordl_internal_set__peersArray)) ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> _peersArray;

  /// @brief Field _peersDict, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__peersDict,
                      put = __cordl_internal_set__peersDict)) ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>* _peersDict;

  /// @brief Field _peersLock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__peersLock, put = __cordl_internal_set__peersLock)) ::System::Threading::ReaderWriterLockSlim* _peersLock;

  /// @brief Field _requestsDict, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__requestsDict,
                      put = __cordl_internal_set__requestsDict)) ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>* _requestsDict;

  /// @brief Field _socket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__socket, put = __cordl_internal_set__socket)) ::LiteNetLib::NetSocket* _socket;

  /// @brief Convert operator to "::LiteNetLib::INetSocketListener"
  constexpr operator ::LiteNetLib::INetSocketListener*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddPeer, addr 0x3a59cb4, size 0x14c, virtual false, abstract: false, final false
  inline void AddPeer(::LiteNetLib::NetPeer* peer);

  /// @brief Method Connect, addr 0x3a5efd8, size 0x148, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* Connect(::StringW address, int32_t port, ::LiteNetLib::Utils::NetDataWriter* connectionData);

  /// @brief Method Connect, addr 0x3a5ef30, size 0x38, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* Connect(::StringW address, int32_t port, ::StringW key);

  /// @brief Method Connect, addr 0x3a5f120, size 0x1c0, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* Connect(::System::Net::IPEndPoint* target, ::LiteNetLib::Utils::NetDataWriter* connectionData);

  /// @brief Method Connect, addr 0x3a5f2e0, size 0x30, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* Connect(::System::Net::IPEndPoint* target, ::StringW key);

  /// @brief Method ConnectionLatencyUpdated, addr 0x3a5a468, size 0x40, virtual false, abstract: false, final false
  inline void ConnectionLatencyUpdated(::LiteNetLib::NetPeer* fromPeer, int32_t latency);

  /// @brief Method CreateEvent, addr 0x3a5a4a8, size 0x31c, virtual false, abstract: false, final false
  inline void CreateEvent(::LiteNetLib::__NetEvent__EType type, ::LiteNetLib::NetPeer* peer, ::System::Net::IPEndPoint* remoteEndPoint, ::System::Net::Sockets::SocketError errorCode, int32_t latency,
                          ::LiteNetLib::DisconnectReason disconnectReason, ::LiteNetLib::ConnectionRequest* connectionRequest, ::LiteNetLib::DeliveryMethod deliveryMethod,
                          ::LiteNetLib::NetPacket* readerSource, ::System::Object* userData);

  /// @brief Method CreateReceiveEvent, addr 0x3a5d6f8, size 0x27c, virtual false, abstract: false, final false
  inline void CreateReceiveEvent(::LiteNetLib::NetPacket* packet, ::LiteNetLib::DeliveryMethod method, ::LiteNetLib::NetPeer* fromPeer);

  /// @brief Method DataReceived, addr 0x3a5bd10, size 0x574, virtual false, abstract: false, final false
  inline void DataReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> reusableBuffer, int32_t count, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method DisconnectAll, addr 0x3a5f7f0, size 0x10, virtual false, abstract: false, final false
  inline void DisconnectAll();

  /// @brief Method DisconnectAll, addr 0x3a5f800, size 0x90, virtual false, abstract: false, final false
  inline void DisconnectAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count);

  /// @brief Method DisconnectPeer, addr 0x3a5f8c4, size 0x34, virtual false, abstract: false, final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer);

  /// @brief Method DisconnectPeer, addr 0x3a5f92c, size 0x3c, virtual false, abstract: false, final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method DisconnectPeer, addr 0x3a5f8f8, size 0x34, virtual false, abstract: false, final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count);

  /// @brief Method DisconnectPeer, addr 0x3a5aca8, size 0xb0, virtual false, abstract: false, final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectReason reason, ::System::Net::Sockets::SocketError socketErrorCode, bool force,
                             ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count, ::LiteNetLib::NetPacket* eventData);

  /// @brief Method DisconnectPeer, addr 0x3a5f968, size 0x3c, virtual false, abstract: false, final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method DisconnectPeerForce, addr 0x3a5f890, size 0x34, virtual false, abstract: false, final false
  inline void DisconnectPeerForce(::LiteNetLib::NetPeer* peer);

  /// @brief Method DisconnectPeerForce, addr 0x3a5ac60, size 0x30, virtual false, abstract: false, final false
  inline void DisconnectPeerForce(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectReason reason, ::System::Net::Sockets::SocketError socketErrorCode, ::LiteNetLib::NetPacket* eventData);

  /// @brief Method Flush, addr 0x3a5eb60, size 0x28, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method GetEnumerator, addr 0x3a5f9a4, size 0x1c, virtual false, abstract: false, final false
  inline ::LiteNetLib::__NetManager__NetPeerEnumerator GetEnumerator();

  /// @brief Method GetNextPeerId, addr 0x3a5c368, size 0x130, virtual false, abstract: false, final false
  inline int32_t GetNextPeerId();

  /// @brief Method GetPeerById, addr 0x3a59bd4, size 0x30, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* GetPeerById(int32_t id);

  /// @brief Method GetPeersCount, addr 0x3a5f77c, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetPeersCount(::LiteNetLib::ConnectionState peerState);

  /// @brief Method GetPeersNonAlloc, addr 0x3a59ab8, size 0x11c, virtual false, abstract: false, final false
  inline void GetPeersNonAlloc(::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* peers, ::LiteNetLib::ConnectionState peerState);

  /// @brief Method LiteNetLib.INetSocketListener.OnMessageReceived, addr 0x3a5ba60, size 0x2b0, virtual true, abstract: false, final true
  inline void LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::System::Net::Sockets::SocketError errorCode,
                                                              ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method MessageDelivered, addr 0x3a5a7c4, size 0x4c, virtual false, abstract: false, final false
  inline void MessageDelivered(::LiteNetLib::NetPeer* fromPeer, ::System::Object* userData);

  static inline ::LiteNetLib::NetManager* New_ctor(::LiteNetLib::INetEventListener* listener, ::LiteNetLib::Layers::PacketLayerBase* extraPacketLayer);

  /// @brief Method OnConnectionSolved, addr 0x3a55954, size 0x410, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* OnConnectionSolved(::LiteNetLib::ConnectionRequest* request, ::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length);

  /// @brief Method PollEvents, addr 0x3a5edd4, size 0x15c, virtual false, abstract: false, final false
  inline void PollEvents();

  /// @brief Method ProcessConnectRequest, addr 0x3a5c820, size 0x2d8, virtual false, abstract: false, final false
  inline void ProcessConnectRequest(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::NetConnectRequestPacket* connRequest);

  /// @brief Method ProcessEvent, addr 0x3a5b020, size 0x514, virtual false, abstract: false, final false
  inline void ProcessEvent(::LiteNetLib::NetEvent* evt);

  /// @brief Method RecycleEvent, addr 0x3a597e4, size 0x110, virtual false, abstract: false, final false
  inline void RecycleEvent(::LiteNetLib::NetEvent* evt);

  /// @brief Method RemovePeer, addr 0x3a59e00, size 0x48, virtual false, abstract: false, final false
  inline void RemovePeer(::LiteNetLib::NetPeer* peer);

  /// @brief Method RemovePeerInternal, addr 0x3a59e48, size 0x1b0, virtual false, abstract: false, final false
  inline void RemovePeerInternal(::LiteNetLib::NetPeer* peer);

  /// @brief Method SendBroadcast, addr 0x3a5e7ec, size 0x20, virtual false, abstract: false, final false
  inline bool SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t port);

  /// @brief Method SendBroadcast, addr 0x3a5e68c, size 0x160, virtual false, abstract: false, final false
  inline bool SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, int32_t port);

  /// @brief Method SendBroadcast, addr 0x3a5e664, size 0x28, virtual false, abstract: false, final false
  inline bool SendBroadcast(::LiteNetLib::Utils::NetDataWriter* writer, int32_t port);

  /// @brief Method SendRaw, addr 0x3a5a864, size 0x268, virtual false, abstract: false, final false
  inline int32_t SendRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t start, int32_t length, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendRaw, addr 0x3a5aacc, size 0x28, virtual false, abstract: false, final false
  inline int32_t SendRaw(::LiteNetLib::NetPacket* packet, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendRawAndRecycle, addr 0x3a5a810, size 0x54, virtual false, abstract: false, final false
  inline int32_t SendRawAndRecycle(::LiteNetLib::NetPacket* packet, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendToAll, addr 0x3a5db0c, size 0x24, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll, addr 0x3a5dcf4, size 0x28, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll, addr 0x3a5d9ac, size 0x24, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll, addr 0x3a5dc8c, size 0x28, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll, addr 0x3a5d9d0, size 0x110, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll, addr 0x3a5db68, size 0x124, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll, addr 0x3a5d9a0, size 0xc, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll, addr 0x3a5dcb4, size 0x10, virtual false, abstract: false, final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll, addr 0x3a5dae0, size 0x2c, virtual false, abstract: false, final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll, addr 0x3a5dcc4, size 0x30, virtual false, abstract: false, final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll, addr 0x3a5d974, size 0x2c, virtual false, abstract: false, final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll, addr 0x3a5db38, size 0x30, virtual false, abstract: false, final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendUnconnectedMessage, addr 0x3a5e4f0, size 0x20, virtual false, abstract: false, final false
  inline bool SendUnconnectedMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> message, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendUnconnectedMessage, addr 0x3a5e510, size 0x54, virtual false, abstract: false, final false
  inline bool SendUnconnectedMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t start, int32_t length, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendUnconnectedMessage, addr 0x3a5e564, size 0x28, virtual false, abstract: false, final false
  inline bool SendUnconnectedMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method Start, addr 0x3a5dd1c, size 0x8, virtual false, abstract: false, final false
  inline bool Start();

  /// @brief Method Start, addr 0x3a5e2a8, size 0x90, virtual false, abstract: false, final false
  inline bool Start(::StringW addressIPv4, ::StringW addressIPv6, int32_t port);

  /// @brief Method Start, addr 0x3a5dd98, size 0x13c, virtual false, abstract: false, final false
  inline bool Start(::System::Net::IPAddress* addressIPv4, ::System::Net::IPAddress* addressIPv6, int32_t port);

  /// @brief Method Start, addr 0x3a5dd24, size 0x74, virtual false, abstract: false, final false
  inline bool Start(int32_t port);

  /// @brief Method Stop, addr 0x3a5f41c, size 0x8, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x3a5f424, size 0x2b0, virtual false, abstract: false, final false
  inline void Stop(bool sendDisconnectMessages);

  /// @brief Method System.Collections.Generic.IEnumerable<LiteNetLib.NetPeer>.GetEnumerator, addr 0x3a5f9c8, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>* System_Collections_Generic_IEnumerable_LiteNetLib_NetPeer__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3a5fa28, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetPeer, addr 0x3a59c1c, size 0x98, virtual false, abstract: false, final false
  inline bool TryGetPeer(::System::Net::IPEndPoint* endPoint, ByRef<::LiteNetLib::NetPeer*> peer);

  /// @brief Method UpdateLogic, addr 0x3a5b544, size 0x290, virtual false, abstract: false, final false
  inline void UpdateLogic();

  constexpr bool const& __cordl_internal_get_AutoRecycle() const;

  constexpr bool& __cordl_internal_get_AutoRecycle();

  constexpr bool const& __cordl_internal_get_BroadcastReceiveEnabled() const;

  constexpr bool& __cordl_internal_get_BroadcastReceiveEnabled();

  constexpr int32_t const& __cordl_internal_get_DisconnectTimeout() const;

  constexpr int32_t& __cordl_internal_get_DisconnectTimeout();

  constexpr bool const& __cordl_internal_get_EnableStatistics() const;

  constexpr bool& __cordl_internal_get_EnableStatistics();

  constexpr bool const& __cordl_internal_get_IPv6Enabled() const;

  constexpr bool& __cordl_internal_get_IPv6Enabled();

  constexpr int32_t const& __cordl_internal_get_MaxConnectAttempts() const;

  constexpr int32_t& __cordl_internal_get_MaxConnectAttempts();

  constexpr bool const& __cordl_internal_get_NatPunchEnabled() const;

  constexpr bool& __cordl_internal_get_NatPunchEnabled();

  constexpr ::LiteNetLib::NatPunchModule*& __cordl_internal_get_NatPunchModule();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NatPunchModule*> const& __cordl_internal_get_NatPunchModule() const;

  constexpr ::LiteNetLib::NetPacketPool*& __cordl_internal_get_NetPacketPool();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketPool*> const& __cordl_internal_get_NetPacketPool() const;

  constexpr int32_t const& __cordl_internal_get_PingInterval() const;

  constexpr int32_t& __cordl_internal_get_PingInterval();

  constexpr int32_t const& __cordl_internal_get_ReconnectDelay() const;

  constexpr int32_t& __cordl_internal_get_ReconnectDelay();

  constexpr bool const& __cordl_internal_get_ReuseAddress() const;

  constexpr bool& __cordl_internal_get_ReuseAddress();

  constexpr bool const& __cordl_internal_get_SimulateLatency() const;

  constexpr bool& __cordl_internal_get_SimulateLatency();

  constexpr bool const& __cordl_internal_get_SimulatePacketLoss() const;

  constexpr bool& __cordl_internal_get_SimulatePacketLoss();

  constexpr int32_t const& __cordl_internal_get_SimulationMaxLatency() const;

  constexpr int32_t& __cordl_internal_get_SimulationMaxLatency();

  constexpr int32_t const& __cordl_internal_get_SimulationMinLatency() const;

  constexpr int32_t& __cordl_internal_get_SimulationMinLatency();

  constexpr int32_t const& __cordl_internal_get_SimulationPacketLossChance() const;

  constexpr int32_t& __cordl_internal_get_SimulationPacketLossChance();

  constexpr ::LiteNetLib::NetStatistics*& __cordl_internal_get_Statistics();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetStatistics*> const& __cordl_internal_get_Statistics() const;

  constexpr ::System::Threading::ThreadPriority const& __cordl_internal_get_ThreadPriority() const;

  constexpr ::System::Threading::ThreadPriority& __cordl_internal_get_ThreadPriority();

  constexpr bool const& __cordl_internal_get_UnconnectedMessagesEnabled() const;

  constexpr bool& __cordl_internal_get_UnconnectedMessagesEnabled();

  constexpr bool const& __cordl_internal_get_UnsyncedDeliveryEvent() const;

  constexpr bool& __cordl_internal_get_UnsyncedDeliveryEvent();

  constexpr bool const& __cordl_internal_get_UnsyncedEvents() const;

  constexpr bool& __cordl_internal_get_UnsyncedEvents();

  constexpr int32_t const& __cordl_internal_get_UpdateTime() const;

  constexpr int32_t& __cordl_internal_get_UpdateTime();

  constexpr uint8_t const& __cordl_internal_get__channelsCount() const;

  constexpr uint8_t& __cordl_internal_get__channelsCount();

  constexpr ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*& __cordl_internal_get__connectedPeerListCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*> const& __cordl_internal_get__connectedPeerListCache() const;

  constexpr int32_t const& __cordl_internal_get__connectedPeersCount() const;

  constexpr int32_t& __cordl_internal_get__connectedPeersCount();

  constexpr ::LiteNetLib::IDeliveryEventListener*& __cordl_internal_get__deliveryEventListener();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::IDeliveryEventListener*> const& __cordl_internal_get__deliveryEventListener() const;

  constexpr ::LiteNetLib::Layers::PacketLayerBase*& __cordl_internal_get__extraPacketLayer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Layers::PacketLayerBase*> const& __cordl_internal_get__extraPacketLayer() const;

  constexpr ::LiteNetLib::NetPeer*& __cordl_internal_get__headPeer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __cordl_internal_get__headPeer() const;

  constexpr int32_t const& __cordl_internal_get__lastPeerId() const;

  constexpr int32_t& __cordl_internal_get__lastPeerId();

  constexpr ::System::Threading::Thread*& __cordl_internal_get__logicThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get__logicThread() const;

  constexpr ::LiteNetLib::INetEventListener*& __cordl_internal_get__netEventListener();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INetEventListener*> const& __cordl_internal_get__netEventListener() const;

  constexpr ::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>*& __cordl_internal_get__netEventsPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>*> const& __cordl_internal_get__netEventsPool() const;

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>*& __cordl_internal_get__netEventsQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>*> const& __cordl_internal_get__netEventsQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get__peerIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& __cordl_internal_get__peerIds() const;

  constexpr ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> const& __cordl_internal_get__peersArray() const;

  constexpr ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*>& __cordl_internal_get__peersArray();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>*& __cordl_internal_get__peersDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>*> const& __cordl_internal_get__peersDict() const;

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__peersLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get__peersLock() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>*& __cordl_internal_get__requestsDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>*> const&
  __cordl_internal_get__requestsDict() const;

  constexpr ::LiteNetLib::NetSocket*& __cordl_internal_get__socket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> const& __cordl_internal_get__socket() const;

  constexpr void __cordl_internal_set_AutoRecycle(bool value);

  constexpr void __cordl_internal_set_BroadcastReceiveEnabled(bool value);

  constexpr void __cordl_internal_set_DisconnectTimeout(int32_t value);

  constexpr void __cordl_internal_set_EnableStatistics(bool value);

  constexpr void __cordl_internal_set_IPv6Enabled(bool value);

  constexpr void __cordl_internal_set_MaxConnectAttempts(int32_t value);

  constexpr void __cordl_internal_set_NatPunchEnabled(bool value);

  constexpr void __cordl_internal_set_NatPunchModule(::LiteNetLib::NatPunchModule* value);

  constexpr void __cordl_internal_set_NetPacketPool(::LiteNetLib::NetPacketPool* value);

  constexpr void __cordl_internal_set_PingInterval(int32_t value);

  constexpr void __cordl_internal_set_ReconnectDelay(int32_t value);

  constexpr void __cordl_internal_set_ReuseAddress(bool value);

  constexpr void __cordl_internal_set_SimulateLatency(bool value);

  constexpr void __cordl_internal_set_SimulatePacketLoss(bool value);

  constexpr void __cordl_internal_set_SimulationMaxLatency(int32_t value);

  constexpr void __cordl_internal_set_SimulationMinLatency(int32_t value);

  constexpr void __cordl_internal_set_SimulationPacketLossChance(int32_t value);

  constexpr void __cordl_internal_set_Statistics(::LiteNetLib::NetStatistics* value);

  constexpr void __cordl_internal_set_ThreadPriority(::System::Threading::ThreadPriority value);

  constexpr void __cordl_internal_set_UnconnectedMessagesEnabled(bool value);

  constexpr void __cordl_internal_set_UnsyncedDeliveryEvent(bool value);

  constexpr void __cordl_internal_set_UnsyncedEvents(bool value);

  constexpr void __cordl_internal_set_UpdateTime(int32_t value);

  constexpr void __cordl_internal_set__channelsCount(uint8_t value);

  constexpr void __cordl_internal_set__connectedPeerListCache(::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* value);

  constexpr void __cordl_internal_set__connectedPeersCount(int32_t value);

  constexpr void __cordl_internal_set__deliveryEventListener(::LiteNetLib::IDeliveryEventListener* value);

  constexpr void __cordl_internal_set__extraPacketLayer(::LiteNetLib::Layers::PacketLayerBase* value);

  constexpr void __cordl_internal_set__headPeer(::LiteNetLib::NetPeer* value);

  constexpr void __cordl_internal_set__lastPeerId(int32_t value);

  constexpr void __cordl_internal_set__logicThread(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set__netEventListener(::LiteNetLib::INetEventListener* value);

  constexpr void __cordl_internal_set__netEventsPool(::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>* value);

  constexpr void __cordl_internal_set__netEventsQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>* value);

  constexpr void __cordl_internal_set__peerIds(::System::Collections::Generic::Queue_1<int32_t>* value);

  constexpr void __cordl_internal_set__peersArray(::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> value);

  constexpr void __cordl_internal_set__peersDict(::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>* value);

  constexpr void __cordl_internal_set__peersLock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set__requestsDict(::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>* value);

  constexpr void __cordl_internal_set__socket(::LiteNetLib::NetSocket* value);

  /// @brief Method .ctor, addr 0x3a59ff8, size 0x3a8, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::INetEventListener* listener, ::LiteNetLib::Layers::PacketLayerBase* extraPacketLayer);

  /// @brief Method get_ChannelsCount, addr 0x3a59a28, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_ChannelsCount();

  /// @brief Method get_ConnectedPeerList, addr 0x3a59a98, size 0x20, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* get_ConnectedPeerList();

  /// @brief Method get_ConnectedPeersCount, addr 0x3a59c04, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ConnectedPeersCount();

  /// @brief Method get_FirstPeer, addr 0x3a59a10, size 0x18, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* get_FirstPeer();

  /// @brief Method get_IsRunning, addr 0x3a599d0, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsRunning();

  /// @brief Method get_LocalPort, addr 0x3a599f4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_LocalPort();

  /// @brief Convert to "::LiteNetLib::INetSocketListener"
  constexpr ::LiteNetLib::INetSocketListener* i___LiteNetLib__INetSocketListener() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>* i___System__Collections__Generic__IEnumerable_1___LiteNetLib__NetPeer__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_ChannelsCount, addr 0x3a59a30, size 0x68, virtual false, abstract: false, final false
  inline void set_ChannelsCount(uint8_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetManager(NetManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetManager(NetManager const&) = delete;

  /// @brief Field _socket, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::NetSocket* ____socket;

  /// @brief Field _logicThread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* ____logicThread;

  /// @brief Field _netEventsQueue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>* ____netEventsQueue;

  /// @brief Field _netEventsPool, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>* ____netEventsPool;

  /// @brief Field _netEventListener, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::INetEventListener* ____netEventListener;

  /// @brief Field _deliveryEventListener, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::IDeliveryEventListener* ____deliveryEventListener;

  /// @brief Field _peersDict, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>* ____peersDict;

  /// @brief Field _requestsDict, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>* ____requestsDict;

  /// @brief Field _peersLock, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____peersLock;

  /// @brief Field _headPeer, offset: 0x58, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* ____headPeer;

  /// @brief Field _connectedPeersCount, offset: 0x60, size: 0x4, def value: None
  int32_t ____connectedPeersCount;

  /// @brief Field _connectedPeerListCache, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* ____connectedPeerListCache;

  /// @brief Field _peersArray, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> ____peersArray;

  /// @brief Field _extraPacketLayer, offset: 0x78, size: 0x8, def value: None
  ::LiteNetLib::Layers::PacketLayerBase* ____extraPacketLayer;

  /// @brief Field _lastPeerId, offset: 0x80, size: 0x4, def value: None
  int32_t ____lastPeerId;

  /// @brief Field _peerIds, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ____peerIds;

  /// @brief Field _channelsCount, offset: 0x90, size: 0x1, def value: None
  uint8_t ____channelsCount;

  /// @brief Field NetPacketPool, offset: 0x98, size: 0x8, def value: None
  ::LiteNetLib::NetPacketPool* ___NetPacketPool;

  /// @brief Field UnconnectedMessagesEnabled, offset: 0xa0, size: 0x1, def value: None
  bool ___UnconnectedMessagesEnabled;

  /// @brief Field NatPunchEnabled, offset: 0xa1, size: 0x1, def value: None
  bool ___NatPunchEnabled;

  /// @brief Field UpdateTime, offset: 0xa4, size: 0x4, def value: None
  int32_t ___UpdateTime;

  /// @brief Field PingInterval, offset: 0xa8, size: 0x4, def value: None
  int32_t ___PingInterval;

  /// @brief Field DisconnectTimeout, offset: 0xac, size: 0x4, def value: None
  int32_t ___DisconnectTimeout;

  /// @brief Field SimulatePacketLoss, offset: 0xb0, size: 0x1, def value: None
  bool ___SimulatePacketLoss;

  /// @brief Field SimulateLatency, offset: 0xb1, size: 0x1, def value: None
  bool ___SimulateLatency;

  /// @brief Field SimulationPacketLossChance, offset: 0xb4, size: 0x4, def value: None
  int32_t ___SimulationPacketLossChance;

  /// @brief Field SimulationMinLatency, offset: 0xb8, size: 0x4, def value: None
  int32_t ___SimulationMinLatency;

  /// @brief Field SimulationMaxLatency, offset: 0xbc, size: 0x4, def value: None
  int32_t ___SimulationMaxLatency;

  /// @brief Field UnsyncedEvents, offset: 0xc0, size: 0x1, def value: None
  bool ___UnsyncedEvents;

  /// @brief Field UnsyncedDeliveryEvent, offset: 0xc1, size: 0x1, def value: None
  bool ___UnsyncedDeliveryEvent;

  /// @brief Field BroadcastReceiveEnabled, offset: 0xc2, size: 0x1, def value: None
  bool ___BroadcastReceiveEnabled;

  /// @brief Field ReconnectDelay, offset: 0xc4, size: 0x4, def value: None
  int32_t ___ReconnectDelay;

  /// @brief Field MaxConnectAttempts, offset: 0xc8, size: 0x4, def value: None
  int32_t ___MaxConnectAttempts;

  /// @brief Field ReuseAddress, offset: 0xcc, size: 0x1, def value: None
  bool ___ReuseAddress;

  /// @brief Field Statistics, offset: 0xd0, size: 0x8, def value: None
  ::LiteNetLib::NetStatistics* ___Statistics;

  /// @brief Field EnableStatistics, offset: 0xd8, size: 0x1, def value: None
  bool ___EnableStatistics;

  /// @brief Field NatPunchModule, offset: 0xe0, size: 0x8, def value: None
  ::LiteNetLib::NatPunchModule* ___NatPunchModule;

  /// @brief Field AutoRecycle, offset: 0xe8, size: 0x1, def value: None
  bool ___AutoRecycle;

  /// @brief Field IPv6Enabled, offset: 0xe9, size: 0x1, def value: None
  bool ___IPv6Enabled;

  /// @brief Field ThreadPriority, offset: 0xec, size: 0x4, def value: None
  ::System::Threading::ThreadPriority ___ThreadPriority;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetManager, 0xf0>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____socket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____logicThread) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____netEventsQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____netEventsPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____netEventListener) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____deliveryEventListener) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____peersDict) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____requestsDict) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____peersLock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____headPeer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____connectedPeersCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____connectedPeerListCache) == 0x68, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____peersArray) == 0x70, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____extraPacketLayer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____lastPeerId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____peerIds) == 0x88, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ____channelsCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___NetPacketPool) == 0x98, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___UnconnectedMessagesEnabled) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___NatPunchEnabled) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___UpdateTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___PingInterval) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___DisconnectTimeout) == 0xac, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___SimulatePacketLoss) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___SimulateLatency) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___SimulationPacketLossChance) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___SimulationMinLatency) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___SimulationMaxLatency) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___UnsyncedEvents) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___UnsyncedDeliveryEvent) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___BroadcastReceiveEnabled) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___ReconnectDelay) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___MaxConnectAttempts) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___ReuseAddress) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___Statistics) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___EnableStatistics) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___NatPunchModule) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___AutoRecycle) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___IPv6Enabled) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetManager, ___ThreadPriority) == 0xec, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetManager);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetManager*, "LiteNetLib", "NetManager");
NEED_NO_BOX(::LiteNetLib::__NetManager__IPEndPointComparer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NetManager__IPEndPointComparer*, "LiteNetLib", "NetManager/IPEndPointComparer");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NetManager__NetPeerEnumerator, "LiteNetLib", "NetManager/NetPeerEnumerator");
