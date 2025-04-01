#pragma once
// IWYU pragma private; include "LiteNetLib/NetPeer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPeer)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
class BaseChannel;
}
namespace LiteNetLib {
struct ConnectRequestResult;
}
namespace LiteNetLib {
struct ConnectionState;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectResult;
}
namespace LiteNetLib {
class NetConnectAcceptPacket;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetPacketPool;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer_IncomingFragments;
}
namespace LiteNetLib {
class NetStatistics;
}
namespace LiteNetLib {
struct ShutdownResult;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class NetPeer_IncomingFragments;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetPeer);
MARK_REF_PTR_T(::LiteNetLib::NetPeer_IncomingFragments);
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetPeer/IncomingFragments
class CORDL_TYPE NetPeer_IncomingFragments : public ::System::Object {
public:
  // Declarations
  /// @brief Field ChannelId, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_ChannelId, put = __cordl_internal_set_ChannelId)) uint8_t ChannelId;

  /// @brief Field Fragments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Fragments, put = __cordl_internal_set_Fragments)) ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> Fragments;

  /// @brief Field ReceivedCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ReceivedCount, put = __cordl_internal_set_ReceivedCount)) int32_t ReceivedCount;

  /// @brief Field TotalSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_TotalSize, put = __cordl_internal_set_TotalSize)) int32_t TotalSize;

  static inline ::LiteNetLib::NetPeer_IncomingFragments* New_ctor();

  constexpr uint8_t const& __cordl_internal_get_ChannelId() const;

  constexpr uint8_t& __cordl_internal_get_ChannelId();

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& __cordl_internal_get_Fragments() const;

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& __cordl_internal_get_Fragments();

  constexpr int32_t const& __cordl_internal_get_ReceivedCount() const;

  constexpr int32_t& __cordl_internal_get_ReceivedCount();

  constexpr int32_t const& __cordl_internal_get_TotalSize() const;

  constexpr int32_t& __cordl_internal_get_TotalSize();

  constexpr void __cordl_internal_set_ChannelId(uint8_t value);

  constexpr void __cordl_internal_set_Fragments(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value);

  constexpr void __cordl_internal_set_ReceivedCount(int32_t value);

  constexpr void __cordl_internal_set_TotalSize(int32_t value);

  /// @brief Method .ctor, addr 0x3ab2cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPeer_IncomingFragments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPeer_IncomingFragments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPeer_IncomingFragments(NetPeer_IncomingFragments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPeer_IncomingFragments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPeer_IncomingFragments(NetPeer_IncomingFragments const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16561 };

  /// @brief Field Fragments, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> ___Fragments;

  /// @brief Field ReceivedCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___ReceivedCount;

  /// @brief Field TotalSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___TotalSize;

  /// @brief Field ChannelId, offset: 0x20, size: 0x1, def value: None
  uint8_t ___ChannelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetPeer_IncomingFragments, ___Fragments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer_IncomingFragments, ___ReceivedCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer_IncomingFragments, ___TotalSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer_IncomingFragments, ___ChannelId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPeer_IncomingFragments, 0x28>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies LiteNetLib.ConnectionState, System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetPeer
class CORDL_TYPE NetPeer : public ::System::Object {
public:
  // Declarations
  using IncomingFragments = ::LiteNetLib::NetPeer_IncomingFragments;

  __declspec(property(get = get_ConnectTime)) int64_t ConnectTime;

  __declspec(property(get = get_ConnectionNum, put = set_ConnectionNum)) uint8_t ConnectionNum;

  __declspec(property(get = get_ConnectionState)) ::LiteNetLib::ConnectionState ConnectionState;

  /// @brief Field EndPoint, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_EndPoint, put = __cordl_internal_set_EndPoint)) ::System::Net::IPEndPoint* EndPoint;

  /// @brief Field Id, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) int32_t Id;

  __declspec(property(get = get_Mtu)) int32_t Mtu;

  /// @brief Field NetManager, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_NetManager, put = __cordl_internal_set_NetManager)) ::LiteNetLib::NetManager* NetManager;

  /// @brief Field NextPeer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_NextPeer, put = __cordl_internal_set_NextPeer)) ::LiteNetLib::NetPeer* NextPeer;

  __declspec(property(get = get_Ping)) int32_t Ping;

  /// @brief Field PrevPeer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_PrevPeer, put = __cordl_internal_set_PrevPeer)) ::LiteNetLib::NetPeer* PrevPeer;

