#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPeer)
namespace LiteNetLib {
struct ConnectRequestResult;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class BaseChannel;
}
namespace LiteNetLib {
class NetPacketPool;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace LiteNetLib {
class NetConnectAcceptPacket;
}
namespace LiteNetLib {
struct ConnectionState;
}
namespace LiteNetLib {
class NetManager;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
struct DateTime;
}
namespace LiteNetLib {
struct ShutdownResult;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class __NetPeer__IncomingFragments;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace LiteNetLib {
class NetStatistics;
}
namespace LiteNetLib {
struct DisconnectResult;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
// Forward declare root types
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class __NetPeer__IncomingFragments;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetPeer);
MARK_REF_PTR_T(::LiteNetLib::__NetPeer__IncomingFragments);
// Type: ::IncomingFragments
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14515))
// CS Name: ::NetPeer::IncomingFragments*
class CORDL_TYPE __NetPeer__IncomingFragments : public ::System::Object {
public:
  // Declarations
  /// @brief Field Fragments, offset 0x10, size 0x8
  __declspec(property(get = __get_Fragments, put = __set_Fragments))::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> Fragments;

  /// @brief Field ReceivedCount, offset 0x18, size 0x4
  __declspec(property(get = __get_ReceivedCount, put = __set_ReceivedCount)) int32_t ReceivedCount;

  /// @brief Field TotalSize, offset 0x1c, size 0x4
  __declspec(property(get = __get_TotalSize, put = __set_TotalSize)) int32_t TotalSize;

  /// @brief Field ChannelId, offset 0x20, size 0x1
  __declspec(property(get = __get_ChannelId, put = __set_ChannelId)) uint8_t ChannelId;

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& __get_Fragments();

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& __get_Fragments() const;

  constexpr void __set_Fragments(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value);

  constexpr int32_t& __get_ReceivedCount();

  constexpr int32_t const& __get_ReceivedCount() const;

  constexpr void __set_ReceivedCount(int32_t value);

  constexpr int32_t& __get_TotalSize();

  constexpr int32_t const& __get_TotalSize() const;

  constexpr void __set_TotalSize(int32_t value);

  constexpr uint8_t& __get_ChannelId();

  constexpr uint8_t const& __get_ChannelId() const;

  constexpr void __set_ChannelId(uint8_t value);

  static inline ::LiteNetLib::__NetPeer__IncomingFragments* New_ctor();

  /// @brief Method .ctor addr 0x20a2708 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NetPeer__IncomingFragments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPeer__IncomingFragments(__NetPeer__IncomingFragments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPeer__IncomingFragments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPeer__IncomingFragments(__NetPeer__IncomingFragments const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPeer__IncomingFragments();

public:
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
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NetPeer__IncomingFragments, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NetPeer__IncomingFragments, ___Fragments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NetPeer__IncomingFragments, ___ReceivedCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NetPeer__IncomingFragments, ___TotalSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NetPeer__IncomingFragments, ___ChannelId) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib
// Type: LiteNetLib::NetPeer
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14511))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14516))
// CS Name: ::LiteNetLib::NetPeer*
class CORDL_TYPE NetPeer : public ::System::Object {
public:
  // Declarations
  using IncomingFragments = ::LiteNetLib::__NetPeer__IncomingFragments;

  /// @brief Field _rtt, offset 0x10, size 0x4
  __declspec(property(get = __get__rtt, put = __set__rtt)) int32_t _rtt;

  /// @brief Field _avgRtt, offset 0x14, size 0x4
  __declspec(property(get = __get__avgRtt, put = __set__avgRtt)) int32_t _avgRtt;

  /// @brief Field _rttCount, offset 0x18, size 0x4
  __declspec(property(get = __get__rttCount, put = __set__rttCount)) int32_t _rttCount;

  /// @brief Field _resendDelay, offset 0x20, size 0x8
  __declspec(property(get = __get__resendDelay, put = __set__resendDelay)) double_t _resendDelay;

  /// @brief Field _pingSendTimer, offset 0x28, size 0x4
  __declspec(property(get = __get__pingSendTimer, put = __set__pingSendTimer)) int32_t _pingSendTimer;

