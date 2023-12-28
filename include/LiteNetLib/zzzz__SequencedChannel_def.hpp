#pragma once
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
// Type: LiteNetLib::SequencedChannel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14127))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14186))
// CS Name: ::LiteNetLib::SequencedChannel*
class CORDL_TYPE SequencedChannel : public ::LiteNetLib::BaseChannel {
public:
  // Declarations
  /// @brief Field _localSequence, offset 0x28, size 0x4
  __declspec(property(get = __get__localSequence, put = __set__localSequence)) int32_t _localSequence;

  /// @brief Field _remoteSequence, offset 0x2c, size 0x2
  __declspec(property(get = __get__remoteSequence, put = __set__remoteSequence)) uint16_t _remoteSequence;

  /// @brief Field _reliable, offset 0x2e, size 0x1
  __declspec(property(get = __get__reliable, put = __set__reliable)) bool _reliable;

  /// @brief Field _lastPacket, offset 0x30, size 0x8
  __declspec(property(get = __get__lastPacket, put = __set__lastPacket))::LiteNetLib::NetPacket* _lastPacket;

  /// @brief Field _ackPacket, offset 0x38, size 0x8
  __declspec(property(get = __get__ackPacket, put = __set__ackPacket))::LiteNetLib::NetPacket* _ackPacket;

  /// @brief Field _mustSendAck, offset 0x40, size 0x1
  __declspec(property(get = __get__mustSendAck, put = __set__mustSendAck)) bool _mustSendAck;

  /// @brief Field _id, offset 0x41, size 0x1
  __declspec(property(get = __get__id, put = __set__id)) uint8_t _id;

  /// @brief Field _lastPacketSendTime, offset 0x48, size 0x8
  __declspec(property(get = __get__lastPacketSendTime, put = __set__lastPacketSendTime)) int64_t _lastPacketSendTime;

  constexpr int32_t& __get__localSequence();

  constexpr int32_t const& __get__localSequence() const;

  constexpr void __set__localSequence(int32_t value);

  constexpr uint16_t& __get__remoteSequence();

  constexpr uint16_t const& __get__remoteSequence() const;

  constexpr void __set__remoteSequence(uint16_t value);

  constexpr bool& __get__reliable();

  constexpr bool const& __get__reliable() const;

  constexpr void __set__reliable(bool value);

  constexpr ::LiteNetLib::NetPacket*& __get__lastPacket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__lastPacket() const;

  constexpr void __set__lastPacket(::LiteNetLib::NetPacket* value);

  constexpr ::LiteNetLib::NetPacket*& __get__ackPacket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__ackPacket() const;

  constexpr void __set__ackPacket(::LiteNetLib::NetPacket* value);

  constexpr bool& __get__mustSendAck();

  constexpr bool const& __get__mustSendAck() const;

  constexpr void __set__mustSendAck(bool value);

  constexpr uint8_t& __get__id();

  constexpr uint8_t const& __get__id() const;

  constexpr void __set__id(uint8_t value);

  constexpr int64_t& __get__lastPacketSendTime();

  constexpr int64_t const& __get__lastPacketSendTime() const;

  constexpr void __set__lastPacketSendTime(int64_t value);

  static inline ::LiteNetLib::SequencedChannel* New_ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id);

  /// @brief Method .ctor addr 0x2203864 size 0xa8 virtual false final false
  inline void _ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id);

  /// @brief Method SendNextPackets addr 0x2207be8 size 0x308 virtual true final false
  inline void SendNextPackets();

  /// @brief Method ProcessPacket addr 0x2207ef0 size 0x1d0 virtual true final false
  inline bool ProcessPacket(::LiteNetLib::NetPacket* packet);

  // Ctor Parameters [CppParam { name: "", ty: "SequencedChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SequencedChannel(SequencedChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SequencedChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SequencedChannel(SequencedChannel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SequencedChannel();

public:
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
static_assert(::cordl_internals::size_check_v<::LiteNetLib::SequencedChannel, 0x50>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::SequencedChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::SequencedChannel*, "LiteNetLib", "SequencedChannel");