  __declspec(property(get = get_RemoteTimeDelta)) int64_t RemoteTimeDelta;

  __declspec(property(get = get_RemoteUtcTime)) ::System::DateTime RemoteUtcTime;

  __declspec(property(get = get_ResendDelay)) double_t ResendDelay;

  /// @brief Field Statistics, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_Statistics, put = __cordl_internal_set_Statistics)) ::LiteNetLib::NetStatistics* Statistics;

  /// @brief Field Tag, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_Tag, put = __cordl_internal_set_Tag)) ::System::Object* Tag;

  __declspec(property(get = get_TimeSinceLastPacket)) int32_t TimeSinceLastPacket;

  /// @brief Field _avgRtt, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__avgRtt, put = __cordl_internal_set__avgRtt)) int32_t _avgRtt;

  /// @brief Field _channels, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__channels, put = __cordl_internal_set__channels)) ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> _channels;

  /// @brief Field _connectAcceptPacket, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__connectAcceptPacket, put = __cordl_internal_set__connectAcceptPacket)) ::LiteNetLib::NetPacket* _connectAcceptPacket;

  /// @brief Field _connectAttempts, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get__connectAttempts, put = __cordl_internal_set__connectAttempts)) int32_t _connectAttempts;

  /// @brief Field _connectNum, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__connectNum, put = __cordl_internal_set__connectNum)) uint8_t _connectNum;

  /// @brief Field _connectRequestPacket, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__connectRequestPacket, put = __cordl_internal_set__connectRequestPacket)) ::LiteNetLib::NetPacket* _connectRequestPacket;

  /// @brief Field _connectTime, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectTime, put = __cordl_internal_set__connectTime)) int64_t _connectTime;

  /// @brief Field _connectTimer, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get__connectTimer, put = __cordl_internal_set__connectTimer)) int32_t _connectTimer;

  /// @brief Field _connectionState, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get__connectionState, put = __cordl_internal_set__connectionState)) ::LiteNetLib::ConnectionState _connectionState;