  /// @brief Field _rttResetTimer, offset 0x2c, size 0x4
  __declspec(property(get = __get__rttResetTimer, put = __set__rttResetTimer)) int32_t _rttResetTimer;

  /// @brief Field _pingTimer, offset 0x30, size 0x8
  __declspec(property(get = __get__pingTimer, put = __set__pingTimer))::System::Diagnostics::Stopwatch* _pingTimer;

  /// @brief Field _timeSinceLastPacket, offset 0x38, size 0x4
  __declspec(property(get = __get__timeSinceLastPacket, put = __set__timeSinceLastPacket)) int32_t _timeSinceLastPacket;

  /// @brief Field _remoteDelta, offset 0x40, size 0x8
  __declspec(property(get = __get__remoteDelta, put = __set__remoteDelta)) int64_t _remoteDelta;

  /// @brief Field _packetPool, offset 0x48, size 0x8
  __declspec(property(get = __get__packetPool, put = __set__packetPool))::LiteNetLib::NetPacketPool* _packetPool;

  /// @brief Field _flushLock, offset 0x50, size 0x8
  __declspec(property(get = __get__flushLock, put = __set__flushLock))::System::Object* _flushLock;

  /// @brief Field _sendLock, offset 0x58, size 0x8
  __declspec(property(get = __get__sendLock, put = __set__sendLock))::System::Object* _sendLock;

  /// @brief Field _shutdownLock, offset 0x60, size 0x8
  __declspec(property(get = __get__shutdownLock, put = __set__shutdownLock))::System::Object* _shutdownLock;

  /// @brief Field NextPeer, offset 0x68, size 0x8
  __declspec(property(get = __get_NextPeer, put = __set_NextPeer))::LiteNetLib::NetPeer* NextPeer;

  /// @brief Field PrevPeer, offset 0x70, size 0x8
  __declspec(property(get = __get_PrevPeer, put = __set_PrevPeer))::LiteNetLib::NetPeer* PrevPeer;

  /// @brief Field _unreliableChannel, offset 0x78, size 0x8
  __declspec(property(get = __get__unreliableChannel, put = __set__unreliableChannel))::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* _unreliableChannel;

  /// @brief Field _channels, offset 0x80, size 0x8
  __declspec(property(get = __get__channels, put = __set__channels))::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> _channels;

  /// @brief Field _headChannel, offset 0x88, size 0x8
  __declspec(property(get = __get__headChannel, put = __set__headChannel))::LiteNetLib::BaseChannel* _headChannel;

  /// @brief Field _mtu, offset 0x90, size 0x4
  __declspec(property(get = __get__mtu, put = __set__mtu)) int32_t _mtu;

  /// @brief Field _mtuIdx, offset 0x94, size 0x4
  __declspec(property(get = __get__mtuIdx, put = __set__mtuIdx)) int32_t _mtuIdx;

  /// @brief Field _finishMtu, offset 0x98, size 0x1
  __declspec(property(get = __get__finishMtu, put = __set__finishMtu)) bool _finishMtu;

  /// @brief Field _mtuCheckTimer, offset 0x9c, size 0x4
  __declspec(property(get = __get__mtuCheckTimer, put = __set__mtuCheckTimer)) int32_t _mtuCheckTimer;

  /// @brief Field _mtuCheckAttempts, offset 0xa0, size 0x4
  __declspec(property(get = __get__mtuCheckAttempts, put = __set__mtuCheckAttempts)) int32_t _mtuCheckAttempts;

  /// @brief Field _mtuMutex, offset 0xa8, size 0x8
  __declspec(property(get = __get__mtuMutex, put = __set__mtuMutex))::System::Object* _mtuMutex;

  /// @brief Field _fragmentId, offset 0xb0, size 0x2
  __declspec(property(get = __get__fragmentId, put = __set__fragmentId)) uint16_t _fragmentId;

  /// @brief Field _holdedFragments, offset 0xb8, size 0x8
  __declspec(property(get = __get__holdedFragments, put = __set__holdedFragments))::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>* _holdedFragments;

