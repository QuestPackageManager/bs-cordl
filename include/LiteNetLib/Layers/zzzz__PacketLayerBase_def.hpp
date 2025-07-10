#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/PacketLayerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PacketLayerBase)
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Layers {
class PacketLayerBase;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Layers::PacketLayerBase);
// Dependencies System.Object
namespace LiteNetLib::Layers {
// Is value type: false
// CS Name: LiteNetLib.Layers.PacketLayerBase
class CORDL_TYPE PacketLayerBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field ExtraPacketSizeForLayer, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ExtraPacketSizeForLayer, put = __cordl_internal_set_ExtraPacketSizeForLayer)) int32_t ExtraPacketSizeForLayer;

  static inline ::LiteNetLib::Layers::PacketLayerBase* New_ctor(int32_t extraPacketSizeForLayer);

  /// @brief Method ProcessInboundPacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method ProcessOutBoundPacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  constexpr int32_t const& __cordl_internal_get_ExtraPacketSizeForLayer() const;

  constexpr int32_t& __cordl_internal_get_ExtraPacketSizeForLayer();

  constexpr void __cordl_internal_set_ExtraPacketSizeForLayer(int32_t value);

  /// @brief Method .ctor, addr 0x3abfe20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t extraPacketSizeForLayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketLayerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PacketLayerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketLayerBase(PacketLayerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketLayerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketLayerBase(PacketLayerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16628 };

  /// @brief Field ExtraPacketSizeForLayer, offset: 0x10, size: 0x4, def value: None
  int32_t ___ExtraPacketSizeForLayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::Layers::PacketLayerBase, ___ExtraPacketSizeForLayer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::Layers::PacketLayerBase, 0x18>, "Size mismatch!");

} // namespace LiteNetLib::Layers
NEED_NO_BOX(::LiteNetLib::Layers::PacketLayerBase);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Layers::PacketLayerBase*, "LiteNetLib.Layers", "PacketLayerBase");