  /// @brief Field _deliveredFramgnets, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__deliveredFramgnets,
                      put = __cordl_internal_set__deliveredFramgnets)) ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* _deliveredFramgnets;

  /// @brief Field _finishMtu, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__finishMtu, put = __cordl_internal_set__finishMtu)) bool _finishMtu;

  /// @brief Field _flushLock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__flushLock, put = __cordl_internal_set__flushLock)) ::System::Object* _flushLock;

  /// @brief Field _fragmentId, offset 0xb0, size 0x2
  __declspec(property(get = __cordl_internal_get__fragmentId, put = __cordl_internal_set__fragmentId)) uint16_t _fragmentId;

  /// @brief Field _headChannel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__headChannel, put = __cordl_internal_set__headChannel)) ::LiteNetLib::BaseChannel* _headChannel;

  /// @brief Field _holdedFragments, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__holdedFragments,
                      put = __cordl_internal_set__holdedFragments)) ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>* _holdedFragments;

  /// @brief Field _mergeCount, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get__mergeCount, put = __cordl_internal_set__mergeCount)) int32_t _mergeCount;

  /// @brief Field _mergeData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__mergeData, put = __cordl_internal_set__mergeData)) ::LiteNetLib::NetPacket* _mergeData;

  /// @brief Field _mergePos, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__mergePos, put = __cordl_internal_set__mergePos)) int32_t _mergePos;

  /// @brief Field _mtu, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__mtu, put = __cordl_internal_set__mtu)) int32_t _mtu;

  /// @brief Field _mtuCheckAttempts, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__mtuCheckAttempts, put = __cordl_internal_set__mtuCheckAttempts)) int32_t _mtuCheckAttempts;

  /// @brief Field _mtuCheckTimer, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__mtuCheckTimer, put = __cordl_internal_set__mtuCheckTimer)) int32_t _mtuCheckTimer;

  /// @brief Field _mtuIdx, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__mtuIdx, put = __cordl_internal_set__mtuIdx)) int32_t _mtuIdx;

  /// @brief Field _mtuMutex, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__mtuMutex, put = __cordl_internal_set__mtuMutex)) ::System::Object* _mtuMutex;

  /// @brief Field _packetPool, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__packetPool, put = __cordl_internal_set__packetPool)) ::LiteNetLib::NetPacketPool* _packetPool;

  /// @brief Field _pingPacket, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__pingPacket, put = __cordl_internal_set__pingPacket)) ::LiteNetLib::NetPacket* _pingPacket;

  /// @brief Field _pingSendTimer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__pingSendTimer, put = __cordl_internal_set__pingSendTimer)) int32_t _pingSendTimer;

  /// @brief Field _pingTimer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pingTimer, put = __cordl_internal_set__pingTimer)) ::System::Diagnostics::Stopwatch* _pingTimer;

  /// @brief Field _pongPacket, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__pongPacket, put = __cordl_internal_set__pongPacket)) ::LiteNetLib::NetPacket* _pongPacket;

  /// @brief Field _remoteDelta, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__remoteDelta, put = __cordl_internal_set__remoteDelta)) int64_t _remoteDelta;

  /// @brief Field _resendDelay, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__resendDelay, put = __cordl_internal_set__resendDelay)) double_t _resendDelay;

  /// @brief Field _rtt, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__rtt, put = __cordl_internal_set__rtt)) int32_t _rtt;

  /// @brief Field _rttCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__rttCount, put = __cordl_internal_set__rttCount)) int32_t _rttCount;

  /// @brief Field _rttResetTimer, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__rttResetTimer, put = __cordl_internal_set__rttResetTimer)) int32_t _rttResetTimer;

  /// @brief Field _sendLock, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sendLock, put = __cordl_internal_set__sendLock)) ::System::Object* _sendLock;

  /// @brief Field _shutdownLock, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__shutdownLock, put = __cordl_internal_set__shutdownLock)) ::System::Object* _shutdownLock;

  /// @brief Field _shutdownPacket, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__shutdownPacket, put = __cordl_internal_set__shutdownPacket)) ::LiteNetLib::NetPacket* _shutdownPacket;

  /// @brief Field _shutdownTimer, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get__shutdownTimer, put = __cordl_internal_set__shutdownTimer)) int32_t _shutdownTimer;

  /// @brief Field _timeSinceLastPacket, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceLastPacket, put = __cordl_internal_set__timeSinceLastPacket)) int32_t _timeSinceLastPacket;

  /// @brief Field _unreliableChannel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__unreliableChannel,
                      put = __cordl_internal_set__unreliableChannel)) ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* _unreliableChannel;

  /// @brief Method AddReliablePacket, addr 0x3ab28dc, size 0x3ec, virtual false, abstract: false, final false
  inline void AddReliablePacket(::LiteNetLib::DeliveryMethod method, ::LiteNetLib::NetPacket* p);

  /// @brief Method CreateChannel, addr 0x3ab1cd0, size 0x180, virtual false, abstract: false, final false
  inline ::LiteNetLib::BaseChannel* CreateChannel(uint8_t idx);

  /// @brief Method Disconnect, addr 0x3ab285c, size 0x44, virtual false, abstract: false, final false
  inline void Disconnect();

  /// @brief Method Disconnect, addr 0x3ab27cc, size 0x24, virtual false, abstract: false, final false
  inline void Disconnect(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Disconnect, addr 0x3ab2814, size 0x48, virtual false, abstract: false, final false
  inline void Disconnect(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count);

  /// @brief Method Disconnect, addr 0x3ab27f0, size 0x24, virtual false, abstract: false, final false
  inline void Disconnect(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Flush, addr 0x3ab040c, size 0x24c, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method GetMaxSinglePacketSize, addr 0x3ab2080, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetMaxSinglePacketSize(::LiteNetLib::DeliveryMethod options);

  /// @brief Method GetPacketsCountInReliableQueue, addr 0x3ab1c20, size 0xb0, virtual false, abstract: false, final false
  inline int32_t GetPacketsCountInReliableQueue(uint8_t channelNumber, bool ordered);

  static inline ::LiteNetLib::NetPeer* New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id);

  static inline ::LiteNetLib::NetPeer* New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum);

  static inline ::LiteNetLib::NetPeer* New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum,
                                                ::LiteNetLib::Utils::NetDataWriter* connectData);

  /// @brief Method ProcessConnectAccept, addr 0x3aae9b4, size 0x64, virtual false, abstract: false, final false
  inline bool ProcessConnectAccept(::LiteNetLib::NetConnectAcceptPacket* packet);

  /// @brief Method ProcessConnectRequest, addr 0x3aae37c, size 0x12c, virtual false, abstract: false, final false
  inline ::LiteNetLib::ConnectRequestResult ProcessConnectRequest(::LiteNetLib::NetConnectRequestPacket* connRequest);

  /// @brief Method ProcessDisconnect, addr 0x3aae84c, size 0x8c, virtual false, abstract: false, final false
  inline ::LiteNetLib::DisconnectResult ProcessDisconnect(::LiteNetLib::NetPacket* packet);

  /// @brief Method ProcessMtuPacket, addr 0x3ab2cd0, size 0x3c0, virtual false, abstract: false, final false
  inline void ProcessMtuPacket(::LiteNetLib::NetPacket* packet);

  /// @brief Method ProcessPacket, addr 0x3aaea18, size 0x564, virtual false, abstract: false, final false
  inline void ProcessPacket(::LiteNetLib::NetPacket* packet);

  /// @brief Method RecycleAndDeliver, addr 0x3ab34b8, size 0x180, virtual false, abstract: false, final false
  inline void RecycleAndDeliver(::LiteNetLib::NetPacket* packet);

  /// @brief Method Reject, addr 0x3aae020, size 0x1c, virtual false, abstract: false, final false
  inline void Reject(int64_t connectionId, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length);

  /// @brief Method Send, addr 0x3ab2774, size 0x28, virtual false, abstract: false, final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send, addr 0x3ab270c, size 0x28, virtual false, abstract: false, final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send, addr 0x3aaf3b4, size 0x8, virtual false, abstract: false, final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send, addr 0x3ab2764, size 0x10, virtual false, abstract: false, final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method Send, addr 0x3ab279c, size 0x30, virtual false, abstract: false, final false
  inline void Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send, addr 0x3ab2734, size 0x30, virtual false, abstract: false, final false
  inline void Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method SendInternal, addr 0x3ab2174, size 0x4b0, virtual false, abstract: false, final false
  inline void SendInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData);

  /// @brief Method SendMerged, addr 0x3ab32fc, size 0xa0, virtual false, abstract: false, final false
  inline void SendMerged();

  /// @brief Method SendUserData, addr 0x3ab339c, size 0x11c, virtual false, abstract: false, final false
  inline void SendUserData(::LiteNetLib::NetPacket* packet);

  /// @brief Method SendWithDeliveryEvent, addr 0x3ab20f4, size 0x80, virtual false, abstract: false, final false
  inline void SendWithDeliveryEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData);

  /// @brief Method SendWithDeliveryEvent, addr 0x3ab2624, size 0x60, virtual false, abstract: false, final false
  inline void SendWithDeliveryEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod,
                                    ::System::Object* userData);

  /// @brief Method SendWithDeliveryEvent, addr 0x3ab2684, size 0x88, virtual false, abstract: false, final false
  inline void SendWithDeliveryEvent(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData);

  /// @brief Method SetMtu, addr 0x3ab1b74, size 0xac, virtual false, abstract: false, final false
  inline void SetMtu(int32_t mtuIdx);

  /// @brief Method Shutdown, addr 0x3aac5dc, size 0x2c8, virtual false, abstract: false, final false
  inline ::LiteNetLib::ShutdownResult Shutdown(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, bool force);

  /// @brief Method Update, addr 0x3aad058, size 0x28c, virtual false, abstract: false, final false
  inline void Update(int32_t deltaTime);

  /// @brief Method UpdateMtuLogic, addr 0x3ab3090, size 0x240, virtual false, abstract: false, final false
  inline void UpdateMtuLogic(int32_t deltaTime);

  /// @brief Method UpdateRoundTripTime, addr 0x3ab28a0, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateRoundTripTime(int32_t roundTripTime);

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get_EndPoint() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_EndPoint();

  constexpr int32_t const& __cordl_internal_get_Id() const;

  constexpr int32_t& __cordl_internal_get_Id();

  constexpr ::LiteNetLib::NetManager* const& __cordl_internal_get_NetManager() const;

  constexpr ::LiteNetLib::NetManager*& __cordl_internal_get_NetManager();

  constexpr ::LiteNetLib::NetPeer* const& __cordl_internal_get_NextPeer() const;

  constexpr ::LiteNetLib::NetPeer*& __cordl_internal_get_NextPeer();

  constexpr ::LiteNetLib::NetPeer* const& __cordl_internal_get_PrevPeer() const;

  constexpr ::LiteNetLib::NetPeer*& __cordl_internal_get_PrevPeer();

  constexpr ::LiteNetLib::NetStatistics* const& __cordl_internal_get_Statistics() const;

  constexpr ::LiteNetLib::NetStatistics*& __cordl_internal_get_Statistics();

  constexpr ::System::Object* const& __cordl_internal_get_Tag() const;

  constexpr ::System::Object*& __cordl_internal_get_Tag();

  constexpr int32_t const& __cordl_internal_get__avgRtt() const;

  constexpr int32_t& __cordl_internal_get__avgRtt();

  constexpr ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> const& __cordl_internal_get__channels() const;

  constexpr ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*>& __cordl_internal_get__channels();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__connectAcceptPacket() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__connectAcceptPacket();

  constexpr int32_t const& __cordl_internal_get__connectAttempts() const;

  constexpr int32_t& __cordl_internal_get__connectAttempts();

  constexpr uint8_t const& __cordl_internal_get__connectNum() const;

  constexpr uint8_t& __cordl_internal_get__connectNum();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__connectRequestPacket() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__connectRequestPacket();

  constexpr int64_t const& __cordl_internal_get__connectTime() const;

  constexpr int64_t& __cordl_internal_get__connectTime();

  constexpr int32_t const& __cordl_internal_get__connectTimer() const;

  constexpr int32_t& __cordl_internal_get__connectTimer();

  constexpr ::LiteNetLib::ConnectionState const& __cordl_internal_get__connectionState() const;

  constexpr ::LiteNetLib::ConnectionState& __cordl_internal_get__connectionState();

  constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* const& __cordl_internal_get__deliveredFramgnets() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>*& __cordl_internal_get__deliveredFramgnets();

  constexpr bool const& __cordl_internal_get__finishMtu() const;

  constexpr bool& __cordl_internal_get__finishMtu();

  constexpr ::System::Object* const& __cordl_internal_get__flushLock() const;

  constexpr ::System::Object*& __cordl_internal_get__flushLock();

  constexpr uint16_t const& __cordl_internal_get__fragmentId() const;

  constexpr uint16_t& __cordl_internal_get__fragmentId();

  constexpr ::LiteNetLib::BaseChannel* const& __cordl_internal_get__headChannel() const;

  constexpr ::LiteNetLib::BaseChannel*& __cordl_internal_get__headChannel();

  constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>* const& __cordl_internal_get__holdedFragments() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>*& __cordl_internal_get__holdedFragments();

  constexpr int32_t const& __cordl_internal_get__mergeCount() const;

  constexpr int32_t& __cordl_internal_get__mergeCount();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__mergeData() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__mergeData();

  constexpr int32_t const& __cordl_internal_get__mergePos() const;

  constexpr int32_t& __cordl_internal_get__mergePos();

  constexpr int32_t const& __cordl_internal_get__mtu() const;

  constexpr int32_t& __cordl_internal_get__mtu();

  constexpr int32_t const& __cordl_internal_get__mtuCheckAttempts() const;

  constexpr int32_t& __cordl_internal_get__mtuCheckAttempts();

  constexpr int32_t const& __cordl_internal_get__mtuCheckTimer() const;

  constexpr int32_t& __cordl_internal_get__mtuCheckTimer();

  constexpr int32_t const& __cordl_internal_get__mtuIdx() const;

  constexpr int32_t& __cordl_internal_get__mtuIdx();

  constexpr ::System::Object* const& __cordl_internal_get__mtuMutex() const;

  constexpr ::System::Object*& __cordl_internal_get__mtuMutex();

  constexpr ::LiteNetLib::NetPacketPool* const& __cordl_internal_get__packetPool() const;

  constexpr ::LiteNetLib::NetPacketPool*& __cordl_internal_get__packetPool();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__pingPacket() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__pingPacket();

  constexpr int32_t const& __cordl_internal_get__pingSendTimer() const;

  constexpr int32_t& __cordl_internal_get__pingSendTimer();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__pingTimer() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__pingTimer();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__pongPacket() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__pongPacket();

  constexpr int64_t const& __cordl_internal_get__remoteDelta() const;

  constexpr int64_t& __cordl_internal_get__remoteDelta();

  constexpr double_t const& __cordl_internal_get__resendDelay() const;

  constexpr double_t& __cordl_internal_get__resendDelay();

  constexpr int32_t const& __cordl_internal_get__rtt() const;

  constexpr int32_t& __cordl_internal_get__rtt();

  constexpr int32_t const& __cordl_internal_get__rttCount() const;

  constexpr int32_t& __cordl_internal_get__rttCount();

  constexpr int32_t const& __cordl_internal_get__rttResetTimer() const;

  constexpr int32_t& __cordl_internal_get__rttResetTimer();

  constexpr ::System::Object* const& __cordl_internal_get__sendLock() const;

  constexpr ::System::Object*& __cordl_internal_get__sendLock();

  constexpr ::System::Object* const& __cordl_internal_get__shutdownLock() const;

  constexpr ::System::Object*& __cordl_internal_get__shutdownLock();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__shutdownPacket() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__shutdownPacket();

  constexpr int32_t const& __cordl_internal_get__shutdownTimer() const;

  constexpr int32_t& __cordl_internal_get__shutdownTimer();

  constexpr int32_t const& __cordl_internal_get__timeSinceLastPacket() const;

  constexpr int32_t& __cordl_internal_get__timeSinceLastPacket();

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* const& __cordl_internal_get__unreliableChannel() const;

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& __cordl_internal_get__unreliableChannel();

  constexpr void __cordl_internal_set_EndPoint(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set_Id(int32_t value);

  constexpr void __cordl_internal_set_NetManager(::LiteNetLib::NetManager* value);

  constexpr void __cordl_internal_set_NextPeer(::LiteNetLib::NetPeer* value);

  constexpr void __cordl_internal_set_PrevPeer(::LiteNetLib::NetPeer* value);

  constexpr void __cordl_internal_set_Statistics(::LiteNetLib::NetStatistics* value);

  constexpr void __cordl_internal_set_Tag(::System::Object* value);

  constexpr void __cordl_internal_set__avgRtt(int32_t value);

  constexpr void __cordl_internal_set__channels(::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> value);

  constexpr void __cordl_internal_set__connectAcceptPacket(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__connectAttempts(int32_t value);

  constexpr void __cordl_internal_set__connectNum(uint8_t value);

  constexpr void __cordl_internal_set__connectRequestPacket(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__connectTime(int64_t value);

  constexpr void __cordl_internal_set__connectTimer(int32_t value);

  constexpr void __cordl_internal_set__connectionState(::LiteNetLib::ConnectionState value);

  constexpr void __cordl_internal_set__deliveredFramgnets(::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* value);

  constexpr void __cordl_internal_set__finishMtu(bool value);

  constexpr void __cordl_internal_set__flushLock(::System::Object* value);

  constexpr void __cordl_internal_set__fragmentId(uint16_t value);

  constexpr void __cordl_internal_set__headChannel(::LiteNetLib::BaseChannel* value);

  constexpr void __cordl_internal_set__holdedFragments(::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>* value);

  constexpr void __cordl_internal_set__mergeCount(int32_t value);

  constexpr void __cordl_internal_set__mergeData(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__mergePos(int32_t value);

  constexpr void __cordl_internal_set__mtu(int32_t value);

  constexpr void __cordl_internal_set__mtuCheckAttempts(int32_t value);

  constexpr void __cordl_internal_set__mtuCheckTimer(int32_t value);

  constexpr void __cordl_internal_set__mtuIdx(int32_t value);

  constexpr void __cordl_internal_set__mtuMutex(::System::Object* value);

  constexpr void __cordl_internal_set__packetPool(::LiteNetLib::NetPacketPool* value);

  constexpr void __cordl_internal_set__pingPacket(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__pingSendTimer(int32_t value);

  constexpr void __cordl_internal_set__pingTimer(::System::Diagnostics::Stopwatch* value);

  constexpr void __cordl_internal_set__pongPacket(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__remoteDelta(int64_t value);

  constexpr void __cordl_internal_set__resendDelay(double_t value);

  constexpr void __cordl_internal_set__rtt(int32_t value);

  constexpr void __cordl_internal_set__rttCount(int32_t value);

  constexpr void __cordl_internal_set__rttResetTimer(int32_t value);

  constexpr void __cordl_internal_set__sendLock(::System::Object* value);

  constexpr void __cordl_internal_set__shutdownLock(::System::Object* value);

  constexpr void __cordl_internal_set__shutdownPacket(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__shutdownTimer(int32_t value);

  constexpr void __cordl_internal_set__timeSinceLastPacket(int32_t value);

  constexpr void __cordl_internal_set__unreliableChannel(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value);

  /// @brief Method .ctor, addr 0x3aadd1c, size 0x304, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id);

  /// @brief Method .ctor, addr 0x3aae03c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum);

  /// @brief Method .ctor, addr 0x3ab0b94, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum, ::LiteNetLib::Utils::NetDataWriter* connectData);

  /// @brief Method get_ConnectTime, addr 0x3ab1aac, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ConnectTime();

  /// @brief Method get_ConnectionNum, addr 0x3ab1a50, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_ConnectionNum();

  /// @brief Method get_ConnectionState, addr 0x3ab1aa4, size 0x8, virtual false, abstract: false, final false
  inline ::LiteNetLib::ConnectionState get_ConnectionState();

  /// @brief Method get_Mtu, addr 0x3ab1ac8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Mtu();

  /// @brief Method get_Ping, addr 0x3ab1ab4, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_Ping();

  /// @brief Method get_RemoteTimeDelta, addr 0x3ab1ad0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_RemoteTimeDelta();

  /// @brief Method get_RemoteUtcTime, addr 0x3ab1ad8, size 0x8c, virtual false, abstract: false, final false
  inline ::System::DateTime get_RemoteUtcTime();

  /// @brief Method get_ResendDelay, addr 0x3ab1b6c, size 0x8, virtual false, abstract: false, final false
  inline double_t get_ResendDelay();

  /// @brief Method get_TimeSinceLastPacket, addr 0x3ab1b64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TimeSinceLastPacket();

  /// @brief Method set_ConnectionNum, addr 0x3ab1a58, size 0x4c, virtual false, abstract: false, final false
  inline void set_ConnectionNum(uint8_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPeer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPeer(NetPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPeer(NetPeer const&) = delete;

  /// @brief Field MaxMtuCheckAttempts offset 0xffffffff size 0x4
  static constexpr int32_t MaxMtuCheckAttempts{ static_cast<int32_t>(0x4) };

  /// @brief Field MtuCheckDelay offset 0xffffffff size 0x4
  static constexpr int32_t MtuCheckDelay{ static_cast<int32_t>(0x3e8) };

  /// @brief Field ShutdownDelay offset 0xffffffff size 0x4
  static constexpr int32_t ShutdownDelay{ static_cast<int32_t>(0x12c) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16562 };

  /// @brief Field _rtt, offset: 0x10, size: 0x4, def value: None
  int32_t ____rtt;

  /// @brief Field _avgRtt, offset: 0x14, size: 0x4, def value: None
  int32_t ____avgRtt;

  /// @brief Field _rttCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____rttCount;

  /// @brief Field _resendDelay, offset: 0x20, size: 0x8, def value: None
  double_t ____resendDelay;

  /// @brief Field _pingSendTimer, offset: 0x28, size: 0x4, def value: None
  int32_t ____pingSendTimer;

  /// @brief Field _rttResetTimer, offset: 0x2c, size: 0x4, def value: None
  int32_t ____rttResetTimer;

  /// @brief Field _pingTimer, offset: 0x30, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____pingTimer;

  /// @brief Field _timeSinceLastPacket, offset: 0x38, size: 0x4, def value: None
  int32_t ____timeSinceLastPacket;

  /// @brief Field _remoteDelta, offset: 0x40, size: 0x8, def value: None
  int64_t ____remoteDelta;

  /// @brief Field _packetPool, offset: 0x48, size: 0x8, def value: None
  ::LiteNetLib::NetPacketPool* ____packetPool;

  /// @brief Field _flushLock, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ____flushLock;

  /// @brief Field _sendLock, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ____sendLock;

  /// @brief Field _shutdownLock, offset: 0x60, size: 0x8, def value: None
  ::System::Object* ____shutdownLock;

  /// @brief Field NextPeer, offset: 0x68, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* ___NextPeer;

  /// @brief Field PrevPeer, offset: 0x70, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* ___PrevPeer;

  /// @brief Field _unreliableChannel, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* ____unreliableChannel;

  /// @brief Field _channels, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> ____channels;

  /// @brief Field _headChannel, offset: 0x88, size: 0x8, def value: None
  ::LiteNetLib::BaseChannel* ____headChannel;

  /// @brief Field _mtu, offset: 0x90, size: 0x4, def value: None
  int32_t ____mtu;

  /// @brief Field _mtuIdx, offset: 0x94, size: 0x4, def value: None
  int32_t ____mtuIdx;

  /// @brief Field _finishMtu, offset: 0x98, size: 0x1, def value: None
  bool ____finishMtu;

  /// @brief Field _mtuCheckTimer, offset: 0x9c, size: 0x4, def value: None
  int32_t ____mtuCheckTimer;

  /// @brief Field _mtuCheckAttempts, offset: 0xa0, size: 0x4, def value: None
  int32_t ____mtuCheckAttempts;

  /// @brief Field _mtuMutex, offset: 0xa8, size: 0x8, def value: None
  ::System::Object* ____mtuMutex;

  /// @brief Field _fragmentId, offset: 0xb0, size: 0x2, def value: None
  uint16_t ____fragmentId;

  /// @brief Field _holdedFragments, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>* ____holdedFragments;

  /// @brief Field _deliveredFramgnets, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* ____deliveredFramgnets;

  /// @brief Field _mergeData, offset: 0xc8, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____mergeData;

  /// @brief Field _mergePos, offset: 0xd0, size: 0x4, def value: None
  int32_t ____mergePos;

  /// @brief Field _mergeCount, offset: 0xd4, size: 0x4, def value: None
  int32_t ____mergeCount;

  /// @brief Field _connectAttempts, offset: 0xd8, size: 0x4, def value: None
  int32_t ____connectAttempts;

  /// @brief Field _connectTimer, offset: 0xdc, size: 0x4, def value: None
  int32_t ____connectTimer;

  /// @brief Field _connectTime, offset: 0xe0, size: 0x8, def value: None
  int64_t ____connectTime;

  /// @brief Field _connectNum, offset: 0xe8, size: 0x1, def value: None
  uint8_t ____connectNum;

  /// @brief Field _connectionState, offset: 0xe9, size: 0x1, def value: None
  ::LiteNetLib::ConnectionState ____connectionState;

  /// @brief Field _shutdownPacket, offset: 0xf0, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____shutdownPacket;

  /// @brief Field _shutdownTimer, offset: 0xf8, size: 0x4, def value: None
  int32_t ____shutdownTimer;

  /// @brief Field _pingPacket, offset: 0x100, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____pingPacket;

  /// @brief Field _pongPacket, offset: 0x108, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____pongPacket;

  /// @brief Field _connectRequestPacket, offset: 0x110, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____connectRequestPacket;

  /// @brief Field _connectAcceptPacket, offset: 0x118, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____connectAcceptPacket;

  /// @brief Field EndPoint, offset: 0x120, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___EndPoint;

  /// @brief Field NetManager, offset: 0x128, size: 0x8, def value: None
  ::LiteNetLib::NetManager* ___NetManager;

  /// @brief Field Id, offset: 0x130, size: 0x4, def value: None
  int32_t ___Id;

  /// @brief Field Tag, offset: 0x138, size: 0x8, def value: None
  ::System::Object* ___Tag;

  /// @brief Field Statistics, offset: 0x140, size: 0x8, def value: None
  ::LiteNetLib::NetStatistics* ___Statistics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetPeer, ____rtt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____avgRtt) == 0x14, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____rttCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____resendDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____pingSendTimer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____rttResetTimer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____pingTimer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____timeSinceLastPacket) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____remoteDelta) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____packetPool) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____flushLock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____sendLock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____shutdownLock) == 0x60, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ___NextPeer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ___PrevPeer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____unreliableChannel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____channels) == 0x80, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____headChannel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mtu) == 0x90, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mtuIdx) == 0x94, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____finishMtu) == 0x98, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mtuCheckTimer) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mtuCheckAttempts) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mtuMutex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____fragmentId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____holdedFragments) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____deliveredFramgnets) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mergeData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mergePos) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____mergeCount) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____connectAttempts) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____connectTimer) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____connectTime) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____connectNum) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____connectionState) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____shutdownPacket) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____shutdownTimer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____pingPacket) == 0x100, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____pongPacket) == 0x108, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____connectRequestPacket) == 0x110, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ____connectAcceptPacket) == 0x118, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ___EndPoint) == 0x120, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ___NetManager) == 0x128, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ___Id) == 0x130, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ___Tag) == 0x138, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPeer, ___Statistics) == 0x140, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPeer, 0x148>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPeer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPeer*, "LiteNetLib", "NetPeer");
NEED_NO_BOX(::LiteNetLib::NetPeer_IncomingFragments);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPeer_IncomingFragments*, "LiteNetLib", "NetPeer/IncomingFragments");
