#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/Crc32cLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
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
MARK_REF_PTR_T(::LiteNetLib::Layers::Crc32cLayer);
// Dependencies LiteNetLib.Layers.PacketLayerBase
namespace LiteNetLib::Layers {
// Is value type: false
// CS Name: LiteNetLib.Layers.Crc32cLayer
class CORDL_TYPE Crc32cLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
  // Declarations
  static inline ::LiteNetLib::Layers::Crc32cLayer* New_ctor();

  /// @brief Method ProcessInboundPacket, addr 0x3ac01e4, size 0x170, virtual true, abstract: false, final false
  inline void ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method ProcessOutBoundPacket, addr 0x3ac0354, size 0xa0, virtual true, abstract: false, final false
  inline void ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method .ctor, addr 0x3ac019c, size 0x20, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Layers::Crc32cLayer, 0x18>, "Size mismatch!");

} // namespace LiteNetLib::Layers
NEED_NO_BOX(::LiteNetLib::Layers::Crc32cLayer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Layers::Crc32cLayer*, "LiteNetLib.Layers", "Crc32cLayer");