  /// @brief Field _deliveredFramgnets, offset 0xc0, size 0x8
  __declspec(property(get = __get__deliveredFramgnets, put = __set__deliveredFramgnets))::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* _deliveredFramgnets;

  /// @brief Field _mergeData, offset 0xc8, size 0x8
  __declspec(property(get = __get__mergeData, put = __set__mergeData))::LiteNetLib::NetPacket* _mergeData;

  /// @brief Field _mergePos, offset 0xd0, size 0x4
  __declspec(property(get = __get__mergePos, put = __set__mergePos)) int32_t _mergePos;

  /// @brief Field _mergeCount, offset 0xd4, size 0x4
  __declspec(property(get = __get__mergeCount, put = __set__mergeCount)) int32_t _mergeCount;

  /// @brief Field _connectAttempts, offset 0xd8, size 0x4
  __declspec(property(get = __get__connectAttempts, put = __set__connectAttempts)) int32_t _connectAttempts;

  /// @brief Field _connectTimer, offset 0xdc, size 0x4
  __declspec(property(get = __get__connectTimer, put = __set__connectTimer)) int32_t _connectTimer;

  /// @brief Field _connectTime, offset 0xe0, size 0x8
  __declspec(property(get = __get__connectTime, put = __set__connectTime)) int64_t _connectTime;

  /// @brief Field _connectNum, offset 0xe8, size 0x1
  __declspec(property(get = __get__connectNum, put = __set__connectNum)) uint8_t _connectNum;

  /// @brief Field _connectionState, offset 0xe9, size 0x1
  __declspec(property(get = __get__connectionState, put = __set__connectionState))::LiteNetLib::ConnectionState _connectionState;

  /// @brief Field _shutdownPacket, offset 0xf0, size 0x8
  __declspec(property(get = __get__shutdownPacket, put = __set__shutdownPacket))::LiteNetLib::NetPacket* _shutdownPacket;

  /// @brief Field _shutdownTimer, offset 0xf8, size 0x4
  __declspec(property(get = __get__shutdownTimer, put = __set__shutdownTimer)) int32_t _shutdownTimer;

  /// @brief Field _pingPacket, offset 0x100, size 0x8
  __declspec(property(get = __get__pingPacket, put = __set__pingPacket))::LiteNetLib::NetPacket* _pingPacket;

  /// @brief Field _pongPacket, offset 0x108, size 0x8
  __declspec(property(get = __get__pongPacket, put = __set__pongPacket))::LiteNetLib::NetPacket* _pongPacket;

  /// @brief Field _connectRequestPacket, offset 0x110, size 0x8
  __declspec(property(get = __get__connectRequestPacket, put = __set__connectRequestPacket))::LiteNetLib::NetPacket* _connectRequestPacket;

  /// @brief Field _connectAcceptPacket, offset 0x118, size 0x8
  __declspec(property(get = __get__connectAcceptPacket, put = __set__connectAcceptPacket))::LiteNetLib::NetPacket* _connectAcceptPacket;

  /// @brief Field EndPoint, offset 0x120, size 0x8
  __declspec(property(get = __get_EndPoint, put = __set_EndPoint))::System::Net::IPEndPoint* EndPoint;

  /// @brief Field NetManager, offset 0x128, size 0x8
  __declspec(property(get = __get_NetManager, put = __set_NetManager))::LiteNetLib::NetManager* NetManager;

  /// @brief Field Id, offset 0x130, size 0x4
  __declspec(property(get = __get_Id, put = __set_Id)) int32_t Id;

  /// @brief Field Tag, offset 0x138, size 0x8
  __declspec(property(get = __get_Tag, put = __set_Tag))::System::Object* Tag;

  /// @brief Field Statistics, offset 0x140, size 0x8
  __declspec(property(get = __get_Statistics, put = __set_Statistics))::LiteNetLib::NetStatistics* Statistics;

  __declspec(property(get = get_ConnectionNum, put = set_ConnectionNum)) uint8_t ConnectionNum;

  __declspec(property(get = get_ConnectionState))::LiteNetLib::ConnectionState ConnectionState;

  __declspec(property(get = get_ConnectTime)) int64_t ConnectTime;

