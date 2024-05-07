#pragma once
// IWYU pragma private; include "GlobalNamespace/NetDataWriterExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetDataWriterExtensions)
namespace GlobalNamespace {
struct PacketOption;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class NetDataWriterExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetDataWriterExtensions);
// Type: ::NetDataWriterExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetDataWriterExtensions*
class CORDL_TYPE NetDataWriterExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetUpPacket, addr 0x10ab610, size 0x4, virtual false, abstract: false, final false
  static inline void SetUpPacket(::LiteNetLib::Utils::NetDataWriter* netDataWriter, uint8_t senderId, uint8_t receiverId, ::GlobalNamespace::PacketOption packetOptions);

  /// @brief Method SetUpPacket, addr 0x10ab614, size 0x4c, virtual false, abstract: false, final false
  static inline void SetUpPacket(::LiteNetLib::Utils::NetDataWriter* netDataWriter, uint8_t senderId, uint8_t receiverId, uint8_t packetOptions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDataWriterExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetDataWriterExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDataWriterExtensions(NetDataWriterExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDataWriterExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDataWriterExtensions(NetDataWriterExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetDataWriterExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetDataWriterExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetDataWriterExtensions*, "", "NetDataWriterExtensions");
