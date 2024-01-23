#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableChannel)
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct __ReliableChannel__PendingPacket;
}
// Forward declare root types
namespace LiteNetLib {
class ReliableChannel;
}
namespace LiteNetLib {
struct __ReliableChannel__PendingPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::ReliableChannel);
MARK_VAL_T(::LiteNetLib::__ReliableChannel__PendingPacket);
// Type: ::PendingPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14184))
// CS Name: ::ReliableChannel::PendingPacket
struct CORDL_TYPE __ReliableChannel__PendingPacket {
public:
  // Declarations
  /// @brief Method ToString, addr 0x2207b80, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Init, addr 0x2207600, size 0xc, virtual false, abstract: false, final false
  inline void Init(::LiteNetLib::NetPacket* packet);

  /// @brief Method TrySend, addr 0x220760c, size 0x78, virtual false, abstract: false, final false
  inline void TrySend(int64_t currentTime, ::LiteNetLib::NetPeer* peer);

  /// @brief Method Clear, addr 0x2207158, size 0x3c, virtual false, abstract: false, final false
  inline bool Clear(::LiteNetLib::NetPeer* peer);

  // Ctor Parameters [CppParam { name: "_packet", ty: "::LiteNetLib::NetPacket*", modifiers: "", def_value: None }, CppParam { name: "_timeStamp", ty: "int64_t", modifiers: "", def_value: None },
  // CppParam { name: "_isSent", ty: "bool", modifiers: "", def_value: None }]
  constexpr __ReliableChannel__PendingPacket(::LiteNetLib::NetPacket* _packet, int64_t _timeStamp, bool _isSent) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReliableChannel__PendingPacket();

  /// @brief Field _packet, offset: 0x0, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* _packet;

  /// @brief Field _timeStamp, offset: 0x8, size: 0x8, def value: None
  int64_t _timeStamp;

  /// @brief Field _isSent, offset: 0x10, size: 0x1, def value: None
  bool _isSent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__ReliableChannel__PendingPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__ReliableChannel__PendingPacket, _packet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__ReliableChannel__PendingPacket, _timeStamp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__ReliableChannel__PendingPacket, _isSent) == 0x10, "Offset mismatch!");

} // namespace LiteNetLib
// Type: LiteNetLib::ReliableChannel
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14127)), TypeDefinitionIndex(TypeDefinitionIndex(14155))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14185))
// CS Name: ::LiteNetLib::ReliableChannel*
class CORDL_TYPE ReliableChannel : public ::LiteNetLib::BaseChannel {
public:
  // Declarations
  using PendingPacket = ::LiteNetLib::__ReliableChannel__PendingPacket;

  /// @brief Field _outgoingAcks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__outgoingAcks, put = __cordl_internal_set__outgoingAcks))::LiteNetLib::NetPacket* _outgoingAcks;