  __declspec(property(get = get_Ping)) int32_t Ping;

  __declspec(property(get = get_Mtu)) int32_t Mtu;

  __declspec(property(get = get_RemoteTimeDelta)) int64_t RemoteTimeDelta;

  __declspec(property(get = get_RemoteUtcTime))::System::DateTime RemoteUtcTime;

  __declspec(property(get = get_TimeSinceLastPacket)) int32_t TimeSinceLastPacket;

  __declspec(property(get = get_ResendDelay)) double_t ResendDelay;

  constexpr int32_t& __get__rtt();

  constexpr int32_t const& __get__rtt() const;

  constexpr void __set__rtt(int32_t value);

  constexpr int32_t& __get__avgRtt();

  constexpr int32_t const& __get__avgRtt() const;

  constexpr void __set__avgRtt(int32_t value);

  constexpr int32_t& __get__rttCount();

  constexpr int32_t const& __get__rttCount() const;

  constexpr void __set__rttCount(int32_t value);

  constexpr double_t& __get__resendDelay();

  constexpr double_t const& __get__resendDelay() const;

  constexpr void __set__resendDelay(double_t value);

  constexpr int32_t& __get__pingSendTimer();

  constexpr int32_t const& __get__pingSendTimer() const;

  constexpr void __set__pingSendTimer(int32_t value);

  constexpr int32_t& __get__rttResetTimer();

  constexpr int32_t const& __get__rttResetTimer() const;

  constexpr void __set__rttResetTimer(int32_t value);

  constexpr ::System::Diagnostics::Stopwatch*& __get__pingTimer();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __get__pingTimer() const;

  constexpr void __set__pingTimer(::System::Diagnostics::Stopwatch* value);

  constexpr int32_t& __get__timeSinceLastPacket();

  constexpr int32_t const& __get__timeSinceLastPacket() const;

  constexpr void __set__timeSinceLastPacket(int32_t value);

  constexpr int64_t& __get__remoteDelta();

  constexpr int64_t const& __get__remoteDelta() const;

  constexpr void __set__remoteDelta(int64_t value);

  constexpr ::LiteNetLib::NetPacketPool*& __get__packetPool();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketPool*> const& __get__packetPool() const;

  constexpr void __set__packetPool(::LiteNetLib::NetPacketPool* value);

  constexpr ::System::Object*& __get__flushLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__flushLock() const;

  constexpr void __set__flushLock(::System::Object* value);

  constexpr ::System::Object*& __get__sendLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__sendLock() const;

  constexpr void __set__sendLock(::System::Object* value);

  constexpr ::System::Object*& __get__shutdownLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__shutdownLock() const;

  constexpr void __set__shutdownLock(::System::Object* value);

  constexpr ::LiteNetLib::NetPeer*& __get_NextPeer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __get_NextPeer() const;

  constexpr void __set_NextPeer(::LiteNetLib::NetPeer* value);

  constexpr ::LiteNetLib::NetPeer*& __get_PrevPeer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __get_PrevPeer() const;

  constexpr void __set_PrevPeer(::LiteNetLib::NetPeer* value);

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& __get__unreliableChannel();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*> const& __get__unreliableChannel() const;

  constexpr void __set__unreliableChannel(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value);

  constexpr ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*>& __get__channels();

  constexpr ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> const& __get__channels() const;

  constexpr void __set__channels(::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> value);

  constexpr ::LiteNetLib::BaseChannel*& __get__headChannel();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::BaseChannel*> const& __get__headChannel() const;

  constexpr void __set__headChannel(::LiteNetLib::BaseChannel* value);

  constexpr int32_t& __get__mtu();

  constexpr int32_t const& __get__mtu() const;

  constexpr void __set__mtu(int32_t value);

  constexpr int32_t& __get__mtuIdx();

  constexpr int32_t const& __get__mtuIdx() const;

  constexpr void __set__mtuIdx(int32_t value);

  constexpr bool& __get__finishMtu();

  constexpr bool const& __get__finishMtu() const;

  constexpr void __set__finishMtu(bool value);

  constexpr int32_t& __get__mtuCheckTimer();

