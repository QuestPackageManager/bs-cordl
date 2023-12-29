#pragma once
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace LiteNetLib {
struct __NetManager__NetPeerEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Net {
class IPAddress;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace LiteNetLib {
class NetEvent;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace LiteNetLib {
class NetSocket;
}
namespace LiteNetLib {
class __NetManager__IPEndPointComparer;
}
namespace System {
class Object;
}
namespace LiteNetLib::Layers {
class PacketLayerBase;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
class NetPacketPool;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class IDeliveryEventListener;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class INetSocketListener;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace System::Threading {
class Thread;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace LiteNetLib {
class NetStatistics;
}
namespace System::Collections {
class IEnumerator;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace LiteNetLib {
struct ConnectionState;
}
namespace LiteNetLib {
class NatPunchModule;
}
namespace System::Collections {
class IEnumerable;
}
namespace LiteNetLib {
struct __NetEvent__EType;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
class IDisposable;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14503))
// CS Name: ::NetManager::IPEndPointComparer*
class CORDL_TYPE __NetManager__IPEndPointComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>*() noexcept;

  /// @brief Method Equals addr 0x20a0c04 size 0x5c virtual true final true
  inline bool Equals(::System::Net::IPEndPoint* x, ::System::Net::IPEndPoint* y);

  /// @brief Method GetHashCode addr 0x20a0c60 size 0x20 virtual true final true
  inline int32_t GetHashCode(::System::Net::IPEndPoint* obj);

  static inline ::LiteNetLib::__NetManager__IPEndPointComparer* New_ctor();

  /// @brief Method .ctor addr 0x209b454 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NetManager__IPEndPointComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetManager__IPEndPointComparer(__NetManager__IPEndPointComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetManager__IPEndPointComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetManager__IPEndPointComparer(__NetManager__IPEndPointComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetManager__IPEndPointComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NetManager__IPEndPointComparer, 0x10>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::NetPeerEnumerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14504))
// CS Name: ::NetManager::NetPeerEnumerator
struct CORDL_TYPE __NetManager__NetPeerEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::LiteNetLib::NetPeer* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x20a0b3c size 0x8 virtual false final false
  inline void _ctor(::LiteNetLib::NetPeer* p);

  /// @brief Method Dispose addr 0x20a0c80 size 0x4 virtual true final true
  inline void Dispose();

  /// @brief Method MoveNext addr 0x20a0c84 size 0x3c virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x20a0cc0 size 0x40 virtual true final true
  inline void Reset();

  /// @brief Method get_Current addr 0x20a0d00 size 0x8 virtual true final true
  inline ::LiteNetLib::NetPeer* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x20a0d08 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "_initialPeer", ty: "::LiteNetLib::NetPeer*", modifiers: "", def_value: None }, CppParam { name: "_p", ty: "::LiteNetLib::NetPeer*", modifiers: "", def_value:
  // None }]
  constexpr __NetManager__NetPeerEnumerator(::LiteNetLib::NetPeer* _initialPeer, ::LiteNetLib::NetPeer* _p) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetManager__NetPeerEnumerator();

  /// @brief Field _initialPeer, offset: 0x0, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* _initialPeer;

  /// @brief Field _p, offset: 0x8, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* _p;

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
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2668))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14505))
// CS Name: ::LiteNetLib::NetManager*
class CORDL_TYPE NetManager : public ::System::Object {
public:
  // Declarations
  using NetPeerEnumerator = ::LiteNetLib::__NetManager__NetPeerEnumerator;

  using IPEndPointComparer = ::LiteNetLib::__NetManager__IPEndPointComparer;

  /// @brief Field _socket, offset 0x10, size 0x8
  __declspec(property(get = __get__socket, put = __set__socket))::LiteNetLib::NetSocket* _socket;

  /// @brief Field _logicThread, offset 0x18, size 0x8
  __declspec(property(get = __get__logicThread, put = __set__logicThread))::System::Threading::Thread* _logicThread;

  /// @brief Field _netEventsQueue, offset 0x20, size 0x8
  __declspec(property(get = __get__netEventsQueue, put = __set__netEventsQueue))::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>* _netEventsQueue;

  /// @brief Field _netEventsPool, offset 0x28, size 0x8
  __declspec(property(get = __get__netEventsPool, put = __set__netEventsPool))::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>* _netEventsPool;

  /// @brief Field _netEventListener, offset 0x30, size 0x8
  __declspec(property(get = __get__netEventListener, put = __set__netEventListener))::LiteNetLib::INetEventListener* _netEventListener;

  /// @brief Field _deliveryEventListener, offset 0x38, size 0x8
  __declspec(property(get = __get__deliveryEventListener, put = __set__deliveryEventListener))::LiteNetLib::IDeliveryEventListener* _deliveryEventListener;

  /// @brief Field _peersDict, offset 0x40, size 0x8
  __declspec(property(get = __get__peersDict, put = __set__peersDict))::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>* _peersDict;

  /// @brief Field _requestsDict, offset 0x48, size 0x8
  __declspec(property(get = __get__requestsDict, put = __set__requestsDict))::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>* _requestsDict;

  /// @brief Field _peersLock, offset 0x50, size 0x8
  __declspec(property(get = __get__peersLock, put = __set__peersLock))::System::Threading::ReaderWriterLockSlim* _peersLock;

  /// @brief Field _headPeer, offset 0x58, size 0x8
  __declspec(property(get = __get__headPeer, put = __set__headPeer))::LiteNetLib::NetPeer* _headPeer;

  /// @brief Field _connectedPeersCount, offset 0x60, size 0x4
  __declspec(property(get = __get__connectedPeersCount, put = __set__connectedPeersCount)) int32_t _connectedPeersCount;

  /// @brief Field _connectedPeerListCache, offset 0x68, size 0x8
  __declspec(property(get = __get__connectedPeerListCache, put = __set__connectedPeerListCache))::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* _connectedPeerListCache;

  /// @brief Field _peersArray, offset 0x70, size 0x8
  __declspec(property(get = __get__peersArray, put = __set__peersArray))::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> _peersArray;

  /// @brief Field _extraPacketLayer, offset 0x78, size 0x8
  __declspec(property(get = __get__extraPacketLayer, put = __set__extraPacketLayer))::LiteNetLib::Layers::PacketLayerBase* _extraPacketLayer;

  /// @brief Field _lastPeerId, offset 0x80, size 0x4
  __declspec(property(get = __get__lastPeerId, put = __set__lastPeerId)) int32_t _lastPeerId;

  /// @brief Field _peerIds, offset 0x88, size 0x8
  __declspec(property(get = __get__peerIds, put = __set__peerIds))::System::Collections::Generic::Queue_1<int32_t>* _peerIds;

  /// @brief Field _channelsCount, offset 0x90, size 0x1
  __declspec(property(get = __get__channelsCount, put = __set__channelsCount)) uint8_t _channelsCount;

  /// @brief Field NetPacketPool, offset 0x98, size 0x8
  __declspec(property(get = __get_NetPacketPool, put = __set_NetPacketPool))::LiteNetLib::NetPacketPool* NetPacketPool;

  /// @brief Field UnconnectedMessagesEnabled, offset 0xa0, size 0x1
  __declspec(property(get = __get_UnconnectedMessagesEnabled, put = __set_UnconnectedMessagesEnabled)) bool UnconnectedMessagesEnabled;

  /// @brief Field NatPunchEnabled, offset 0xa1, size 0x1
  __declspec(property(get = __get_NatPunchEnabled, put = __set_NatPunchEnabled)) bool NatPunchEnabled;

  /// @brief Field UpdateTime, offset 0xa4, size 0x4
  __declspec(property(get = __get_UpdateTime, put = __set_UpdateTime)) int32_t UpdateTime;

  /// @brief Field PingInterval, offset 0xa8, size 0x4
  __declspec(property(get = __get_PingInterval, put = __set_PingInterval)) int32_t PingInterval;

  /// @brief Field DisconnectTimeout, offset 0xac, size 0x4
  __declspec(property(get = __get_DisconnectTimeout, put = __set_DisconnectTimeout)) int32_t DisconnectTimeout;

  /// @brief Field SimulatePacketLoss, offset 0xb0, size 0x1
  __declspec(property(get = __get_SimulatePacketLoss, put = __set_SimulatePacketLoss)) bool SimulatePacketLoss;

  /// @brief Field SimulateLatency, offset 0xb1, size 0x1
  __declspec(property(get = __get_SimulateLatency, put = __set_SimulateLatency)) bool SimulateLatency;

  /// @brief Field SimulationPacketLossChance, offset 0xb4, size 0x4
  __declspec(property(get = __get_SimulationPacketLossChance, put = __set_SimulationPacketLossChance)) int32_t SimulationPacketLossChance;

  /// @brief Field SimulationMinLatency, offset 0xb8, size 0x4
  __declspec(property(get = __get_SimulationMinLatency, put = __set_SimulationMinLatency)) int32_t SimulationMinLatency;

  /// @brief Field SimulationMaxLatency, offset 0xbc, size 0x4
  __declspec(property(get = __get_SimulationMaxLatency, put = __set_SimulationMaxLatency)) int32_t SimulationMaxLatency;

  /// @brief Field UnsyncedEvents, offset 0xc0, size 0x1
  __declspec(property(get = __get_UnsyncedEvents, put = __set_UnsyncedEvents)) bool UnsyncedEvents;

  /// @brief Field UnsyncedDeliveryEvent, offset 0xc1, size 0x1
  __declspec(property(get = __get_UnsyncedDeliveryEvent, put = __set_UnsyncedDeliveryEvent)) bool UnsyncedDeliveryEvent;

  /// @brief Field BroadcastReceiveEnabled, offset 0xc2, size 0x1
  __declspec(property(get = __get_BroadcastReceiveEnabled, put = __set_BroadcastReceiveEnabled)) bool BroadcastReceiveEnabled;

  /// @brief Field ReconnectDelay, offset 0xc4, size 0x4
  __declspec(property(get = __get_ReconnectDelay, put = __set_ReconnectDelay)) int32_t ReconnectDelay;

  /// @brief Field MaxConnectAttempts, offset 0xc8, size 0x4
  __declspec(property(get = __get_MaxConnectAttempts, put = __set_MaxConnectAttempts)) int32_t MaxConnectAttempts;

  /// @brief Field ReuseAddress, offset 0xcc, size 0x1
  __declspec(property(get = __get_ReuseAddress, put = __set_ReuseAddress)) bool ReuseAddress;

  /// @brief Field Statistics, offset 0xd0, size 0x8
  __declspec(property(get = __get_Statistics, put = __set_Statistics))::LiteNetLib::NetStatistics* Statistics;

  /// @brief Field EnableStatistics, offset 0xd8, size 0x1
  __declspec(property(get = __get_EnableStatistics, put = __set_EnableStatistics)) bool EnableStatistics;

  /// @brief Field NatPunchModule, offset 0xe0, size 0x8
  __declspec(property(get = __get_NatPunchModule, put = __set_NatPunchModule))::LiteNetLib::NatPunchModule* NatPunchModule;

  /// @brief Field AutoRecycle, offset 0xe8, size 0x1
  __declspec(property(get = __get_AutoRecycle, put = __set_AutoRecycle)) bool AutoRecycle;

  /// @brief Field IPv6Enabled, offset 0xe9, size 0x1
  __declspec(property(get = __get_IPv6Enabled, put = __set_IPv6Enabled)) bool IPv6Enabled;

  /// @brief Field ThreadPriority, offset 0xec, size 0x4
  __declspec(property(get = __get_ThreadPriority, put = __set_ThreadPriority))::System::Threading::ThreadPriority ThreadPriority;

  __declspec(property(get = get_IsRunning)) bool IsRunning;

  __declspec(property(get = get_LocalPort)) int32_t LocalPort;

  __declspec(property(get = get_FirstPeer))::LiteNetLib::NetPeer* FirstPeer;

  __declspec(property(get = get_ChannelsCount, put = set_ChannelsCount)) uint8_t ChannelsCount;

  __declspec(property(get = get_ConnectedPeerList))::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* ConnectedPeerList;

  __declspec(property(get = get_ConnectedPeersCount)) int32_t ConnectedPeersCount;

  /// @brief Convert operator to "::LiteNetLib::INetSocketListener"
  constexpr operator ::LiteNetLib::INetSocketListener*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::LiteNetLib::NetSocket*& __get__socket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> const& __get__socket() const;

  constexpr void __set__socket(::LiteNetLib::NetSocket* value);

  constexpr ::System::Threading::Thread*& __get__logicThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __get__logicThread() const;

  constexpr void __set__logicThread(::System::Threading::Thread* value);

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>*& __get__netEventsQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>*> const& __get__netEventsQueue() const;

  constexpr void __set__netEventsQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>* value);

  constexpr ::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>*& __get__netEventsPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>*> const& __get__netEventsPool() const;

  constexpr void __set__netEventsPool(::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>* value);

  constexpr ::LiteNetLib::INetEventListener*& __get__netEventListener();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INetEventListener*> const& __get__netEventListener() const;

  constexpr void __set__netEventListener(::LiteNetLib::INetEventListener* value);

  constexpr ::LiteNetLib::IDeliveryEventListener*& __get__deliveryEventListener();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::IDeliveryEventListener*> const& __get__deliveryEventListener() const;

  constexpr void __set__deliveryEventListener(::LiteNetLib::IDeliveryEventListener* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>*& __get__peersDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>*> const& __get__peersDict() const;

  constexpr void __set__peersDict(::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>*& __get__requestsDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>*> const& __get__requestsDict() const;

  constexpr void __set__requestsDict(::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>* value);

  constexpr ::System::Threading::ReaderWriterLockSlim*& __get__peersLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __get__peersLock() const;

  constexpr void __set__peersLock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr ::LiteNetLib::NetPeer*& __get__headPeer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __get__headPeer() const;

  constexpr void __set__headPeer(::LiteNetLib::NetPeer* value);

  constexpr int32_t& __get__connectedPeersCount();

  constexpr int32_t const& __get__connectedPeersCount() const;

  constexpr void __set__connectedPeersCount(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*& __get__connectedPeerListCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*> const& __get__connectedPeerListCache() const;

  constexpr void __set__connectedPeerListCache(::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* value);

  constexpr ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*>& __get__peersArray();

  constexpr ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> const& __get__peersArray() const;

  constexpr void __set__peersArray(::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> value);

  constexpr ::LiteNetLib::Layers::PacketLayerBase*& __get__extraPacketLayer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Layers::PacketLayerBase*> const& __get__extraPacketLayer() const;

  constexpr void __set__extraPacketLayer(::LiteNetLib::Layers::PacketLayerBase* value);

  constexpr int32_t& __get__lastPeerId();

  constexpr int32_t const& __get__lastPeerId() const;

  constexpr void __set__lastPeerId(int32_t value);

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __get__peerIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& __get__peerIds() const;

  constexpr void __set__peerIds(::System::Collections::Generic::Queue_1<int32_t>* value);

  constexpr uint8_t& __get__channelsCount();

  constexpr uint8_t const& __get__channelsCount() const;

  constexpr void __set__channelsCount(uint8_t value);

  constexpr ::LiteNetLib::NetPacketPool*& __get_NetPacketPool();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketPool*> const& __get_NetPacketPool() const;

  constexpr void __set_NetPacketPool(::LiteNetLib::NetPacketPool* value);

  constexpr bool& __get_UnconnectedMessagesEnabled();

  constexpr bool const& __get_UnconnectedMessagesEnabled() const;

  constexpr void __set_UnconnectedMessagesEnabled(bool value);

  constexpr bool& __get_NatPunchEnabled();

  constexpr bool const& __get_NatPunchEnabled() const;

  constexpr void __set_NatPunchEnabled(bool value);

  constexpr int32_t& __get_UpdateTime();

  constexpr int32_t const& __get_UpdateTime() const;

  constexpr void __set_UpdateTime(int32_t value);

  constexpr int32_t& __get_PingInterval();

  constexpr int32_t const& __get_PingInterval() const;

  constexpr void __set_PingInterval(int32_t value);

  constexpr int32_t& __get_DisconnectTimeout();

  constexpr int32_t const& __get_DisconnectTimeout() const;

  constexpr void __set_DisconnectTimeout(int32_t value);

  constexpr bool& __get_SimulatePacketLoss();

  constexpr bool const& __get_SimulatePacketLoss() const;

  constexpr void __set_SimulatePacketLoss(bool value);

  constexpr bool& __get_SimulateLatency();

  constexpr bool const& __get_SimulateLatency() const;

  constexpr void __set_SimulateLatency(bool value);

  constexpr int32_t& __get_SimulationPacketLossChance();

  constexpr int32_t const& __get_SimulationPacketLossChance() const;

  constexpr void __set_SimulationPacketLossChance(int32_t value);

  constexpr int32_t& __get_SimulationMinLatency();

  constexpr int32_t const& __get_SimulationMinLatency() const;

  constexpr void __set_SimulationMinLatency(int32_t value);

  constexpr int32_t& __get_SimulationMaxLatency();

  constexpr int32_t const& __get_SimulationMaxLatency() const;

  constexpr void __set_SimulationMaxLatency(int32_t value);

  constexpr bool& __get_UnsyncedEvents();

  constexpr bool const& __get_UnsyncedEvents() const;

  constexpr void __set_UnsyncedEvents(bool value);

  constexpr bool& __get_UnsyncedDeliveryEvent();

  constexpr bool const& __get_UnsyncedDeliveryEvent() const;

  constexpr void __set_UnsyncedDeliveryEvent(bool value);

  constexpr bool& __get_BroadcastReceiveEnabled();

  constexpr bool const& __get_BroadcastReceiveEnabled() const;

  constexpr void __set_BroadcastReceiveEnabled(bool value);

  constexpr int32_t& __get_ReconnectDelay();

  constexpr int32_t const& __get_ReconnectDelay() const;

  constexpr void __set_ReconnectDelay(int32_t value);

  constexpr int32_t& __get_MaxConnectAttempts();

  constexpr int32_t const& __get_MaxConnectAttempts() const;

  constexpr void __set_MaxConnectAttempts(int32_t value);

  constexpr bool& __get_ReuseAddress();

  constexpr bool const& __get_ReuseAddress() const;

  constexpr void __set_ReuseAddress(bool value);

  constexpr ::LiteNetLib::NetStatistics*& __get_Statistics();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetStatistics*> const& __get_Statistics() const;

  constexpr void __set_Statistics(::LiteNetLib::NetStatistics* value);

  constexpr bool& __get_EnableStatistics();

  constexpr bool const& __get_EnableStatistics() const;

  constexpr void __set_EnableStatistics(bool value);

  constexpr ::LiteNetLib::NatPunchModule*& __get_NatPunchModule();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NatPunchModule*> const& __get_NatPunchModule() const;

  constexpr void __set_NatPunchModule(::LiteNetLib::NatPunchModule* value);

  constexpr bool& __get_AutoRecycle();

  constexpr bool const& __get_AutoRecycle() const;

  constexpr void __set_AutoRecycle(bool value);

  constexpr bool& __get_IPv6Enabled();

  constexpr bool const& __get_IPv6Enabled() const;

  constexpr void __set_IPv6Enabled(bool value);

  constexpr ::System::Threading::ThreadPriority& __get_ThreadPriority();

  constexpr ::System::Threading::ThreadPriority const& __get_ThreadPriority() const;

  constexpr void __set_ThreadPriority(::System::Threading::ThreadPriority value);

  /// @brief Method get_IsRunning addr 0x209a988 size 0x24 virtual false final false
  inline bool get_IsRunning();

  /// @brief Method get_LocalPort addr 0x209a9ac size 0x1c virtual false final false
  inline int32_t get_LocalPort();

  /// @brief Method get_FirstPeer addr 0x209a9c8 size 0x18 virtual false final false
  inline ::LiteNetLib::NetPeer* get_FirstPeer();

  /// @brief Method get_ChannelsCount addr 0x209a9e0 size 0x8 virtual false final false
  inline uint8_t get_ChannelsCount();

  /// @brief Method set_ChannelsCount addr 0x209a9e8 size 0x6c virtual false final false
  inline void set_ChannelsCount(uint8_t value);

  /// @brief Method get_ConnectedPeerList addr 0x209aa54 size 0x20 virtual false final false
  inline ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* get_ConnectedPeerList();

  /// @brief Method GetPeerById addr 0x209ab94 size 0x30 virtual false final false
  inline ::LiteNetLib::NetPeer* GetPeerById(int32_t id);

  /// @brief Method get_ConnectedPeersCount addr 0x209abc4 size 0x18 virtual false final false
  inline int32_t get_ConnectedPeersCount();

  /// @brief Method TryGetPeer addr 0x209abdc size 0x98 virtual false final false
  inline bool TryGetPeer(::System::Net::IPEndPoint* endPoint, ByRef<::LiteNetLib::NetPeer*> peer);

  /// @brief Method AddPeer addr 0x209ac74 size 0x14c virtual false final false
  inline void AddPeer(::LiteNetLib::NetPeer* peer);

  /// @brief Method RemovePeer addr 0x209adc0 size 0x48 virtual false final false
  inline void RemovePeer(::LiteNetLib::NetPeer* peer);

  /// @brief Method RemovePeerInternal addr 0x209ae08 size 0x1b4 virtual false final false
  inline void RemovePeerInternal(::LiteNetLib::NetPeer* peer);

  static inline ::LiteNetLib::NetManager* New_ctor(::LiteNetLib::INetEventListener* listener, ::LiteNetLib::Layers::PacketLayerBase* extraPacketLayer);

  /// @brief Method .ctor addr 0x209afbc size 0x3d0 virtual false final false
  inline void _ctor(::LiteNetLib::INetEventListener* listener, ::LiteNetLib::Layers::PacketLayerBase* extraPacketLayer);

  /// @brief Method ConnectionLatencyUpdated addr 0x209b45c size 0x40 virtual false final false
  inline void ConnectionLatencyUpdated(::LiteNetLib::NetPeer* fromPeer, int32_t latency);

  /// @brief Method MessageDelivered addr 0x209b7d8 size 0x4c virtual false final false
  inline void MessageDelivered(::LiteNetLib::NetPeer* fromPeer, ::System::Object* userData);

  /// @brief Method SendRawAndRecycle addr 0x209b824 size 0x54 virtual false final false
  inline int32_t SendRawAndRecycle(::LiteNetLib::NetPacket* packet, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendRaw addr 0x209bae0 size 0x28 virtual false final false
  inline int32_t SendRaw(::LiteNetLib::NetPacket* packet, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendRaw addr 0x209b878 size 0x268 virtual false final false
  inline int32_t SendRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t start, int32_t length, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method DisconnectPeerForce addr 0x209bc74 size 0x30 virtual false final false
  inline void DisconnectPeerForce(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectReason reason, ::System::Net::Sockets::SocketError socketErrorCode, ::LiteNetLib::NetPacket* eventData);

  /// @brief Method DisconnectPeer addr 0x209bcbc size 0xb0 virtual false final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectReason reason, ::System::Net::Sockets::SocketError socketErrorCode, bool force,
                             ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count, ::LiteNetLib::NetPacket* eventData);

  /// @brief Method CreateEvent addr 0x209b49c size 0x33c virtual false final false
  inline void CreateEvent(::LiteNetLib::__NetEvent__EType type, ::LiteNetLib::NetPeer* peer, ::System::Net::IPEndPoint* remoteEndPoint, ::System::Net::Sockets::SocketError errorCode, int32_t latency,
                          ::LiteNetLib::DisconnectReason disconnectReason, ::LiteNetLib::ConnectionRequest* connectionRequest, ::LiteNetLib::DeliveryMethod deliveryMethod,
                          ::LiteNetLib::NetPacket* readerSource, ::System::Object* userData);

  /// @brief Method ProcessEvent addr 0x209c028 size 0x4d4 virtual false final false
  inline void ProcessEvent(::LiteNetLib::NetEvent* evt);

  /// @brief Method RecycleEvent addr 0x209a78c size 0x114 virtual false final false
  inline void RecycleEvent(::LiteNetLib::NetEvent* evt);

  /// @brief Method UpdateLogic addr 0x209c50c size 0x290 virtual false final false
  inline void UpdateLogic();

  /// @brief Method LiteNetLib.INetSocketListener.OnMessageReceived addr 0x209ca20 size 0x2b0 virtual true final true
  inline void LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::System::Net::Sockets::SocketError errorCode,
                                                              ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method OnConnectionSolved addr 0x20966e8 size 0x3fc virtual false final false
  inline ::LiteNetLib::NetPeer* OnConnectionSolved(::LiteNetLib::ConnectionRequest* request, ::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length);

  /// @brief Method GetNextPeerId addr 0x209d344 size 0x130 virtual false final false
  inline int32_t GetNextPeerId();

  /// @brief Method ProcessConnectRequest addr 0x209d818 size 0x2e8 virtual false final false
  inline void ProcessConnectRequest(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::NetConnectRequestPacket* connRequest);

  /// @brief Method DataReceived addr 0x209ccd0 size 0x590 virtual false final false
  inline void DataReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> reusableBuffer, int32_t count, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method CreateReceiveEvent addr 0x209e7fc size 0x288 virtual false final false
  inline void CreateReceiveEvent(::LiteNetLib::NetPacket* packet, ::LiteNetLib::DeliveryMethod method, ::LiteNetLib::NetPeer* fromPeer);

  /// @brief Method SendToAll addr 0x209ea84 size 0x2c virtual false final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll addr 0x209eabc size 0x24 virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll addr 0x209eab0 size 0xc virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll addr 0x209ebf0 size 0x2c virtual false final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll addr 0x209ec1c size 0x24 virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll addr 0x209eae0 size 0x110 virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendToAll addr 0x209ec48 size 0x30 virtual false final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll addr 0x209ed9c size 0x28 virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll addr 0x209edc4 size 0x10 virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll addr 0x209edd4 size 0x30 virtual false final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll addr 0x209ee04 size 0x28 virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method SendToAll addr 0x209ec78 size 0x124 virtual false final false
  inline void SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer);

  /// @brief Method Start addr 0x209ee2c size 0x8 virtual false final false
  inline bool Start();

  /// @brief Method Start addr 0x209eea8 size 0x148 virtual false final false
  inline bool Start(::System::Net::IPAddress* addressIPv4, ::System::Net::IPAddress* addressIPv6, int32_t port);

  /// @brief Method Start addr 0x209f3f4 size 0x90 virtual false final false
  inline bool Start(::StringW addressIPv4, ::StringW addressIPv6, int32_t port);

  /// @brief Method Start addr 0x209ee34 size 0x74 virtual false final false
  inline bool Start(int32_t port);

  /// @brief Method SendUnconnectedMessage addr 0x209f63c size 0x20 virtual false final false
  inline bool SendUnconnectedMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> message, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendUnconnectedMessage addr 0x209f6b0 size 0x28 virtual false final false
  inline bool SendUnconnectedMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendUnconnectedMessage addr 0x209f65c size 0x54 virtual false final false
  inline bool SendUnconnectedMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t start, int32_t length, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method SendBroadcast addr 0x209f7b0 size 0x28 virtual false final false
  inline bool SendBroadcast(::LiteNetLib::Utils::NetDataWriter* writer, int32_t port);

  /// @brief Method SendBroadcast addr 0x209f938 size 0x20 virtual false final false
  inline bool SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t port);

  /// @brief Method SendBroadcast addr 0x209f7d8 size 0x160 virtual false final false
  inline bool SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, int32_t port);

  /// @brief Method Flush addr 0x209fcc4 size 0x28 virtual false final false
  inline void Flush();

  /// @brief Method PollEvents addr 0x209ff3c size 0x160 virtual false final false
  inline void PollEvents();

  /// @brief Method Connect addr 0x20a009c size 0x38 virtual false final false
  inline ::LiteNetLib::NetPeer* Connect(::StringW address, int32_t port, ::StringW key);

  /// @brief Method Connect addr 0x20a0144 size 0x148 virtual false final false
  inline ::LiteNetLib::NetPeer* Connect(::StringW address, int32_t port, ::LiteNetLib::Utils::NetDataWriter* connectionData);

  /// @brief Method Connect addr 0x20a0454 size 0x30 virtual false final false
  inline ::LiteNetLib::NetPeer* Connect(::System::Net::IPEndPoint* target, ::StringW key);

  /// @brief Method Connect addr 0x20a028c size 0x1c8 virtual false final false
  inline ::LiteNetLib::NetPeer* Connect(::System::Net::IPEndPoint* target, ::LiteNetLib::Utils::NetDataWriter* connectionData);

  /// @brief Method Stop addr 0x20a0594 size 0x8 virtual false final false
  inline void Stop();

  /// @brief Method Stop addr 0x20a059c size 0x2b4 virtual false final false
  inline void Stop(bool sendDisconnectMessages);

  /// @brief Method GetPeersCount addr 0x20a08f8 size 0x74 virtual false final false
  inline int32_t GetPeersCount(::LiteNetLib::ConnectionState peerState);

  /// @brief Method GetPeersNonAlloc addr 0x209aa74 size 0x120 virtual false final false
  inline void GetPeersNonAlloc(::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* peers, ::LiteNetLib::ConnectionState peerState);

  /// @brief Method DisconnectAll addr 0x20a096c size 0x10 virtual false final false
  inline void DisconnectAll();

  /// @brief Method DisconnectAll addr 0x20a097c size 0x90 virtual false final false
  inline void DisconnectAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count);

  /// @brief Method DisconnectPeerForce addr 0x20a0a0c size 0x34 virtual false final false
  inline void DisconnectPeerForce(::LiteNetLib::NetPeer* peer);

  /// @brief Method DisconnectPeer addr 0x20a0a40 size 0x34 virtual false final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer);

  /// @brief Method DisconnectPeer addr 0x20a0aa8 size 0x3c virtual false final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method DisconnectPeer addr 0x20a0ae4 size 0x3c virtual false final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method DisconnectPeer addr 0x20a0a74 size 0x34 virtual false final false
  inline void DisconnectPeer(::LiteNetLib::NetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count);

  /// @brief Method GetEnumerator addr 0x20a0b20 size 0x1c virtual false final false
  inline ::LiteNetLib::__NetManager__NetPeerEnumerator GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<LiteNetLib.NetPeer>.GetEnumerator addr 0x20a0b44 size 0x60 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>* System_Collections_Generic_IEnumerable_LiteNetLib_NetPeer__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x20a0ba4 size 0x60 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "NetManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetManager(NetManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetManager(NetManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetManager();

public:
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
