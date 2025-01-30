#pragma once
// IWYU pragma private; include "LiteNetLib/SequencedChannel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SequencedChannel)
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
// Forward declare root types
namespace LiteNetLib {
class SequencedChannel;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::SequencedChannel);
// Dependencies LiteNetLib.BaseChannel
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.SequencedChannel
class CORDL_TYPE SequencedChannel : public ::LiteNetLib::BaseChannel {
public:
  // Declarations
  /// @brief Field _ackPacket, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ackPacket, put = __cordl_internal_set__ackPacket)) ::LiteNetLib::NetPacket* _ackPacket;

  /// @brief Field _id, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) uint8_t _id;

  /// @brief Field _lastPacket, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPacket, put = __cordl_internal_set__lastPacket)) ::LiteNetLib::NetPacket* _lastPacket;

  /// @brief Field _lastPacketSendTime, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPacketSendTime, put = __cordl_internal_set__lastPacketSendTime)) int64_t _lastPacketSendTime;

  /// @brief Field _localSequence, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__localSequence, put = __cordl_internal_set__localSequence)) int32_t _localSequence;

  /// @brief Field _mustSendAck, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__mustSendAck, put = __cordl_internal_set__mustSendAck)) bool _mustSendAck;

  /// @brief Field _reliable, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get__reliable, put = __cordl_internal_set__reliable)) bool _reliable;

  /// @brief Field _remoteSequence, offset 0x2c, size 0x2
  __declspec(property(get = __cordl_internal_get__remoteSequence, put = __cordl_internal_set__remoteSequence)) uint16_t _remoteSequence;

  static inline ::LiteNetLib::SequencedChannel* New_ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id);

  /// @brief Method ProcessPacket, addr 0x3abde58, size 0x208, virtual true, abstract: false, final false
  inline bool ProcessPacket(::LiteNetLib::NetPacket* packet);

  /// @brief Method SendNextPackets, addr 0x3abdb4c, size 0x30c, virtual true, abstract: false, final false
  inline void SendNextPackets();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__ackPacket() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__ackPacket();

  constexpr uint8_t const& __cordl_internal_get__id() const;

  constexpr uint8_t& __cordl_internal_get__id();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__lastPacket() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__lastPacket();

  constexpr int64_t const& __cordl_internal_get__lastPacketSendTime() const;

  constexpr int64_t& __cordl_internal_get__lastPacketSendTime();

  constexpr int32_t const& __cordl_internal_get__localSequence() const;

  constexpr int32_t& __cordl_internal_get__localSequence();

  constexpr bool const& __cordl_internal_get__mustSendAck() const;

  constexpr bool& __cordl_internal_get__mustSendAck();

  constexpr bool const& __cordl_internal_get__reliable() const;

  constexpr bool& __cordl_internal_get__reliable();

  constexpr uint16_t const& __cordl_internal_get__remoteSequence() const;

  constexpr uint16_t& __cordl_internal_get__remoteSequence();

  constexpr void __cordl_internal_set__ackPacket(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__id(uint8_t value);

  constexpr void __cordl_internal_set__lastPacket(::LiteNetLib::NetPacket* value);

  constexpr void __cordl_internal_set__lastPacketSendTime(int64_t value);

  constexpr void __cordl_internal_set__localSequence(int32_t value);

  constexpr void __cordl_internal_set__mustSendAck(bool value);

  constexpr void __cordl_internal_set__reliable(bool value);

  constexpr void __cordl_internal_set__remoteSequence(uint16_t value);

  /// @brief Method .ctor, addr 0x3ab9850, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SequencedChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SequencedChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SequencedChannel(SequencedChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SequencedChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SequencedChannel(SequencedChannel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16564 };

  /// @brief Field _localSequence, offset: 0x28, size: 0x4, def value: None
  int32_t ____localSequence;

  /// @brief Field _remoteSequence, offset: 0x2c, size: 0x2, def value: None
  uint16_t ____remoteSequence;

  /// @brief Field _reliable, offset: 0x2e, size: 0x1, def value: None
  bool ____reliable;

  /// @brief Field _lastPacket, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____lastPacket;

  /// @brief Field _ackPacket, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____ackPacket;

  /// @brief Field _mustSendAck, offset: 0x40, size: 0x1, def value: None
  bool ____mustSendAck;

  /// @brief Field _id, offset: 0x41, size: 0x1, def value: None
  uint8_t ____id;

  /// @brief Field _lastPacketSendTime, offset: 0x48, size: 0x8, def value: None
  int64_t ____lastPacketSendTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::SequencedChannel, ____localSequence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::SequencedChannel, ____remoteSequence) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::SequencedChannel, ____reliable) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::SequencedChannel, ____lastPacket) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::SequencedChannel, ____ackPacket) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::SequencedChannel, ____mustSendAck) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::SequencedChannel, ____id) == 0x41, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::SequencedChannel, ____lastPacketSendTime) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::SequencedChannel, 0x50>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::SequencedChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::SequencedChannel*, "LiteNetLib", "SequencedChannel");