  constexpr int32_t const& __get__mtuCheckTimer() const;

  constexpr void __set__mtuCheckTimer(int32_t value);

  constexpr int32_t& __get__mtuCheckAttempts();

  constexpr int32_t const& __get__mtuCheckAttempts() const;

  constexpr void __set__mtuCheckAttempts(int32_t value);

  constexpr ::System::Object*& __get__mtuMutex();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__mtuMutex() const;

  constexpr void __set__mtuMutex(::System::Object* value);

  constexpr uint16_t& __get__fragmentId();

  constexpr uint16_t const& __get__fragmentId() const;

  constexpr void __set__fragmentId(uint16_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>*& __get__holdedFragments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>*> const& __get__holdedFragments() const;

  constexpr void __set__holdedFragments(::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>*& __get__deliveredFramgnets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>*> const& __get__deliveredFramgnets() const;

  constexpr void __set__deliveredFramgnets(::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* value);

  constexpr ::LiteNetLib::NetPacket*& __get__mergeData();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__mergeData() const;

  constexpr void __set__mergeData(::LiteNetLib::NetPacket* value);

  constexpr int32_t& __get__mergePos();

  constexpr int32_t const& __get__mergePos() const;

  constexpr void __set__mergePos(int32_t value);

  constexpr int32_t& __get__mergeCount();

  constexpr int32_t const& __get__mergeCount() const;

  constexpr void __set__mergeCount(int32_t value);

  constexpr int32_t& __get__connectAttempts();

  constexpr int32_t const& __get__connectAttempts() const;

  constexpr void __set__connectAttempts(int32_t value);

  constexpr int32_t& __get__connectTimer();

  constexpr int32_t const& __get__connectTimer() const;

  constexpr void __set__connectTimer(int32_t value);

  constexpr int64_t& __get__connectTime();

  constexpr int64_t const& __get__connectTime() const;

  constexpr void __set__connectTime(int64_t value);

  constexpr uint8_t& __get__connectNum();

  constexpr uint8_t const& __get__connectNum() const;

  constexpr void __set__connectNum(uint8_t value);

  constexpr ::LiteNetLib::ConnectionState& __get__connectionState();

  constexpr ::LiteNetLib::ConnectionState const& __get__connectionState() const;

  constexpr void __set__connectionState(::LiteNetLib::ConnectionState value);

  constexpr ::LiteNetLib::NetPacket*& __get__shutdownPacket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__shutdownPacket() const;

  constexpr void __set__shutdownPacket(::LiteNetLib::NetPacket* value);

  constexpr int32_t& __get__shutdownTimer();

  constexpr int32_t const& __get__shutdownTimer() const;

  constexpr void __set__shutdownTimer(int32_t value);

  constexpr ::LiteNetLib::NetPacket*& __get__pingPacket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__pingPacket() const;

  constexpr void __set__pingPacket(::LiteNetLib::NetPacket* value);

  constexpr ::LiteNetLib::NetPacket*& __get__pongPacket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__pongPacket() const;

  constexpr void __set__pongPacket(::LiteNetLib::NetPacket* value);

  constexpr ::LiteNetLib::NetPacket*& __get__connectRequestPacket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__connectRequestPacket() const;

  constexpr void __set__connectRequestPacket(::LiteNetLib::NetPacket* value);

  constexpr ::LiteNetLib::NetPacket*& __get__connectAcceptPacket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__connectAcceptPacket() const;

  constexpr void __set__connectAcceptPacket(::LiteNetLib::NetPacket* value);

  constexpr ::System::Net::IPEndPoint*& __get_EndPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __get_EndPoint() const;

  constexpr void __set_EndPoint(::System::Net::IPEndPoint* value);

  constexpr ::LiteNetLib::NetManager*& __get_NetManager();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& __get_NetManager() const;

  constexpr void __set_NetManager(::LiteNetLib::NetManager* value);

  constexpr int32_t& __get_Id();

  constexpr int32_t const& __get_Id() const;

  constexpr void __set_Id(int32_t value);

  constexpr ::System::Object*& __get_Tag();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_Tag() const;

  constexpr void __set_Tag(::System::Object* value);

  constexpr ::LiteNetLib::NetStatistics*& __get_Statistics();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetStatistics*> const& __get_Statistics() const;

  constexpr void __set_Statistics(::LiteNetLib::NetStatistics* value);

  /// @brief Method get_ConnectionNum addr 0x20a1490 size 0x8 virtual false final false
  inline uint8_t get_ConnectionNum();

  /// @brief Method set_ConnectionNum addr 0x20a1498 size 0x4c virtual false final false
  inline void set_ConnectionNum(uint8_t value);

  /// @brief Method get_ConnectionState addr 0x20a14e4 size 0x8 virtual false final false
  inline ::LiteNetLib::ConnectionState get_ConnectionState();

  /// @brief Method get_ConnectTime addr 0x20a14ec size 0x8 virtual false final false
  inline int64_t get_ConnectTime();

  /// @brief Method get_Ping addr 0x20a14f4 size 0x14 virtual false final false
  inline int32_t get_Ping();

  /// @brief Method get_Mtu addr 0x20a1508 size 0x8 virtual false final false
  inline int32_t get_Mtu();

  /// @brief Method get_RemoteTimeDelta addr 0x20a1510 size 0x8 virtual false final false
  inline int64_t get_RemoteTimeDelta();

  /// @brief Method get_RemoteUtcTime addr 0x20a1518 size 0x90 virtual false final false
  inline ::System::DateTime get_RemoteUtcTime();

  /// @brief Method get_TimeSinceLastPacket addr 0x20a15a8 size 0x8 virtual false final false
  inline int32_t get_TimeSinceLastPacket();

  /// @brief Method get_ResendDelay addr 0x20a15b0 size 0x8 virtual false final false
  inline double_t get_ResendDelay();

  static inline ::LiteNetLib::NetPeer* New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id);

  /// @brief Method .ctor addr 0x209d474 size 0x320 virtual false final false
  inline void _ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id);

