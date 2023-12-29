#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseChannel)
namespace LiteNetLib {
class NetPacket;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace LiteNetLib {
class NetPeer;
}
// Forward declare root types
namespace LiteNetLib {
class BaseChannel;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::BaseChannel);
// Type: LiteNetLib::BaseChannel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14465))
// CS Name: ::LiteNetLib::BaseChannel*
class CORDL_TYPE BaseChannel : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __get_Next, put = __set_Next))::LiteNetLib::BaseChannel* Next;

  /// @brief Field Peer, offset 0x18, size 0x8
  __declspec(property(get = __get_Peer, put = __set_Peer))::LiteNetLib::NetPeer* Peer;

  /// @brief Field OutgoingQueue, offset 0x20, size 0x8
  __declspec(property(get = __get_OutgoingQueue, put = __set_OutgoingQueue))::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* OutgoingQueue;

  __declspec(property(get = get_PacketsInQueue)) int32_t PacketsInQueue;

  constexpr ::LiteNetLib::BaseChannel*& __get_Next();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::BaseChannel*> const& __get_Next() const;

  constexpr void __set_Next(::LiteNetLib::BaseChannel* value);

  constexpr ::LiteNetLib::NetPeer*& __get_Peer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __get_Peer() const;

  constexpr void __set_Peer(::LiteNetLib::NetPeer* value);

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& __get_OutgoingQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*> const& __get_OutgoingQueue() const;

  constexpr void __set_OutgoingQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value);

  static inline ::LiteNetLib::BaseChannel* New_ctor(::LiteNetLib::NetPeer* peer);

  /// @brief Method .ctor addr 0x20961a4 size 0x94 virtual false final false
  inline void _ctor(::LiteNetLib::NetPeer* peer);

  /// @brief Method get_PacketsInQueue addr 0x2096238 size 0x48 virtual false final false
  inline int32_t get_PacketsInQueue();

  /// @brief Method AddToQueue addr 0x2096280 size 0xfc virtual false final false
  inline void AddToQueue(::LiteNetLib::NetPacket* packet);

  /// @brief Method SendNextPackets addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendNextPackets();

  /// @brief Method ProcessPacket addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool ProcessPacket(::LiteNetLib::NetPacket* packet);

  // Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseChannel(BaseChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseChannel(BaseChannel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseChannel();

public:
  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::BaseChannel* ___Next;

  /// @brief Field Peer, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* ___Peer;

  /// @brief Field OutgoingQueue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* ___OutgoingQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::BaseChannel, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::BaseChannel, ___Next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::BaseChannel, ___Peer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::BaseChannel, ___OutgoingQueue) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::BaseChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::BaseChannel*, "LiteNetLib", "BaseChannel");
