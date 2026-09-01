#pragma once
// IWYU pragma private; include "GlobalNamespace\NetDataWriterExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::NetDataWriterExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetDataWriterExtensions*, "", "NetDataWriterExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetDataWriterExtensions
class CORDL_TYPE NetDataWriterExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetUpPacket, addr 0x333b378, size 0x4, virtual false, abstract: false, final false
  static inline void SetUpPacket(::LiteNetLib::Utils::NetDataWriter* netDataWriter, uint8_t senderId, uint8_t receiverId, ::GlobalNamespace::PacketOption packetOptions);

  /// @brief Method SetUpPacket, addr 0x333b37c, size 0x4c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetDataWriterExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
