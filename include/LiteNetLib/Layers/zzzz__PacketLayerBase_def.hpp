#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/PacketLayerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::LiteNetLib::Layers::PacketLayerBase*);
DEFINE_IL2CPP_CLASS(::LiteNetLib::Layers::PacketLayerBase*, "LiteNetLib.Layers", "PacketLayerBase");
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
  inline void ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length);

  /// @brief Method ProcessOutBoundPacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length);

  constexpr int32_t const& __cordl_internal_get_ExtraPacketSizeForLayer() const;

  constexpr int32_t& __cordl_internal_get_ExtraPacketSizeForLayer();

  constexpr void __cordl_internal_set_ExtraPacketSizeForLayer(int32_t value);

  /// @brief Method .ctor, addr 0x58afdf0, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20108 };

  /// @brief Field ExtraPacketSizeForLayer, offset: 0x10, size: 0x4, def value: None
  int32_t ___ExtraPacketSizeForLayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::Layers::PacketLayerBase, ___ExtraPacketSizeForLayer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::LiteNetLib::Layers::PacketLayerBase) == 0x18, "Size mismatch!");

} // namespace LiteNetLib::Layers