  /// @brief Method SetMtu addr 0x20a15b8 size 0xac virtual false final false
  inline void SetMtu(int32_t mtuIdx);

  /// @brief Method GetPacketsCountInReliableQueue addr 0x20a1664 size 0xb0 virtual false final false
  inline int32_t GetPacketsCountInReliableQueue(uint8_t channelNumber, bool ordered);

  /// @brief Method CreateChannel addr 0x20a1714 size 0x174 virtual false final false
  inline ::LiteNetLib::BaseChannel* CreateChannel(uint8_t idx);

  static inline ::LiteNetLib::NetPeer* New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum,
                                                ::LiteNetLib::Utils::NetDataWriter* connectData);

  /// @brief Method .ctor addr 0x20a0484 size 0x110 virtual false final false
  inline void _ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum, ::LiteNetLib::Utils::NetDataWriter* connectData);

  static inline ::LiteNetLib::NetPeer* New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum);

  /// @brief Method .ctor addr 0x209d7b0 size 0x68 virtual false final false
  inline void _ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum);

  /// @brief Method Reject addr 0x209d794 size 0x1c virtual false final false
  inline void Reject(int64_t connectionId, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length);

  /// @brief Method ProcessConnectAccept addr 0x209e224 size 0x64 virtual false final false
  inline bool ProcessConnectAccept(::LiteNetLib::NetConnectAcceptPacket* packet);

  /// @brief Method GetMaxSinglePacketSize addr 0x20a1ab8 size 0x74 virtual false final false
  inline int32_t GetMaxSinglePacketSize(::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendWithDeliveryEvent addr 0x20a1b2c size 0x84 virtual false final false
  inline void SendWithDeliveryEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData);

  /// @brief Method SendWithDeliveryEvent addr 0x20a2068 size 0x64 virtual false final false
  inline void SendWithDeliveryEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod,
                                    ::System::Object* userData);

  /// @brief Method SendWithDeliveryEvent addr 0x20a20cc size 0x8c virtual false final false
  inline void SendWithDeliveryEvent(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData);

  /// @brief Method Send addr 0x20a2158 size 0x28 virtual false final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send addr 0x20a2180 size 0x30 virtual false final false
  inline void Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send addr 0x20a21b0 size 0x10 virtual false final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method Send addr 0x20a21c0 size 0x28 virtual false final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send addr 0x20a21e8 size 0x30 virtual false final false
  inline void Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method Send addr 0x209ec40 size 0x8 virtual false final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method SendInternal addr 0x20a1bb0 size 0x4b8 virtual false final false
  inline void SendInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData);

  /// @brief Method Disconnect addr 0x20a2218 size 0x24 virtual false final false
  inline void Disconnect(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Disconnect addr 0x20a223c size 0x24 virtual false final false
  inline void Disconnect(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Disconnect addr 0x20a2260 size 0x48 virtual false final false
  inline void Disconnect(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count);

  /// @brief Method Disconnect addr 0x20a22a8 size 0x44 virtual false final false
  inline void Disconnect();

  /// @brief Method ProcessDisconnect addr 0x209e054 size 0xc8 virtual false final false
  inline ::LiteNetLib::DisconnectResult ProcessDisconnect(::LiteNetLib::NetPacket* packet);

  /// @brief Method Shutdown addr 0x209bd6c size 0x2bc virtual false final false
  inline ::LiteNetLib::ShutdownResult Shutdown(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, bool force);

  /// @brief Method UpdateRoundTripTime addr 0x20a22ec size 0x3c virtual false final false
  inline void UpdateRoundTripTime(int32_t roundTripTime);

  /// @brief Method AddReliablePacket addr 0x20a2328 size 0x3e0 virtual false final false
  inline void AddReliablePacket(::LiteNetLib::DeliveryMethod method, ::LiteNetLib::NetPacket* p);

  /// @brief Method ProcessMtuPacket addr 0x20a2710 size 0x3e8 virtual false final false
  inline void ProcessMtuPacket(::LiteNetLib::NetPacket* packet);

  /// @brief Method UpdateMtuLogic addr 0x20a2af8 size 0x244 virtual false final false
  inline void UpdateMtuLogic(int32_t deltaTime);

  /// @brief Method ProcessConnectRequest addr 0x209db00 size 0x12c virtual false final false
  inline ::LiteNetLib::ConnectRequestResult ProcessConnectRequest(::LiteNetLib::NetConnectRequestPacket* connRequest);

  /// @brief Method ProcessPacket addr 0x209e288 size 0x574 virtual false final false
  inline void ProcessPacket(::LiteNetLib::NetPacket* packet);

  /// @brief Method SendMerged addr 0x20a2d68 size 0xa0 virtual false final false
  inline void SendMerged();

  /// @brief Method SendUserData addr 0x20a2e08 size 0x11c virtual false final false
  inline void SendUserData(::LiteNetLib::NetPacket* packet);

  /// @brief Method Flush addr 0x209fcec size 0x250 virtual false final false
  inline void Flush();

  /// @brief Method Update addr 0x209c79c size 0x284 virtual false final false
  inline void Update(int32_t deltaTime);

  /// @brief Method RecycleAndDeliver addr 0x20a2f24 size 0x160 virtual false final false
  inline void RecycleAndDeliver(::LiteNetLib::NetPacket* packet);

  // Ctor Parameters [CppParam { name: "", ty: "NetPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPeer(NetPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPeer(NetPeer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPeer();

public:
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
  ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>* ____holdedFragments;

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

  /// @brief Field MtuCheckDelay offset 0xffffffff size 0x4
  static constexpr int32_t MtuCheckDelay{ static_cast<int32_t>(0x3e8) };

  /// @brief Field MaxMtuCheckAttempts offset 0xffffffff size 0x4
  static constexpr int32_t MaxMtuCheckAttempts{ static_cast<int32_t>(0x4) };

  /// @brief Field ShutdownDelay offset 0xffffffff size 0x4
  static constexpr int32_t ShutdownDelay{ static_cast<int32_t>(0x12c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPeer, 0x148>, "Size mismatch!");

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

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPeer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPeer*, "LiteNetLib", "NetPeer");
NEED_NO_BOX(::LiteNetLib::__NetPeer__IncomingFragments);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NetPeer__IncomingFragments*, "LiteNetLib", "NetPeer/IncomingFragments");
