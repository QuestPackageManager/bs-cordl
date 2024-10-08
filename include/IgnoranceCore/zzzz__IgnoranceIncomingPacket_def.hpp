#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceIncomingPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__Packet_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceIncomingPacket)
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceIncomingPacket);
// Type: IgnoranceCore::IgnoranceIncomingPacket
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// CS Name: ::IgnoranceCore::IgnoranceIncomingPacket
struct CORDL_TYPE IgnoranceIncomingPacket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceIncomingPacket();

  // Ctor Parameters [CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Payload", ty: "::ENet::Packet", modifiers: "", def_value: None }]
  constexpr IgnoranceIncomingPacket(uint8_t Channel, uint32_t NativePeerId, ::ENet::Packet Payload) noexcept;

  /// @brief Field Channel, offset: 0x0, size: 0x1, def value: None
  uint8_t Channel;

  /// @brief Field NativePeerId, offset: 0x4, size: 0x4, def value: None
  uint32_t NativePeerId;

  /// @brief Field Payload, offset: 0x8, size: 0x8, def value: None
  ::ENet::Packet Payload;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17706 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceIncomingPacket, 0x10>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceIncomingPacket, Channel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceIncomingPacket, NativePeerId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceIncomingPacket, Payload) == 0x8, "Offset mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceIncomingPacket, "IgnoranceCore", "IgnoranceIncomingPacket");