  /// @brief Field _pendingPackets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingPackets,
                      put = __cordl_internal_set__pendingPackets))::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> _pendingPackets;

  /// @brief Field _receivedPackets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__receivedPackets, put = __cordl_internal_set__receivedPackets))::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> _receivedPackets;

  /// @brief Field _earlyReceived, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__earlyReceived, put = __cordl_internal_set__earlyReceived))::ArrayW<bool, ::Array<bool>*> _earlyReceived;

  /// @brief Field _localSeqence, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__localSeqence, put = __cordl_internal_set__localSeqence)) int32_t _localSeqence;

  /// @brief Field _remoteSequence, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__remoteSequence, put = __cordl_internal_set__remoteSequence)) int32_t _remoteSequence;

  /// @brief Field _localWindowStart, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__localWindowStart, put = __cordl_internal_set__localWindowStart)) int32_t _localWindowStart;

  /// @brief Field _remoteWindowStart, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__remoteWindowStart, put = __cordl_internal_set__remoteWindowStart)) int32_t _remoteWindowStart;

  /// @brief Field _mustSendAcks, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__mustSendAcks, put = __cordl_internal_set__mustSendAcks)) bool _mustSendAcks;

  /// @brief Field _deliveryMethod, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__deliveryMethod, put = __cordl_internal_set__deliveryMethod))::LiteNetLib::DeliveryMethod _deliveryMethod;

  /// @brief Field _ordered, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get__ordered, put = __cordl_internal_set__ordered)) bool _ordered;

  /// @brief Field _windowSize, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__windowSize, put = __cordl_internal_set__windowSize)) int32_t _windowSize;

  /// @brief Field _id, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) uint8_t _id;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__outgoingAcks();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __cordl_internal_get__outgoingAcks() const;

  constexpr void __cordl_internal_set__outgoingAcks(::LiteNetLib::NetPacket* value);

  constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>& __cordl_internal_get__pendingPackets();

  constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> const& __cordl_internal_get__pendingPackets() const;

  constexpr void __cordl_internal_set__pendingPackets(::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> value);

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& __cordl_internal_get__receivedPackets();

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& __cordl_internal_get__receivedPackets() const;

  constexpr void __cordl_internal_set__receivedPackets(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__earlyReceived();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__earlyReceived() const;

  constexpr void __cordl_internal_set__earlyReceived(::ArrayW<bool, ::Array<bool>*> value);

  constexpr int32_t& __cordl_internal_get__localSeqence();

  constexpr int32_t const& __cordl_internal_get__localSeqence() const;

  constexpr void __cordl_internal_set__localSeqence(int32_t value);

  constexpr int32_t& __cordl_internal_get__remoteSequence();

  constexpr int32_t const& __cordl_internal_get__remoteSequence() const;

  constexpr void __cordl_internal_set__remoteSequence(int32_t value);

  constexpr int32_t& __cordl_internal_get__localWindowStart();

  constexpr int32_t const& __cordl_internal_get__localWindowStart() const;

  constexpr void __cordl_internal_set__localWindowStart(int32_t value);

  constexpr int32_t& __cordl_internal_get__remoteWindowStart();

  constexpr int32_t const& __cordl_internal_get__remoteWindowStart() const;

  constexpr void __cordl_internal_set__remoteWindowStart(int32_t value);

  constexpr bool& __cordl_internal_get__mustSendAcks();

  constexpr bool const& __cordl_internal_get__mustSendAcks() const;

  constexpr void __cordl_internal_set__mustSendAcks(bool value);

  constexpr ::LiteNetLib::DeliveryMethod& __cordl_internal_get__deliveryMethod();

  constexpr ::LiteNetLib::DeliveryMethod const& __cordl_internal_get__deliveryMethod() const;

  constexpr void __cordl_internal_set__deliveryMethod(::LiteNetLib::DeliveryMethod value);

  constexpr bool& __cordl_internal_get__ordered();

  constexpr bool const& __cordl_internal_get__ordered() const;

  constexpr void __cordl_internal_set__ordered(bool value);

  constexpr int32_t& __cordl_internal_get__windowSize();

  constexpr int32_t const& __cordl_internal_get__windowSize() const;

  constexpr void __cordl_internal_set__windowSize(int32_t value);

  constexpr uint8_t& __cordl_internal_get__id();

  constexpr uint8_t const& __cordl_internal_get__id() const;

  constexpr void __cordl_internal_set__id(uint8_t value);

  static inline ::LiteNetLib::ReliableChannel* New_ctor(::LiteNetLib::NetPeer* peer, bool ordered, uint8_t id);

  /// @brief Method .ctor, addr 0x22036dc, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetPeer* peer, bool ordered, uint8_t id);

  /// @brief Method ProcessAck, addr 0x2206e08, size 0x350, virtual false, abstract: false, final false
  inline void ProcessAck(::LiteNetLib::NetPacket* packet);

  /// @brief Method SendNextPackets, addr 0x2207194, size 0x46c, virtual true, abstract: false, final false
  inline void SendNextPackets();

  /// @brief Method ProcessPacket, addr 0x2207684, size 0x4fc, virtual true, abstract: false, final false
  inline bool ProcessPacket(::LiteNetLib::NetPacket* packet);

  // Ctor Parameters [CppParam { name: "", ty: "ReliableChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReliableChannel(ReliableChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReliableChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReliableChannel(ReliableChannel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReliableChannel();

public:
  /// @brief Field _outgoingAcks, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____outgoingAcks;

  /// @brief Field _pendingPackets, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> ____pendingPackets;

  /// @brief Field _receivedPackets, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> ____receivedPackets;

  /// @brief Field _earlyReceived, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____earlyReceived;

  /// @brief Field _localSeqence, offset: 0x48, size: 0x4, def value: None
  int32_t ____localSeqence;

  /// @brief Field _remoteSequence, offset: 0x4c, size: 0x4, def value: None
  int32_t ____remoteSequence;

  /// @brief Field _localWindowStart, offset: 0x50, size: 0x4, def value: None
  int32_t ____localWindowStart;

  /// @brief Field _remoteWindowStart, offset: 0x54, size: 0x4, def value: None
  int32_t ____remoteWindowStart;

  /// @brief Field _mustSendAcks, offset: 0x58, size: 0x1, def value: None
  bool ____mustSendAcks;

  /// @brief Field _deliveryMethod, offset: 0x59, size: 0x1, def value: None
  ::LiteNetLib::DeliveryMethod ____deliveryMethod;

  /// @brief Field _ordered, offset: 0x5a, size: 0x1, def value: None
  bool ____ordered;

  /// @brief Field _windowSize, offset: 0x5c, size: 0x4, def value: None
  int32_t ____windowSize;

  /// @brief Field _id, offset: 0x60, size: 0x1, def value: None
  uint8_t ____id;

  /// @brief Field BitsInByte offset 0xffffffff size 0x4
  static constexpr int32_t BitsInByte{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::ReliableChannel, 0x68>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____outgoingAcks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____pendingPackets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____receivedPackets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____earlyReceived) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____localSeqence) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____remoteSequence) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____localWindowStart) == 0x50, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____remoteWindowStart) == 0x54, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____mustSendAcks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____deliveryMethod) == 0x59, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____ordered) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____windowSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ReliableChannel, ____id) == 0x60, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::ReliableChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ReliableChannel*, "LiteNetLib", "ReliableChannel");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__ReliableChannel__PendingPacket, "LiteNetLib", "ReliableChannel/PendingPacket");
