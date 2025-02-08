#pragma once
// IWYU pragma private; include "LiteNetLib/SimpleChannel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
CORDL_MODULE_EXPORT(SimpleChannel)
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
// Forward declare root types
namespace LiteNetLib {
class SimpleChannel;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::SimpleChannel);
// Dependencies LiteNetLib.BaseChannel
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.SimpleChannel
class CORDL_TYPE SimpleChannel : public ::LiteNetLib::BaseChannel {
public:
  // Declarations
  static inline ::LiteNetLib::SimpleChannel* New_ctor(::LiteNetLib::NetPeer* peer);

  /// @brief Method ProcessPacket, addr 0x3ac0a38, size 0x8, virtual true, abstract: false, final false
  inline bool ProcessPacket(::LiteNetLib::NetPacket* packet);

  /// @brief Method SendNextPackets, addr 0x3ac08c8, size 0x170, virtual true, abstract: false, final false
  inline void SendNextPackets();

  /// @brief Method .ctor, addr 0x3ac08c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetPeer* peer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleChannel(SimpleChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleChannel(SimpleChannel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16566 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::SimpleChannel, 0x28>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::SimpleChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::SimpleChannel*, "LiteNetLib", "SimpleChannel");
