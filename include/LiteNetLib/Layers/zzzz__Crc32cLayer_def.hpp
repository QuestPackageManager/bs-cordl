#pragma once
// IWYU pragma private; include "LiteNetLib\Layers\Crc32cLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Crc32cLayer)
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Layers {
class Crc32cLayer;
}
// Write type traits
MARK_REF_T(::LiteNetLib::Layers::Crc32cLayer*);
DEFINE_IL2CPP_CLASS(::LiteNetLib::Layers::Crc32cLayer*, "LiteNetLib.Layers", "Crc32cLayer");
// Dependencies LiteNetLib.Layers.PacketLayerBase
namespace LiteNetLib::Layers {
// Is value type: false
// CS Name: LiteNetLib.Layers.Crc32cLayer
class CORDL_TYPE Crc32cLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
  // Declarations
  static inline ::LiteNetLib::Layers::Crc32cLayer* New_ctor();

  /// @brief Method ProcessInboundPacket, addr 0x58adc6c, size 0x184, virtual true, abstract: false, final false
  inline void ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length);

  /// @brief Method ProcessOutBoundPacket, addr 0x58addf0, size 0xa0, virtual true, abstract: false, final false
  inline void ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length);

  /// @brief Method .ctor, addr 0x58adc58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Crc32cLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Crc32cLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Crc32cLayer(Crc32cLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Crc32cLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Crc32cLayer(Crc32cLayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20140 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LiteNetLib::Layers::Crc32cLayer) == 0x18, "Size mismatch!");

} // namespace LiteNetLib::Layers
