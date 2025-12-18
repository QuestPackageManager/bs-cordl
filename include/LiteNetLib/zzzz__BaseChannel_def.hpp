#pragma once
// IWYU pragma private; include "LiteNetLib/BaseChannel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseChannel)
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
// Forward declare root types
namespace LiteNetLib {
class BaseChannel;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::BaseChannel);
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.BaseChannel
class CORDL_TYPE BaseChannel : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::LiteNetLib::BaseChannel* Next;

  /// @brief Field OutgoingQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OutgoingQueue, put = __cordl_internal_set_OutgoingQueue)) ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* OutgoingQueue;

  __declspec(property(get = get_PacketsInQueue)) int32_t PacketsInQueue;

  /// @brief Field Peer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Peer, put = __cordl_internal_set_Peer)) ::LiteNetLib::NetPeer* Peer;

  /// @brief Method AddToQueue, addr 0x56e5e08, size 0x104, virtual false, abstract: false, final false
  inline void AddToQueue(::LiteNetLib::NetPacket* packet);

  static inline ::LiteNetLib::BaseChannel* New_ctor(::LiteNetLib::NetPeer* peer);

  /// @brief Method ProcessPacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ProcessPacket(::LiteNetLib::NetPacket* packet);

  /// @brief Method SendNextPackets, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendNextPackets();

  constexpr ::LiteNetLib::BaseChannel* const& __cordl_internal_get_Next() const;

  constexpr ::LiteNetLib::BaseChannel*& __cordl_internal_get_Next();

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* const& __cordl_internal_get_OutgoingQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& __cordl_internal_get_OutgoingQueue();

  constexpr ::LiteNetLib::NetPeer* const& __cordl_internal_get_Peer() const;

  constexpr ::LiteNetLib::NetPeer*& __cordl_internal_get_Peer();

  constexpr void __cordl_internal_set_Next(::LiteNetLib::BaseChannel* value);

  constexpr void __cordl_internal_set_OutgoingQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value);

  constexpr void __cordl_internal_set_Peer(::LiteNetLib::NetPeer* value);

  /// @brief Method .ctor, addr 0x56e5d30, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetPeer* peer);

  /// @brief Method get_PacketsInQueue, addr 0x56e5db8, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_PacketsInQueue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseChannel(BaseChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseChannel(BaseChannel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19795 };

  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::BaseChannel* ___Next;

  /// @brief Field Peer, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* ___Peer;

  /// @brief Field OutgoingQueue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* ___OutgoingQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::BaseChannel, ___Next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::BaseChannel, ___Peer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::BaseChannel, ___OutgoingQueue) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::BaseChannel, 0x28>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::BaseChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::BaseChannel*, "LiteNetLib", "BaseChannel");
